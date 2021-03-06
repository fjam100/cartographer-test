// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/serialization.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/serialization.pb.h"

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

const ::google::protobuf::Descriptor* Submap_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Submap_reflection_ = NULL;
const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;
const ::google::protobuf::Descriptor* SerializedData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SerializedData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/serialization.proto");
  GOOGLE_CHECK(file != NULL);
  Submap_descriptor_ = file->message_type(0);
  static const int Submap_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Submap, submap_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Submap, submap_2d_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Submap, submap_3d_),
  };
  Submap_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Submap_descriptor_,
      Submap::default_instance_,
      Submap_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Submap, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Submap, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Submap));
  Node_descriptor_ = file->message_type(1);
  static const int Node_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, node_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, node_data_),
  };
  Node_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Node));
  SerializedData_descriptor_ = file->message_type(2);
  static const int SerializedData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedData, submap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedData, node_),
  };
  SerializedData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SerializedData_descriptor_,
      SerializedData::default_instance_,
      SerializedData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SerializedData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Submap_descriptor_, &Submap::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Node_descriptor_, &Node::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SerializedData_descriptor_, &SerializedData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fserialization_2eproto() {
  delete Submap::default_instance_;
  delete Submap_reflection_;
  delete Node::default_instance_;
  delete Node_reflection_;
  delete SerializedData::default_instance_;
  delete SerializedData_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsubmap_2eproto();
  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n.cartographer/mapping/proto/serializati"
    "on.proto\022\032cartographer.mapping.proto\0322ca"
    "rtographer/mapping/proto/sparse_pose_gra"
    "ph.proto\032\'cartographer/mapping/proto/sub"
    "map.proto\0325cartographer/mapping/proto/tr"
    "ajectory_node_data.proto\"\263\001\n\006Submap\0227\n\ts"
    "ubmap_id\030\001 \001(\0132$.cartographer.mapping.pr"
    "oto.SubmapId\0227\n\tsubmap_2d\030\002 \001(\0132$.cartog"
    "rapher.mapping.proto.Submap2D\0227\n\tsubmap_"
    "3d\030\003 \001(\0132$.cartographer.mapping.proto.Su"
    "bmap3D\"~\n\004Node\0223\n\007node_id\030\001 \001(\0132\".cartog"
    "rapher.mapping.proto.NodeId\022A\n\tnode_data"
    "\030\005 \001(\0132..cartographer.mapping.proto.Traj"
    "ectoryNodeData\"t\n\016SerializedData\0222\n\006subm"
    "ap\030\001 \001(\0132\".cartographer.mapping.proto.Su"
    "bmap\022.\n\004node\030\002 \001(\0132 .cartographer.mappin"
    "g.proto.Node", 652);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/serialization.proto", &protobuf_RegisterTypes);
  Submap::default_instance_ = new Submap();
  Node::default_instance_ = new Node();
  SerializedData::default_instance_ = new SerializedData();
  Submap::default_instance_->InitAsDefaultInstance();
  Node::default_instance_->InitAsDefaultInstance();
  SerializedData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fserialization_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fserialization_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fserialization_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fserialization_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Submap::kSubmapIdFieldNumber;
const int Submap::kSubmap2DFieldNumber;
const int Submap::kSubmap3DFieldNumber;
#endif  // !_MSC_VER

Submap::Submap()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Submap::InitAsDefaultInstance() {
  submap_id_ = const_cast< ::cartographer::mapping::proto::SubmapId*>(&::cartographer::mapping::proto::SubmapId::default_instance());
  submap_2d_ = const_cast< ::cartographer::mapping::proto::Submap2D*>(&::cartographer::mapping::proto::Submap2D::default_instance());
  submap_3d_ = const_cast< ::cartographer::mapping::proto::Submap3D*>(&::cartographer::mapping::proto::Submap3D::default_instance());
}

Submap::Submap(const Submap& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Submap::SharedCtor() {
  _cached_size_ = 0;
  submap_id_ = NULL;
  submap_2d_ = NULL;
  submap_3d_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Submap::~Submap() {
  SharedDtor();
}

void Submap::SharedDtor() {
  if (this != default_instance_) {
    delete submap_id_;
    delete submap_2d_;
    delete submap_3d_;
  }
}

void Submap::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Submap::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Submap_descriptor_;
}

const Submap& Submap::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto();
  return *default_instance_;
}

