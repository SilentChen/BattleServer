// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LSToSDK.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LSToSDK.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace LSToSDK {

namespace {

const ::google::protobuf::Descriptor* UserLogin91_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserLogin91_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_LSToSDK_2eproto() {
  protobuf_AddDesc_LSToSDK_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LSToSDK.proto");
  GOOGLE_CHECK(file != NULL);
  UserLogin91_descriptor_ = file->message_type(0);
  static const int UserLogin91_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLogin91, mgsid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLogin91, logininfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLogin91, gcid_),
  };
  UserLogin91_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserLogin91_descriptor_,
      UserLogin91::default_instance_,
      UserLogin91_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLogin91, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserLogin91, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserLogin91));
  MsgID_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LSToSDK_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserLogin91_descriptor_, &UserLogin91::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LSToSDK_2eproto() {
  delete UserLogin91::default_instance_;
  delete UserLogin91_reflection_;
}

void protobuf_AddDesc_LSToSDK_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rLSToSDK.proto\022\007LSToSDK\"i\n\013UserLogin91\022"
    "9\n\005mgsid\030\001 \001(\0162\016.LSToSDK.MsgID:\032eMsgToGC"
    "FromBS_91UserLogin\022\021\n\tlogininfo\030\002 \001(\t\022\014\n"
    "\004gcid\030\004 \001(\005*\'\n\005MsgID\022\036\n\032eMsgToGCFromBS_9"
    "1UserLogin\020\001", 172);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LSToSDK.proto", &protobuf_RegisterTypes);
  UserLogin91::default_instance_ = new UserLogin91();
  UserLogin91::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LSToSDK_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LSToSDK_2eproto {
  StaticDescriptorInitializer_LSToSDK_2eproto() {
    protobuf_AddDesc_LSToSDK_2eproto();
  }
} static_descriptor_initializer_LSToSDK_2eproto_;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgID_descriptor_;
}
bool MsgID_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int UserLogin91::kMgsidFieldNumber;
const int UserLogin91::kLogininfoFieldNumber;
const int UserLogin91::kGcidFieldNumber;
#endif  // !_MSC_VER

UserLogin91::UserLogin91()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LSToSDK.UserLogin91)
}

void UserLogin91::InitAsDefaultInstance() {
}

UserLogin91::UserLogin91(const UserLogin91& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LSToSDK.UserLogin91)
}

void UserLogin91::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  mgsid_ = 1;
  logininfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gcid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserLogin91::~UserLogin91() {
  // @@protoc_insertion_point(destructor:LSToSDK.UserLogin91)
  SharedDtor();
}

void UserLogin91::SharedDtor() {
  if (logininfo_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete logininfo_;
  }
  if (this != default_instance_) {
  }
}

void UserLogin91::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserLogin91::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserLogin91_descriptor_;
}

const UserLogin91& UserLogin91::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LSToSDK_2eproto();
  return *default_instance_;
}

UserLogin91* UserLogin91::default_instance_ = NULL;

UserLogin91* UserLogin91::New() const {
  return new UserLogin91;
}

void UserLogin91::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    mgsid_ = 1;
    if (has_logininfo()) {
      if (logininfo_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        logininfo_->clear();
      }
    }
    gcid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserLogin91::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LSToSDK.UserLogin91)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LSToSDK.MsgID mgsid = 1 [default = eMsgToGCFromBS_91UserLogin];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::LSToSDK::MsgID_IsValid(value)) {
            set_mgsid(static_cast< ::LSToSDK::MsgID >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_logininfo;
        break;
      }

      // optional string logininfo = 2;
      case 2: {
        if (tag == 18) {
         parse_logininfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_logininfo()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->logininfo().data(), this->logininfo().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "logininfo");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_gcid;
        break;
      }

      // optional int32 gcid = 4;
      case 4: {
        if (tag == 32) {
         parse_gcid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gcid_)));
          set_has_gcid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LSToSDK.UserLogin91)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LSToSDK.UserLogin91)
  return false;
#undef DO_
}

void UserLogin91::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LSToSDK.UserLogin91)
  // optional .LSToSDK.MsgID mgsid = 1 [default = eMsgToGCFromBS_91UserLogin];
  if (has_mgsid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->mgsid(), output);
  }

  // optional string logininfo = 2;
  if (has_logininfo()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->logininfo().data(), this->logininfo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "logininfo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->logininfo(), output);
  }

  // optional int32 gcid = 4;
  if (has_gcid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->gcid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LSToSDK.UserLogin91)
}

::google::protobuf::uint8* UserLogin91::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSToSDK.UserLogin91)
  // optional .LSToSDK.MsgID mgsid = 1 [default = eMsgToGCFromBS_91UserLogin];
  if (has_mgsid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->mgsid(), target);
  }

  // optional string logininfo = 2;
  if (has_logininfo()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->logininfo().data(), this->logininfo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "logininfo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->logininfo(), target);
  }

  // optional int32 gcid = 4;
  if (has_gcid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->gcid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSToSDK.UserLogin91)
  return target;
}

int UserLogin91::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .LSToSDK.MsgID mgsid = 1 [default = eMsgToGCFromBS_91UserLogin];
    if (has_mgsid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->mgsid());
    }

    // optional string logininfo = 2;
    if (has_logininfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->logininfo());
    }

    // optional int32 gcid = 4;
    if (has_gcid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gcid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserLogin91::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserLogin91* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserLogin91*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserLogin91::MergeFrom(const UserLogin91& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_mgsid()) {
      set_mgsid(from.mgsid());
    }
    if (from.has_logininfo()) {
      set_logininfo(from.logininfo());
    }
    if (from.has_gcid()) {
      set_gcid(from.gcid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserLogin91::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserLogin91::CopyFrom(const UserLogin91& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserLogin91::IsInitialized() const {

  return true;
}

void UserLogin91::Swap(UserLogin91* other) {
  if (other != this) {
    std::swap(mgsid_, other->mgsid_);
    std::swap(logininfo_, other->logininfo_);
    std::swap(gcid_, other->gcid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserLogin91::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserLogin91_descriptor_;
  metadata.reflection = UserLogin91_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSToSDK

// @@protoc_insertion_point(global_scope)
