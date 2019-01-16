/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef consumerProxy_TYPES_H
#define consumerProxy_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace CarreraConsumer {

class Message;

class Context;

class FetchRequest;

class QidResponse;

class FetchResponse;

class AckResult;

typedef struct _Message__isset {
  _Message__isset() : key(false), value(false), tag(false), offset(false) {}
  bool key :1;
  bool value :1;
  bool tag :1;
  bool offset :1;
} _Message__isset;

class Message {
 public:

  static const char* ascii_fingerprint; // = "5F9965D46A4F3845985AC0F9B81C3C69";
  static const uint8_t binary_fingerprint[16]; // = {0x5F,0x99,0x65,0xD4,0x6A,0x4F,0x38,0x45,0x98,0x5A,0xC0,0xF9,0xB8,0x1C,0x3C,0x69};

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : key(), value(), tag(), offset(0) {
  }

  virtual ~Message() throw();
  std::string key;
  std::string value;
  std::string tag;
  int64_t offset;

  _Message__isset __isset;

  void __set_key(const std::string& val);

  void __set_value(const std::string& val);

  void __set_tag(const std::string& val);

  void __set_offset(const int64_t val);

  bool operator == (const Message & rhs) const
  {
    if (!(key == rhs.key))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(tag == rhs.tag))
      return false;
    if (!(offset == rhs.offset))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Message& obj);
};

void swap(Message &a, Message &b);

typedef struct _Context__isset {
  _Context__isset() : groupId(false), topic(false), qid(false) {}
  bool groupId :1;
  bool topic :1;
  bool qid :1;
} _Context__isset;

class Context {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  Context(const Context&);
  Context& operator=(const Context&);
  Context() : groupId(), topic(), qid() {
  }

  virtual ~Context() throw();
  std::string groupId;
  std::string topic;
  std::string qid;

  _Context__isset __isset;

  void __set_groupId(const std::string& val);

  void __set_topic(const std::string& val);

  void __set_qid(const std::string& val);

  bool operator == (const Context & rhs) const
  {
    if (!(groupId == rhs.groupId))
      return false;
    if (!(topic == rhs.topic))
      return false;
    if (!(qid == rhs.qid))
      return false;
    return true;
  }
  bool operator != (const Context &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Context & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Context& obj);
};

void swap(Context &a, Context &b);

typedef struct _FetchRequest__isset {
  _FetchRequest__isset() : fetchOffset(false), maxBatchSize(false), maxLingerTime(false), version(false) {}
  bool fetchOffset :1;
  bool maxBatchSize :1;
  bool maxLingerTime :1;
  bool version :1;
} _FetchRequest__isset;

class FetchRequest {
 public:

  static const char* ascii_fingerprint; // = "906773A8CD439B466BD075DB396E9FD4";
  static const uint8_t binary_fingerprint[16]; // = {0x90,0x67,0x73,0xA8,0xCD,0x43,0x9B,0x46,0x6B,0xD0,0x75,0xDB,0x39,0x6E,0x9F,0xD4};

  FetchRequest(const FetchRequest&);
  FetchRequest& operator=(const FetchRequest&);
  FetchRequest() : consumerId(), groupId(), cluster(), maxBatchSize(0), maxLingerTime(0), version() {
  }

  virtual ~FetchRequest() throw();
  std::string consumerId;
  std::string groupId;
  std::string cluster;
  std::map<std::string, std::map<std::string, int64_t> >  fetchOffset;
  int32_t maxBatchSize;
  int32_t maxLingerTime;
  std::string version;

  _FetchRequest__isset __isset;

  void __set_consumerId(const std::string& val);

  void __set_groupId(const std::string& val);

  void __set_cluster(const std::string& val);

  void __set_fetchOffset(const std::map<std::string, std::map<std::string, int64_t> > & val);

  void __set_maxBatchSize(const int32_t val);

  void __set_maxLingerTime(const int32_t val);

  void __set_version(const std::string& val);

  bool operator == (const FetchRequest & rhs) const
  {
    if (!(consumerId == rhs.consumerId))
      return false;
    if (!(groupId == rhs.groupId))
      return false;
    if (!(cluster == rhs.cluster))
      return false;
    if (__isset.fetchOffset != rhs.__isset.fetchOffset)
      return false;
    else if (__isset.fetchOffset && !(fetchOffset == rhs.fetchOffset))
      return false;
    if (__isset.maxBatchSize != rhs.__isset.maxBatchSize)
      return false;
    else if (__isset.maxBatchSize && !(maxBatchSize == rhs.maxBatchSize))
      return false;
    if (__isset.maxLingerTime != rhs.__isset.maxLingerTime)
      return false;
    else if (__isset.maxLingerTime && !(maxLingerTime == rhs.maxLingerTime))
      return false;
    if (__isset.version != rhs.__isset.version)
      return false;
    else if (__isset.version && !(version == rhs.version))
      return false;
    return true;
  }
  bool operator != (const FetchRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FetchRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const FetchRequest& obj);
};

