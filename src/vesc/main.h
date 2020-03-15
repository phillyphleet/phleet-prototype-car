#ifdef MAIN_H
#define MAIN_H

/**
 * Protocol Definitions
 */ 


#define GET_ALIVE_CMD 0x00
#define SET_SPEED_CMD 0x01
#define SET_CURRENT_CMD 0x02
#define SET_BREAK_CMD 0x03
#define SET_DUTY_CYCLE_CMD 0x04
#define SET_POS_CMD 0x05



/**
 * Function Definitions
 */
bool parseVESCCommand();



#endif