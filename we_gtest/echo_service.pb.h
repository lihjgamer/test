// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo_service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 3021000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_echo_5fservice_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_echo_5fservice_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_echo_5fservice_2eproto;
namespace pb {
class AddRequest;
struct AddRequestDefaultTypeInternal;
extern AddRequestDefaultTypeInternal _AddRequest_default_instance_;
class AddResponse;
struct AddResponseDefaultTypeInternal;
extern AddResponseDefaultTypeInternal _AddResponse_default_instance_;
class EchoRequest;
struct EchoRequestDefaultTypeInternal;
extern EchoRequestDefaultTypeInternal _EchoRequest_default_instance_;
class EchoResponse;
struct EchoResponseDefaultTypeInternal;
extern EchoResponseDefaultTypeInternal _EchoResponse_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template <>
::pb::AddRequest* Arena::CreateMaybeMessage<::pb::AddRequest>(Arena*);
template <>
::pb::AddResponse* Arena::CreateMaybeMessage<::pb::AddResponse>(Arena*);
template <>
::pb::EchoRequest* Arena::CreateMaybeMessage<::pb::EchoRequest>(Arena*);
template <>
::pb::EchoResponse* Arena::CreateMaybeMessage<::pb::EchoResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace pb {

// ===================================================================


// -------------------------------------------------------------------

class EchoRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.EchoRequest) */ {
 public:
  inline EchoRequest() : EchoRequest(nullptr) {}
  ~EchoRequest() override;
  explicit PROTOBUF_CONSTEXPR EchoRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoRequest(const EchoRequest& from);
  EchoRequest(EchoRequest&& from) noexcept
    : EchoRequest() {
    *this = ::std::move(from);
  }

