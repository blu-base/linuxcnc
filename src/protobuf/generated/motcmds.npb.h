/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.1-dev at Tue Apr  2 00:02:48 2013. */

#ifndef _PB_MOTCMDS_NPB_H_
#define _PB_MOTCMDS_NPB_H_
#include <pb.h>

#include <protobuf/generated/emcclass.npb.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MotionType {
    MotionType_EMC_MOTION_TYPE_TRAVERSE = 1,
    MotionType_EMC_MOTION_TYPE_FEED = 2,
    MotionType_EMC_MOTION_TYPE_ARC = 3,
    MotionType_EMC_MOTION_TYPE_TOOLCHANGE = 4,
    MotionType_EMC_MOTION_TYPE_PROBING = 5,
    MotionType_EMC_MOTION_TYPE_INDEXROTARY = 6
} MotionType;

typedef enum _cmd_code_t {
    cmd_code_t_EMCMOT_ABORT = 4000,
    cmd_code_t_EMCMOT_AXIS_ABORT = 4001,
    cmd_code_t_EMCMOT_ENABLE = 4002,
    cmd_code_t_EMCMOT_DISABLE = 4003,
    cmd_code_t_EMCMOT_ENABLE_AMPLIFIER = 4004,
    cmd_code_t_EMCMOT_DISABLE_AMPLIFIER = 4005,
    cmd_code_t_EMCMOT_ENABLE_WATCHDOG = 4006,
    cmd_code_t_EMCMOT_DISABLE_WATCHDOG = 4007,
    cmd_code_t_EMCMOT_ACTIVATE_JOINT = 4008,
    cmd_code_t_EMCMOT_DEACTIVATE_JOINT = 4009,
    cmd_code_t_EMCMOT_PAUSE = 4010,
    cmd_code_t_EMCMOT_RESUME = 4011,
    cmd_code_t_EMCMOT_STEP = 4012,
    cmd_code_t_EMCMOT_FREE = 4013,
    cmd_code_t_EMCMOT_COORD = 4014,
    cmd_code_t_EMCMOT_TELEOP = 4015,
    cmd_code_t_EMCMOT_SPINDLE_SCALE = 4016,
    cmd_code_t_EMCMOT_SS_ENABLE = 4017,
    cmd_code_t_EMCMOT_FEED_SCALE = 4018,
    cmd_code_t_EMCMOT_FS_ENABLE = 4019,
    cmd_code_t_EMCMOT_FH_ENABLE = 4020,
    cmd_code_t_EMCMOT_AF_ENABLE = 4021,
    cmd_code_t_EMCMOT_OVERRIDE_LIMITS = 4022,
    cmd_code_t_EMCMOT_HOME = 4023,
    cmd_code_t_EMCMOT_UNHOME = 4024,
    cmd_code_t_EMCMOT_JOG_CONT = 4025,
    cmd_code_t_EMCMOT_JOG_INCR = 4026,
    cmd_code_t_EMCMOT_JOG_ABS = 4027,
    cmd_code_t_EMCMOT_SET_LINE = 4028,
    cmd_code_t_EMCMOT_SET_CIRCLE = 4029,
    cmd_code_t_EMCMOT_SET_TELEOP_VECTOR = 4030,
    cmd_code_t_EMCMOT_CLEAR_PROBE_FLAGS = 4031,
    cmd_code_t_EMCMOT_PROBE = 4032,
    cmd_code_t_EMCMOT_RIGID_TAP = 4033,
    cmd_code_t_EMCMOT_SET_POSITION_LIMITS = 4034,
    cmd_code_t_EMCMOT_SET_BACKLASH = 4035,
    cmd_code_t_EMCMOT_SET_MIN_FERROR = 4036,
    cmd_code_t_EMCMOT_SET_MAX_FERROR = 4037,
    cmd_code_t_EMCMOT_SET_VEL = 4038,
    cmd_code_t_EMCMOT_SET_VEL_LIMIT = 4039,
    cmd_code_t_EMCMOT_SET_JOINT_VEL_LIMIT = 4040,
    cmd_code_t_EMCMOT_SET_JOINT_ACC_LIMIT = 4041,
    cmd_code_t_EMCMOT_SET_ACC = 4042,
    cmd_code_t_EMCMOT_SET_TERM_COND = 4043,
    cmd_code_t_EMCMOT_SET_NUM_AXES = 4044,
    cmd_code_t_EMCMOT_SET_WORLD_HOME = 4045,
    cmd_code_t_EMCMOT_SET_HOMING_PARAMS = 4046,
    cmd_code_t_EMCMOT_SET_DEBUG = 4047,
    cmd_code_t_EMCMOT_SET_DOUT = 4048,
    cmd_code_t_EMCMOT_SET_AOUT = 4049,
    cmd_code_t_EMCMOT_SET_SPINDLESYNC = 4050,
    cmd_code_t_EMCMOT_SPINDLE_ON = 4051,
    cmd_code_t_EMCMOT_SPINDLE_OFF = 4052,
    cmd_code_t_EMCMOT_SPINDLE_INCREASE = 4053,
    cmd_code_t_EMCMOT_SPINDLE_DECREASE = 4054,
    cmd_code_t_EMCMOT_SPINDLE_BRAKE_ENGAGE = 4055,
    cmd_code_t_EMCMOT_SPINDLE_BRAKE_RELEASE = 4056,
    cmd_code_t_EMCMOT_SET_MOTOR_OFFSET = 4057,
    cmd_code_t_EMCMOT_SET_JOINT_COMP = 4058,
    cmd_code_t_EMCMOT_SET_OFFSET = 4059
} cmd_code_t;

