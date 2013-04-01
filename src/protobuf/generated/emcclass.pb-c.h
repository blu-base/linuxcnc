/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_emcclass_2eproto__INCLUDED
#define PROTOBUF_C_emcclass_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _PmCartesian PmCartesian;
typedef struct _EmcPose EmcPose;


/* --- enums --- */


/* --- messages --- */

struct  _PmCartesian
{
  ProtobufCMessage base;
  protobuf_c_boolean has_x;
  double x;
  protobuf_c_boolean has_y;
  double y;
  protobuf_c_boolean has_z;
  double z;
};
#define PM_CARTESIAN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pm_cartesian__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _EmcPose
{
  ProtobufCMessage base;
  PmCartesian *tran;
  protobuf_c_boolean has_a;
  double a;
  protobuf_c_boolean has_b;
  double b;
  protobuf_c_boolean has_c;
  double c;
  protobuf_c_boolean has_u;
  double u;
  protobuf_c_boolean has_v;
  double v;
  protobuf_c_boolean has_w;
  double w;
};
#define EMC_POSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&emc_pose__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/* PmCartesian methods */
void   pm_cartesian__init
                     (PmCartesian         *message);
size_t pm_cartesian__get_packed_size
                     (const PmCartesian   *message);
size_t pm_cartesian__pack
                     (const PmCartesian   *message,
                      uint8_t             *out);
size_t pm_cartesian__pack_to_buffer
                     (const PmCartesian   *message,
                      ProtobufCBuffer     *buffer);
PmCartesian *
       pm_cartesian__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pm_cartesian__free_unpacked
                     (PmCartesian *message,
                      ProtobufCAllocator *allocator);
/* EmcPose methods */
void   emc_pose__init
                     (EmcPose         *message);
size_t emc_pose__get_packed_size
                     (const EmcPose   *message);
size_t emc_pose__pack
                     (const EmcPose   *message,
                      uint8_t             *out);
size_t emc_pose__pack_to_buffer
                     (const EmcPose   *message,
                      ProtobufCBuffer     *buffer);
EmcPose *
       emc_pose__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   emc_pose__free_unpacked
                     (EmcPose *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PmCartesian_Closure)
                 (const PmCartesian *message,
                  void *closure_data);
typedef void (*EmcPose_Closure)
                 (const EmcPose *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor pm_cartesian__descriptor;
extern const ProtobufCMessageDescriptor emc_pose__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_emcclass_2eproto__INCLUDED */
