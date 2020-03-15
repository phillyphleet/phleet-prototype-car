/*
 * vesc_cmd.h
 * Alex Wroblewski
 * 
 * Create commands to drive the vesc
 */

/**
 * VESC InterProcess Communication Protocol
 * 
 * Defined as follows
 * # Request Type
 *
 * uint8 CMD_TYPE
 * uint32 CMD_VALUE
 *
 * ---
 * # Response Type
 *
 * uint8 CMD_TYPE
 * uint32 CMD_VALUE
 * bool CMD_SUCCESS
 * 
 */

/*
 * CMD_TYPE_DATA_TYPE
 * All command types are 8 bit unsigned integers
 */
#define CMD_TYPE_DATA_TYPE uint8_t

/*
 * GET_ALIVE_CMD
 */
#define GET_ALIVE_CMD 0x00

/*
 * SET_SPEED_CMD
 */
#define SET_SPEED_CMD 0x01

/*
 * SET_CURRENT_CMD
 */
#define SET_CURRENT_CMD 0x02

/*
 * SET_BREAK_CMD
 */
#define SET_BREAK_CMD 0x03

/*
 * SET_DUTY_CYCLE_CMD
 */
#define SET_DUTY_CYCLE_CMD 0x04

/*
 * SET_POS_CMD
 */
#define SET_POS_CMD 0x05

// TODO: Set Min and Max values for the systemx