typedef enum _cmd_status_t {
    cmd_status_t_EMCMOT_COMMAND_OK = 0,
    cmd_status_t_EMCMOT_COMMAND_UNKNOWN_COMMAND = 1,
    cmd_status_t_EMCMOT_COMMAND_INVALID_COMMAND = 2,
    cmd_status_t_EMCMOT_COMMAND_INVALID_PARAMS = 3,
    cmd_status_t_EMCMOT_COMMAND_BAD_EXEC = 4
} cmd_status_t;

/* Struct definitions */
typedef struct _MotionCommand {
    cmd_code_t command;
    uint32_t commandNum;
    bool has_motor_offset;
    double motor_offset;
    bool has_maxLimit;
    double maxLimit;
    bool has_minLimit;
    double minLimit;
    bool has_pos;
    EmcPose pos;
    bool has_center;
    PmCartesian center;
    bool has_normal;
    PmCartesian normal;
    bool has_turn;
    uint32_t turn;
    bool has_vel;
    double vel;
    bool has_ini_maxvel;
    double ini_maxvel;
    bool has_motion_type;
    MotionType motion_type;
    bool has_spindlesync;
    double spindlesync;
    bool has_acc;
    double acc;
    bool has_backlash;
    double backlash;
    bool has_id;
    uint32_t id;
    bool has_termCond;
    uint32_t termCond;
    bool has_tolerance;
    double tolerance;
    bool has_axis;
    uint32_t axis;
    bool has_scale;
    double scale;
    bool has_offset;
    double offset;
    bool has_home;
    double home;
    bool has_home_final_vel;
    double home_final_vel;
    bool has_search_vel;
    double search_vel;
    bool has_latch_vel;
    double latch_vel;
    bool has_flags;
    uint32_t flags;
    bool has_home_sequence;
    uint32_t home_sequence;
    bool has_volatile_home;
    uint32_t volatile_home;
    bool has_minFerror;
    double minFerror;
    bool has_maxFerror;
    double maxFerror;
    bool has_wdWait;
    uint32_t wdWait;
    bool has_debug;
    uint32_t debug;
    bool has_now;
    int32_t now;
    bool has_out;
    int32_t out;
    bool has_start;
    int32_t start;
    bool has_end;
    int32_t end;
    bool has_mode;
    int32_t mode;
    bool has_comp_nominal;
    double comp_nominal;
    bool has_comp_forward;
    double comp_forward;
    bool has_comp_reverse;
    double comp_reverse;
    bool has_probe_type;
    int32_t probe_type;
    bool has_tool_offset;
    EmcPose tool_offset;
} MotionCommand;

/* Default values for struct fields */

/* Struct field encoding specification for nanopb */
extern const pb_field_t MotionCommand_fields[43];

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