  inline EchoRequest& operator=(const EchoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoRequest& operator=(EchoRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoRequest* internal_default_instance() {
    return reinterpret_cast<const EchoRequest*>(
               &_EchoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EchoRequest& a, EchoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const EchoRequest& from) {
    EchoRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "pb.EchoRequest";
  }
  protected:
  explicit EchoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:pb.EchoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_echo_5fservice_2eproto;
};// -------------------------------------------------------------------

class EchoResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.EchoResponse) */ {
 public:
  inline EchoResponse() : EchoResponse(nullptr) {}
  ~EchoResponse() override;
  explicit PROTOBUF_CONSTEXPR EchoResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoResponse(const EchoResponse& from);
  EchoResponse(EchoResponse&& from) noexcept
    : EchoResponse() {
    *this = ::std::move(from);
  }

  inline EchoResponse& operator=(const EchoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoResponse& operator=(EchoResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoResponse* internal_default_instance() {
    return reinterpret_cast<const EchoResponse*>(
               &_EchoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(EchoResponse& a, EchoResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const EchoResponse& from) {
    EchoResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "pb.EchoResponse";
  }
  protected:
  explicit EchoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:pb.EchoResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_echo_5fservice_2eproto;
};// -------------------------------------------------------------------

class AddRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.AddRequest) */ {
 public:
  inline AddRequest() : AddRequest(nullptr) {}
  ~AddRequest() override;
  explicit PROTOBUF_CONSTEXPR AddRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AddRequest(const AddRequest& from);
  AddRequest(AddRequest&& from) noexcept
    : AddRequest() {
    *this = ::std::move(from);
  }

  inline AddRequest& operator=(const AddRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddRequest& operator=(AddRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AddRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const AddRequest* internal_default_instance() {
    return reinterpret_cast<const AddRequest*>(
               &_AddRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AddRequest& a, AddRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(AddRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AddRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AddRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AddRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AddRequest& from) {
    AddRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "pb.AddRequest";
  }
  protected:
  explicit AddRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // int32 a = 1;
  void clear_a();
  int32_t a() const;
  void set_a(int32_t value);
  private:
  int32_t _internal_a() const;
  void _internal_set_a(int32_t value);
  public:

  // int32 b = 2;
  void clear_b();
  int32_t b() const;
  void set_b(int32_t value);
  private:
  int32_t _internal_b() const;
  void _internal_set_b(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:pb.AddRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t a_;
    int32_t b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_echo_5fservice_2eproto;
};// -------------------------------------------------------------------

class AddResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.AddResponse) */ {
 public:
  inline AddResponse() : AddResponse(nullptr) {}
  ~AddResponse() override;
  explicit PROTOBUF_CONSTEXPR AddResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AddResponse(const AddResponse& from);
  AddResponse(AddResponse&& from) noexcept
    : AddResponse() {
    *this = ::std::move(from);
  }

  inline AddResponse& operator=(const AddResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddResponse& operator=(AddResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AddResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const AddResponse* internal_default_instance() {
    return reinterpret_cast<const AddResponse*>(
               &_AddResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(AddResponse& a, AddResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(AddResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AddResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AddResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AddResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AddResponse& from) {
    AddResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "pb.AddResponse";
  }
  protected:
  explicit AddResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // int32 result = 1;
  void clear_result();
  int32_t result() const;
  void set_result(int32_t value);
  private:
  int32_t _internal_result() const;
  void _internal_set_result(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:pb.AddResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t result_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_echo_5fservice_2eproto;
};
// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// EchoRequest

// string message = 1;
inline void EchoRequest::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& EchoRequest::message() const {
  // @@protoc_insertion_point(field_get:pb.EchoRequest.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoRequest::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:pb.EchoRequest.message)
}
inline std::string* EchoRequest::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:pb.EchoRequest.message)
  return _s;
}
inline const std::string& EchoRequest::_internal_message() const {
  return _impl_.message_.Get();
}
inline void EchoRequest::_internal_set_message(const std::string& value) {

  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* EchoRequest::_internal_mutable_message() {

  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* EchoRequest::release_message() {
  // @@protoc_insertion_point(field_release:pb.EchoRequest.message)
  return _impl_.message_.Release();
}
inline void EchoRequest::set_allocated_message(std::string* message) {
  if (message != nullptr) {

  } else {

  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:pb.EchoRequest.message)
}

// -------------------------------------------------------------------

// EchoResponse

// string message = 1;
inline void EchoResponse::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& EchoResponse::message() const {
  // @@protoc_insertion_point(field_get:pb.EchoResponse.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoResponse::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:pb.EchoResponse.message)
}
inline std::string* EchoResponse::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:pb.EchoResponse.message)
  return _s;
}
inline const std::string& EchoResponse::_internal_message() const {
  return _impl_.message_.Get();
}
inline void EchoResponse::_internal_set_message(const std::string& value) {

  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* EchoResponse::_internal_mutable_message() {

  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* EchoResponse::release_message() {
  // @@protoc_insertion_point(field_release:pb.EchoResponse.message)
  return _impl_.message_.Release();
}
inline void EchoResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {

  } else {

  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:pb.EchoResponse.message)
}

// -------------------------------------------------------------------

// AddRequest

// int32 a = 1;
inline void AddRequest::clear_a() {
  _impl_.a_ = 0;
}
inline int32_t AddRequest::_internal_a() const {
  return _impl_.a_;
}
inline int32_t AddRequest::a() const {
  // @@protoc_insertion_point(field_get:pb.AddRequest.a)
  return _internal_a();
}
inline void AddRequest::_internal_set_a(int32_t value) {

  _impl_.a_ = value;
}
inline void AddRequest::set_a(int32_t value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:pb.AddRequest.a)
}

// int32 b = 2;
inline void AddRequest::clear_b() {
  _impl_.b_ = 0;
}
inline int32_t AddRequest::_internal_b() const {
  return _impl_.b_;
}
inline int32_t AddRequest::b() const {
  // @@protoc_insertion_point(field_get:pb.AddRequest.b)
  return _internal_b();
}
inline void AddRequest::_internal_set_b(int32_t value) {

  _impl_.b_ = value;
}
inline void AddRequest::set_b(int32_t value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:pb.AddRequest.b)
}

// -------------------------------------------------------------------

// AddResponse

// int32 result = 1;
inline void AddResponse::clear_result() {
  _impl_.result_ = 0;
}
inline int32_t AddResponse::_internal_result() const {
  return _impl_.result_;
}
inline int32_t AddResponse::result() const {
  // @@protoc_insertion_point(field_get:pb.AddResponse.result)
  return _internal_result();
}
inline void AddResponse::_internal_set_result(int32_t value) {

  _impl_.result_ = value;
}
inline void AddResponse::set_result(int32_t value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:pb.AddResponse.result)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto_2epb_2eh
