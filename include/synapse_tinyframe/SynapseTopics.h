#ifndef SynapseTopicsH
#define SynapseTopicsH

#ifdef __cplusplus
extern "C" {
#endif

// Physical (to cerebri) (0-63)

#define SYNAPSE_IN_CMD_VEL_TOPIC 0
#define SYNAPSE_IN_CMD_VEL_TYPE Twist

#define SYNAPSE_IN_ODOMETRY_TOPIC 1
#define SYNAPSE_IN_ODOMETRY_TYPE Odometry

#define SYNAPSE_IN_JOY_TOPIC 2
#define SYNAPSE_IN_JOY_TYPE Joy

#define SYNAPSE_IN_BEZIER_TOPIC 3
#define SYNAPSE_IN_BEZIER_TYPE Bezier

#define SYNAPSE_IN_IMU_TOPIC 4
#define SYNAPSE_IN_IMU_TYPE IMU

#define SYNAPSE_IN_MAG_TOPIC 5
#define SYNAPSE_IN_MAG_TYPE Magnetometer

#define SYNAPSE_IN_NAVSAT_TOPIC 6
#define SYNAPSE_IN_NAVSAT_TYPE NavSat

#define SYNAPSE_IN_ALT_TOPIC 7
#define SYNAPSE_IN_ALT_TYPE Altimeter

#define SYNAPSE_IN_ACTUATORS_TOPIC 8
#define SYNAPSE_IN_ACTUATORS_TYPE Actuators

// Physical/Simulation (from cerebri) (64-127)

#define SYNAPSE_OUT_CMD_VEL_TOPIC 64
#define SYNAPSE_OUT_CMD_VEL_TYPE Twist

#define SYNAPSE_OUT_ODOMETRY_TOPIC 65
#define SYNAPSE_OUT_ODOMETRY_TYPE Odometry

#define SYNAPSE_OUT_JOY_TOPIC 66
#define SYNAPSE_OUT_JOY_TYPE Joy

#define SYNAPSE_OUT_BEZIER_TOPIC 67
#define SYNAPSE_OUT_BEZIER_TYPE Bezier

#define SYNAPSE_OUT_IMU_TOPIC 68
#define SYNAPSE_OUT_IMU_TYPE IMU

#define SYNAPSE_OUT_MAG_TOPIC 69
#define SYNAPSE_OUT_MAG_TYPE Magnetometer

#define SYNAPSE_OUT_NAVSAT_TOPIC 70
#define SYNAPSE_OUT_NAVSAT_TYPE NavSat

#define SYNAPSE_OUT_ALT_TOPIC 71
#define SYNAPSE_OUT_ALT_TYPE Altimeter

#define SYNAPSE_OUT_ACTUATORS_TOPIC 72
#define SYNAPSE_OUT_ACTUATORS_TYPE Actuators

// Reserved (128-191)

// Simulation (to cerebri) (192-255)

#define SYNAPSE_SIM_CLOCK_TOPIC 192
#define SYNAPSE_SIM_CLOCK_TYPE Clock

#define SYNAPSE_SIM_IMU_TOPIC 193
#define SYNAPSE_SIM_IMU_TYPE IMU

#define SYNAPSE_SIM_MAG_TOPIC 194
#define SYNAPSE_SIM_MAG_TYPE Magnetometer

#define SYNAPSE_SIM_NAVSAT_TOPIC 195
#define SYNAPSE_SIM_NAVSAT_TYPE NavSat

#define SYNAPSE_SIM_ALT_TOPIC 196
#define SYNAPSE_SIM_ALT_TYPE Altimeter

#define SYNAPSE_SIM_ACTUATORS_TOPIC 197
#define SYNAPSE_SIM_ACTUATORS_TYPE Actuators


#ifdef __cplusplus
}
#endif

#endif //SynapseTopicsH
