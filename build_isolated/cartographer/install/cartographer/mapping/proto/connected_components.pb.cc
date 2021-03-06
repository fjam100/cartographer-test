// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/connected_components.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/connected_components.pb.h"

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

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* ConnectedComponents_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectedComponents_reflection_ = NULL;
const ::google::protobuf::Descriptor* ConnectedComponents_ConnectedComponent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectedComponents_ConnectedComponent_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/connected_components.proto");
  GOOGLE_CHECK(file != NULL);
  ConnectedComponents_descriptor_ = file->message_type(0);
  static const int ConnectedComponents_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents, connected_component_),
  };
  ConnectedComponents_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectedComponents_descriptor_,
      ConnectedComponents::default_instance_,
      ConnectedComponents_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectedComponents));
  ConnectedComponents_ConnectedComponent_descriptor_ = ConnectedComponents_descriptor_->nested_type(0);
  static const int ConnectedComponents_ConnectedComponent_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents_ConnectedComponent, trajectory_id_),
  };
  ConnectedComponents_ConnectedComponent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectedComponents_ConnectedComponent_descriptor_,
      ConnectedComponents_ConnectedComponent::default_instance_,
      ConnectedComponents_ConnectedComponent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents_ConnectedComponent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectedComponents_ConnectedComponent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectedComponents_ConnectedComponent));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectedComponents_descriptor_, &ConnectedComponents::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectedComponents_ConnectedComponent_descriptor_, &ConnectedComponents_ConnectedComponent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto() {
  delete ConnectedComponents::default_instance_;
  delete ConnectedComponents_reflection_;
  delete ConnectedComponents_ConnectedComponent::default_instance_;
  delete ConnectedComponents_ConnectedComponent_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n5cartographer/mapping/proto/connected_c"
    "omponents.proto\022\032cartographer.mapping.pr"
    "oto\"\243\001\n\023ConnectedComponents\022_\n\023connected"
    "_component\030\001 \003(\0132B.cartographer.mapping."
    "proto.ConnectedComponents.ConnectedCompo"
    "nent\032+\n\022ConnectedComponent\022\025\n\rtrajectory"
    "_id\030\001 \003(\005B\037B\035ConnectedComponentsOuterCla"
    "ss", 282);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/connected_components.proto", &protobuf_RegisterTypes);
  ConnectedComponents::default_instance_ = new ConnectedComponents();
  ConnectedComponents_ConnectedComponent::default_instance_ = new ConnectedComponents_ConnectedComponent();
  ConnectedComponents::default_instance_->InitAsDefaultInstance();
  ConnectedComponents_ConnectedComponent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ConnectedComponents_ConnectedComponent::kTrajectoryIdFieldNumber;
#endif  // !_MSC_VER

ConnectedComponents_ConnectedComponent::ConnectedComponents_ConnectedComponent()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectedComponents_ConnectedComponent::InitAsDefaultInstance() {
}

ConnectedComponents_ConnectedComponent::ConnectedComponents_ConnectedComponent(const ConnectedComponents_ConnectedComponent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectedComponents_ConnectedComponent::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectedComponents_ConnectedComponent::~ConnectedComponents_ConnectedComponent() {
  SharedDtor();
}

void ConnectedComponents_ConnectedComponent::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConnectedComponents_ConnectedComponent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectedComponents_ConnectedComponent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectedComponents_ConnectedComponent_descriptor_;
}

const ConnectedComponents_ConnectedComponent& ConnectedComponents_ConnectedComponent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  return *default_instance_;
}

ConnectedComponents_ConnectedComponent* ConnectedComponents_ConnectedComponent::default_instance_ = NULL;

ConnectedComponents_ConnectedComponent* ConnectedComponents_ConnectedComponent::New() const {
  return new ConnectedComponents_ConnectedComponent;
}

void ConnectedComponents_ConnectedComponent::Clear() {
  trajectory_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectedComponents_ConnectedComponent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 trajectory_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_trajectory_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_trajectory_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_trajectory_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_trajectory_id;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectedComponents_ConnectedComponent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 trajectory_id = 1;
  for (int i = 0; i < this->trajectory_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->trajectory_id(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectedComponents_ConnectedComponent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated int32 trajectory_id = 1;
  for (int i = 0; i < this->trajectory_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(1, this->trajectory_id(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectedComponents_ConnectedComponent::ByteSize() const {
  int total_size = 0;

  // repeated int32 trajectory_id = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->trajectory_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->trajectory_id(i));
    }
    total_size += 1 * this->trajectory_id_size() + data_size;
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

void ConnectedComponents_ConnectedComponent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectedComponents_ConnectedComponent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectedComponents_ConnectedComponent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectedComponents_ConnectedComponent::MergeFrom(const ConnectedComponents_ConnectedComponent& from) {
  GOOGLE_CHECK_NE(&from, this);
  trajectory_id_.MergeFrom(from.trajectory_id_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectedComponents_ConnectedComponent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectedComponents_ConnectedComponent::CopyFrom(const ConnectedComponents_ConnectedComponent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectedComponents_ConnectedComponent::IsInitialized() const {

  return true;
}

void ConnectedComponents_ConnectedComponent::Swap(ConnectedComponents_ConnectedComponent* other) {
  if (other != this) {
    trajectory_id_.Swap(&other->trajectory_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectedComponents_ConnectedComponent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectedComponents_ConnectedComponent_descriptor_;
  metadata.reflection = ConnectedComponents_ConnectedComponent_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int ConnectedComponents::kConnectedComponentFieldNumber;
#endif  // !_MSC_VER

ConnectedComponents::ConnectedComponents()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectedComponents::InitAsDefaultInstance() {
}

ConnectedComponents::ConnectedComponents(const ConnectedComponents& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectedComponents::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectedComponents::~ConnectedComponents() {
  SharedDtor();
}

void ConnectedComponents::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ConnectedComponents::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectedComponents::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectedComponents_descriptor_;
}

const ConnectedComponents& ConnectedComponents::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  return *default_instance_;
}

ConnectedComponents* ConnectedComponents::default_instance_ = NULL;

ConnectedComponents* ConnectedComponents::New() const {
  return new ConnectedComponents;
}

void ConnectedComponents::Clear() {
  connected_component_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectedComponents::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_connected_component:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_connected_component()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_connected_component;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectedComponents::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  for (int i = 0; i < this->connected_component_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->connected_component(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectedComponents::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  for (int i = 0; i < this->connected_component_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->connected_component(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectedComponents::ByteSize() const {
  int total_size = 0;

  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  total_size += 1 * this->connected_component_size();
  for (int i = 0; i < this->connected_component_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->connected_component(i));
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

void ConnectedComponents::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectedComponents* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectedComponents*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectedComponents::MergeFrom(const ConnectedComponents& from) {
  GOOGLE_CHECK_NE(&from, this);
  connected_component_.MergeFrom(from.connected_component_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectedComponents::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectedComponents::CopyFrom(const ConnectedComponents& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectedComponents::IsInitialized() const {

  return true;
}

void ConnectedComponents::Swap(ConnectedComponents* other) {
  if (other != this) {
    connected_component_.Swap(&other->connected_component_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectedComponents::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectedComponents_descriptor_;
  metadata.reflection = ConnectedComponents_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