void swap(FetchRequest &a, FetchRequest &b);

typedef struct _QidResponse__isset {
  _QidResponse__isset() : nextRequestOffset(false) {}
  bool nextRequestOffset :1;
} _QidResponse__isset;

class QidResponse {
 public:

  static const char* ascii_fingerprint; // = "D27932A420DED5C23617C48CBE8CC55E";
  static const uint8_t binary_fingerprint[16]; // = {0xD2,0x79,0x32,0xA4,0x20,0xDE,0xD5,0xC2,0x36,0x17,0xC4,0x8C,0xBE,0x8C,0xC5,0x5E};

  QidResponse(const QidResponse&);
  QidResponse& operator=(const QidResponse&);
  QidResponse() : topic(), qid(), nextRequestOffset(0) {
  }

  virtual ~QidResponse() throw();
  std::string topic;
  std::string qid;
  int64_t nextRequestOffset;
  std::vector<Message>  messages;

  _QidResponse__isset __isset;

  void __set_topic(const std::string& val);

  void __set_qid(const std::string& val);

  void __set_nextRequestOffset(const int64_t val);

  void __set_messages(const std::vector<Message> & val);

  bool operator == (const QidResponse & rhs) const
  {
    if (!(topic == rhs.topic))
      return false;
    if (!(qid == rhs.qid))
      return false;
    if (__isset.nextRequestOffset != rhs.__isset.nextRequestOffset)
      return false;
    else if (__isset.nextRequestOffset && !(nextRequestOffset == rhs.nextRequestOffset))
      return false;
    if (!(messages == rhs.messages))
      return false;
    return true;
  }
  bool operator != (const QidResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const QidResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const QidResponse& obj);
};

void swap(QidResponse &a, QidResponse &b);

typedef struct _FetchResponse__isset {
  _FetchResponse__isset() : code(false) {}
  bool code :1;
} _FetchResponse__isset;

class FetchResponse {
 public:

  static const char* ascii_fingerprint; // = "B56E50C806471F5271B7B3E2704047F5";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x6E,0x50,0xC8,0x06,0x47,0x1F,0x52,0x71,0xB7,0xB3,0xE2,0x70,0x40,0x47,0xF5};

  FetchResponse(const FetchResponse&);
  FetchResponse& operator=(const FetchResponse&);
  FetchResponse() : code(0) {
  }

  virtual ~FetchResponse() throw();
  int32_t code;
  std::vector<QidResponse>  results;

  _FetchResponse__isset __isset;

  void __set_code(const int32_t val);

  void __set_results(const std::vector<QidResponse> & val);

  bool operator == (const FetchResponse & rhs) const
  {
    if (__isset.code != rhs.__isset.code)
      return false;
    else if (__isset.code && !(code == rhs.code))
      return false;
    if (!(results == rhs.results))
      return false;
    return true;
  }
  bool operator != (const FetchResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FetchResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const FetchResponse& obj);
};

void swap(FetchResponse &a, FetchResponse &b);


class AckResult {
 public:

  static const char* ascii_fingerprint; // = "3F9AC3B359E37DC260749F3B0D4910E4";
  static const uint8_t binary_fingerprint[16]; // = {0x3F,0x9A,0xC3,0xB3,0x59,0xE3,0x7D,0xC2,0x60,0x74,0x9F,0x3B,0x0D,0x49,0x10,0xE4};

  AckResult(const AckResult&);
  AckResult& operator=(const AckResult&);
  AckResult() : consumerId(), groupId(), cluster() {
  }

  virtual ~AckResult() throw();
  std::string consumerId;
  std::string groupId;
  std::string cluster;
  std::map<std::string, std::map<std::string, int64_t> >  offsets;

  void __set_consumerId(const std::string& val);

  void __set_groupId(const std::string& val);

  void __set_cluster(const std::string& val);

  void __set_offsets(const std::map<std::string, std::map<std::string, int64_t> > & val);

  bool operator == (const AckResult & rhs) const
  {
    if (!(consumerId == rhs.consumerId))
      return false;
    if (!(groupId == rhs.groupId))
      return false;
    if (!(cluster == rhs.cluster))
      return false;
    if (!(offsets == rhs.offsets))
      return false;
    return true;
  }
  bool operator != (const AckResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AckResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const AckResult& obj);
};

void swap(AckResult &a, AckResult &b);

} // namespace

#endif