Submap* Submap::default_instance_ = NULL;

Submap* Submap::New() const {
  return new Submap;
}

void Submap::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_submap_id()) {
      if (submap_id_ != NULL) submap_id_->::cartographer::mapping::proto::SubmapId::Clear();
    }
    if (has_submap_2d()) {
      if (submap_2d_ != NULL) submap_2d_->::cartographer::mapping::proto::Submap2D::Clear();
    }
    if (has_submap_3d()) {
      if (submap_3d_ != NULL) submap_3d_->::cartographer::mapping::proto::Submap3D::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Submap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping.proto.SubmapId submap_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_submap_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_submap_2d;
        break;
      }

      // optional .cartographer.mapping.proto.Submap2D submap_2d = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_submap_2d:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_submap_2d()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_submap_3d;
        break;
      }

      // optional .cartographer.mapping.proto.Submap3D submap_3d = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_submap_3d:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_submap_3d()));
        } else {
          goto handle_uninterpreted;
        }
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

void Submap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cartographer.mapping.proto.SubmapId submap_id = 1;
  if (has_submap_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->submap_id(), output);
  }

  // optional .cartographer.mapping.proto.Submap2D submap_2d = 2;
  if (has_submap_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->submap_2d(), output);
  }

  // optional .cartographer.mapping.proto.Submap3D submap_3d = 3;
  if (has_submap_3d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->submap_3d(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Submap::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .cartographer.mapping.proto.SubmapId submap_id = 1;
  if (has_submap_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->submap_id(), target);
  }

  // optional .cartographer.mapping.proto.Submap2D submap_2d = 2;
  if (has_submap_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->submap_2d(), target);
  }

  // optional .cartographer.mapping.proto.Submap3D submap_3d = 3;
  if (has_submap_3d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->submap_3d(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Submap::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.mapping.proto.SubmapId submap_id = 1;
    if (has_submap_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->submap_id());
    }

    // optional .cartographer.mapping.proto.Submap2D submap_2d = 2;
    if (has_submap_2d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->submap_2d());
    }

    // optional .cartographer.mapping.proto.Submap3D submap_3d = 3;
    if (has_submap_3d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->submap_3d());
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

