@echo off

echo ----------------------------------------------------
echo Clear File
echo Delete all files with ending:
echo *.aps *.idb *.ncp *.obj *.pch *.tmp *.sbr *.suo *.sdf *.suo
echo Visual c++/.Net junk 
echo ----------------------------------------------------
pause

del /F /Q /S *.aps *.idb *.ncp *.obj *.pch *.sbr *.user *.tmp *.pdb *.bsc *.ilk *.res *.ncb *.opt *.suo *.manifest *.dep *.sdf *.suo

pause

