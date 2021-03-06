@echo off

echo+
echo Copyright (c) tsymiar  2019-03-09
echo=

set BATDIR=%~dp0

echo ----------------------------------------------------
echo Extract pthread files
echo ----------------------------------------------------
if not exist "%BATDIR%ThirdFunc\pthread\Pre-built.2\lib" (
    cd lib-src
    7za x pthreads-w32-2-9-1-release.zip -o%BATDIR%ThirdFunc\pthread -y
    cd %BATDIR%
) else (
    echo pthread lib exist, skip extract pthread!
)

echo ----------------------------------------------------
echo Setup libmysql libs
echo ----------------------------------------------------
if not exist "%BATDIR%ThirdFunc\libmysql\" (
    md %BATDIR%ThirdFunc\libmysql\
)
if not exist "%BATDIR%ThirdFunc\libmysql\libmysql.lib" (
:    bitsadmin.exe /transfer libmysql /download /priority normal "https://downloads.mysql.com/archives/get/file/mysql-connector-c-6.1.11-win32.zip" "%BATDIR%ThirdFunc\libmysql\libmysql.zip"
:    powershell -command "& {&'Invoke-WebRequest' -Uri 'https://downloads.mysql.com/archives/get/file/mysql-connector-c-6.1.11-win32.zip' -OutFile 'ThirdFunc\libmysql\libmysql.zip' -UseBasicParsing}"; "& {&'New-Variable' -Name 'Destination' -Value '${BATDIR}ThirdFunc\libmysql\libmysql.zip'}"; "& {&'Invoke-Item' -Path $Destination}"
:    cd %BATDIR%ThirdFunc\libmysql
:    %BATDIR%lib-src\7za x libmysql.zip -o.
:    expand libmysql.zip -F:libmysql.* .
:    explorer libmysql.zip
    cd lib-src
    7za x mysql-connector-c-6.1.11-win32.zip -o%BATDIR%ThirdFunc\libmysql
    color e4
    cd %BATDIR%ThirdFunc\libmysql
    copy mysql-connector-c-6.1.11-win32\lib\* .
    rd /s /q %BATDIR%ThirdFunc\libmysql\mysql-connector-c-6.1.11-win32
:    echo Waitting for unzip libmysql.lib(.dll) to %BATDIR%ThirdFunc\libmysql
    color 07
    cd %BATDIR%
) else (
    echo libmysql.lib exist, skip setup mysql!
)

echo ----------------------------------------------------
echo Compile boost libraries
echo ----------------------------------------------------
set BOOST=%BATDIR%ThirdFunc\boost_1_60_0
if not exist "%BOOST%\stage\lib" (
    cd lib-src
:    set /p BOOST="set boost location:\n"
:    if "%BOOST%"=="" set BOOST=%BATDIR%ThirdFunc\boost_1_60_0
    7za x boost_1_60_0.7z -o%BATDIR%ThirdFunc
    cd %BOOST%
    if not exist bjam (
        call bootstrap.bat
    )
    echo compiling boost stage...
    bjam stage architecture=x86 address-model=32 --with-atomic --with-math --with-date_time --with-thread --with-filesystem --with-system --with-regex link=static runtime-link=shared threading=multi variant=debug
    cd %BATDIR%
) else (
    echo boost libraries exist, skip compile boost!
)

echo ----------------------------------------------------
echo Compile openssl library
echo ----------------------------------------------------
if not exist "%BATDIR%ThirdFunc\openssl-1.1.1a\lib\libcrypto.lib" (
    cd lib-src
    msiexec /package ActivePerl-5.20.2.2001-MSWin32-x64-298913.msi /qb
    echo finish install ActivePerl
    set SSLDIR=%BATDIR%ThirdFunc\openssl-1.1.1a
    if not exist "%SSLDIR%" (
        md "%SSLDIR%"
    )
    7za x openssl-1.1.1a.tar.gz -y
    7za x openssl-1.1.1a.tar -o%SSLDIR%\.. -y
    copy /y opensslconf.h %SSLDIR%\include\openssl
    cd %SSLDIR%
    call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"
    perl %SSLDIR%\Configure VC-WIN32 --prefix=%SSLDIR%
    if errorlevel 1 (
        echo fail to load perl Configure.
        cd %BATDIR%
        goto :eof
    )
    nmake
    nmake install
    if errorlevel 1 (
        echo fail to make/install ntlib.
    )
    cd %BATDIR%lib-src
    7za x openssl-1.1.1a.tar -o%SSLDIR%\.. -y 
    del openssl-1.1.1a.tar
    cd %BATDIR%
) else (
    echo libcrypto exist, skip compile openssl!
)

echo ----------------------------------------------------
echo Build AllServer solution
echo ----------------------------------------------------
set PTHREAD="%BATDIR%ThirdFunc\pthread\Pre-built.2"
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\MSBuild.exe" ./AllServer.sln /t:build /p:configuration="Debug" /m
if errorlevel 1 (
    echo fail to exec Community MSBuild.
    goto :eof
)

echo ----------------------------------------------------
echo Copy files to Bin
echo ----------------------------------------------------
if not exist Bin md Bin
copy /y %BATDIR%Debug\*.exe %BATDIR%Bin\
copy /y %BATDIR%Lib\Win32\Debug\*.dll %BATDIR%Bin\
copy /y %BATDIR%ThirdFunc\libmysql\libmysql.dll %BATDIR%Bin\
copy /y %BATDIR%ThirdFunc\openssl-1.1.1a\libcrypto-1_1.dll %BATDIR%Bin\
goto :eof