void Submap::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Submap* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Submap*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Submap::MergeFrom(const Submap& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_submap_id()) {
      mutable_submap_id()->::cartographer::mapping::proto::SubmapId::MergeFrom(from.submap_id());
    }
    if (from.has_submap_2d()) {
      mutable_submap_2d()->::cartographer::mapping::proto::Submap2D::MergeFrom(from.submap_2d());
    }
    if (from.has_submap_3d()) {
      mutable_submap_3d()->::cartographer::mapping::proto::Submap3D::MergeFrom(from.submap_3d());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Submap::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Submap::CopyFrom(const Submap& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Submap::IsInitialized() const {

  return true;
}

void Submap::Swap(Submap* other) {
  if (other != this) {
    std::swap(submap_id_, other->submap_id_);
    std::swap(submap_2d_, other->submap_2d_);
    std::swap(submap_3d_, other->submap_3d_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Submap::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Submap_descriptor_;
  metadata.reflection = Submap_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Node::kNodeIdFieldNumber;
const int Node::kNodeDataFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Node::InitAsDefaultInstance() {
  node_id_ = const_cast< ::cartographer::mapping::proto::NodeId*>(&::cartographer::mapping::proto::NodeId::default_instance());
  node_data_ = const_cast< ::cartographer::mapping::proto::TrajectoryNodeData*>(&::cartographer::mapping::proto::TrajectoryNodeData::default_instance());
}

Node::Node(const Node& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Node::SharedCtor() {
  _cached_size_ = 0;
  node_id_ = NULL;
  node_data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  SharedDtor();
}

void Node::SharedDtor() {
  if (this != default_instance_) {
    delete node_id_;
    delete node_data_;
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New() const {
  return new Node;
}

void Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_node_id()) {
      if (node_id_ != NULL) node_id_->::cartographer::mapping::proto::NodeId::Clear();
    }
    if (has_node_data()) {
      if (node_data_ != NULL) node_data_->::cartographer::mapping::proto::TrajectoryNodeData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping.proto.NodeId node_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_node_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_node_data;
        break;
      }

      // optional .cartographer.mapping.proto.TrajectoryNodeData node_data = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_node_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_node_data()));
        } else {
          goto handle_uninterpreted;
        }
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

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cartographer.mapping.proto.NodeId node_id = 1;
  if (has_node_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->node_id(), output);
  }

  // optional .cartographer.mapping.proto.TrajectoryNodeData node_data = 5;
  if (has_node_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->node_data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .cartographer.mapping.proto.NodeId node_id = 1;
  if (has_node_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->node_id(), target);
  }

  // optional .cartographer.mapping.proto.TrajectoryNodeData node_data = 5;
  if (has_node_data()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->node_data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.mapping.proto.NodeId node_id = 1;
    if (has_node_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->node_id());
    }

    // optional .cartographer.mapping.proto.TrajectoryNodeData node_data = 5;
    if (has_node_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->node_data());
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

void Node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_node_id()) {
      mutable_node_id()->::cartographer::mapping::proto::NodeId::MergeFrom(from.node_id());
    }
    if (from.has_node_data()) {
      mutable_node_data()->::cartographer::mapping::proto::TrajectoryNodeData::MergeFrom(from.node_data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {

  return true;
}

void Node::Swap(Node* other) {
  if (other != this) {
    std::swap(node_id_, other->node_id_);
    std::swap(node_data_, other->node_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SerializedData::kSubmapFieldNumber;
const int SerializedData::kNodeFieldNumber;
#endif  // !_MSC_VER

SerializedData::SerializedData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SerializedData::InitAsDefaultInstance() {
  submap_ = const_cast< ::cartographer::mapping::proto::Submap*>(&::cartographer::mapping::proto::Submap::default_instance());
  node_ = const_cast< ::cartographer::mapping::proto::Node*>(&::cartographer::mapping::proto::Node::default_instance());
}

SerializedData::SerializedData(const SerializedData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SerializedData::SharedCtor() {
  _cached_size_ = 0;
  submap_ = NULL;
  node_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SerializedData::~SerializedData() {
  SharedDtor();
}

void SerializedData::SharedDtor() {
  if (this != default_instance_) {
    delete submap_;
    delete node_;
  }
}

void SerializedData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SerializedData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SerializedData_descriptor_;
}

const SerializedData& SerializedData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fserialization_2eproto();
  return *default_instance_;
}

SerializedData* SerializedData::default_instance_ = NULL;

SerializedData* SerializedData::New() const {
  return new SerializedData;
}

void SerializedData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_submap()) {
      if (submap_ != NULL) submap_->::cartographer::mapping::proto::Submap::Clear();
    }
    if (has_node()) {
      if (node_ != NULL) node_->::cartographer::mapping::proto::Node::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SerializedData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping.proto.Submap submap = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_submap()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_node;
        break;
      }

      // optional .cartographer.mapping.proto.Node node = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_node:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_node()));
        } else {
          goto handle_uninterpreted;
        }
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

void SerializedData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .cartographer.mapping.proto.Submap submap = 1;
  if (has_submap()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->submap(), output);
  }

  // optional .cartographer.mapping.proto.Node node = 2;
  if (has_node()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->node(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SerializedData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .cartographer.mapping.proto.Submap submap = 1;
  if (has_submap()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->submap(), target);
  }

  // optional .cartographer.mapping.proto.Node node = 2;
  if (has_node()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->node(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SerializedData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.mapping.proto.Submap submap = 1;
    if (has_submap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->submap());
    }

    // optional .cartographer.mapping.proto.Node node = 2;
    if (has_node()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->node());
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

void SerializedData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SerializedData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SerializedData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SerializedData::MergeFrom(const SerializedData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_submap()) {
      mutable_submap()->::cartographer::mapping::proto::Submap::MergeFrom(from.submap());
    }
    if (from.has_node()) {
      mutable_node()->::cartographer::mapping::proto::Node::MergeFrom(from.node());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SerializedData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SerializedData::CopyFrom(const SerializedData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SerializedData::IsInitialized() const {

  return true;
}

void SerializedData::Swap(SerializedData* other) {
  if (other != this) {
    std::swap(submap_, other->submap_);
    std::swap(node_, other->node_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SerializedData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SerializedData_descriptor_;
  metadata.reflection = SerializedData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
