// GopherCAN_ids.h
//  This header file houses all of the auto-generated IDs for modules, parameters, and CAN
//  command IDs. This file can be completely auto-generated


#ifndef GOPHERCAN_IDS_H
#define GOPHERCAN_IDS_H

// Generated by GopherCANnon

#define GOPHERCAN_HASH 320255973501901


// Module IDs:
typedef enum
{
    ALL_MODULES_ID = 0,
    DLM_ID = 1,
    DAM_ID = 2,
    PDM_ID = 3,
    TCM_ID = 4,
    ACM_ID = 5,
    DISPLAY_ID = 6,
    
    NUM_OF_MODULES
} MODULE_ID;


// Parameter IDs:
typedef enum
{
    CAN_COMMAND_ID = 0,
    RPM_ID = 1,
    FAN_CURRENT_ID = 2,
    U8_TESTER_ID = 3,
    U16_TESTER_ID = 4,
    U32_TESTER_ID = 5,
    U64_TESTER_ID = 6,
    S8_TESTER_ID = 7,
    S16_TESTER_ID = 8,
    S32_TESTER_ID = 9,
    S64_TESTER_ID = 10,
    FLOAT_TESTER_ID = 11,
    
    NUM_OF_PARAMETERS
} GCAN_PARAM_ID;


// custom command IDs
typedef enum
{
    SET_LED_STATE = 0,
        // parameter 0: LED state
        // parameter 1: LED state (duplicate)
        // parameter 2: LED state (duplicate)
        // parameter 3: LED state (duplicate)
        // comment: Only the first led_state is used, the rest are duplication for testing
        
    SET_RTC_TIME = 1,
        // parameter 0: hour
        // parameter 1: minute
        // parameter 2: second
        // parameter 3: UNUSED
        // comment: pass in the hours, minutes, and seconds to set the RTC time. This is in 24 hour format
        
    SET_RTC_DATE = 2,
        // parameter 0: year
        // parameter 1: month
        // parameter 2: day
        // parameter 3: weekday
        // comment: pass in the year, month, date, and day of week to set the RTC date. Year is number of years since 1970. For weekday, mon = 1, teus = 2, ..., sun = 7
        
    SEND_BUCKET_PARAMS = 3,
        // parameter 0: UNUSED
        // parameter 1: UNUSED
        // parameter 2: UNUSED
        // parameter 3: UNUSED
        // comment: Command to start the DLM-DAM initialization process
        
    SET_BUCKET_SIZE = 4,
        // parameter 0: bucket ID
        // parameter 1: number of parameters in that bucket
        // parameter 2: UNUSED
        // parameter 3: UNUSED
        // comment: Sets the number of parameters in the bucket specified by the bucket ID
        
    ADD_PARAM_TO_BUCKET = 5,
        // parameter 0: bucket ID
        // parameter 1: parameter ID - most significan byte
        // parameter 2: parameter ID - least significan byte
        // parameter 3: UNUSED
        // comment: Adds a specified parameter to the specified DLM bucket
        
    ASSIGN_BUCKET_TO_FRQ = 6,
        // parameter 0: bucket ID
        // parameter 1: MS between requests - most significant byte
        // parameter 2: MS between requests - least significant byte
        // parameter 3: UNUSED
        // comment: Sets the wait time between requests of this bucket in milliseconds. A value of 0 will stop requesting this bucket
        
    BUCKET_OK = 7,
        // parameter 0: bucket ID
        // parameter 1: UNUSED
        // parameter 2: UNUSED
        // parameter 3: UNUSED
        // comment: This command is sent when the bucket has the number of parameters it expects
        
    REQUEST_BUCKET = 8,
        // parameter 0: bucket ID
        // parameter 1: UNUSED
        // parameter 2: UNUSED
        // parameter 3: UNUSED
        // comment: CAN command to send each parameter in the bucket
        
    
    NUM_OF_COMMANDS
} GCAN_COMMAND_ID;


// Error IDs:
#define ID_NOT_FOUND 0
#define COMMAND_ID_NOT_FOUND 1
#define PARAM_NOT_ENABLED 2
#define SIZE_ERROR 3
#define DATATYPE_NOT_FOUND 4
#define COMMAND_NOT_ENABLED 5



#endif // GOPHERCAN_IDS_H


// this is so this file can be included again when this part is needed
#ifdef AUTOGEN_EXTERNS
#ifndef GOPHERCAN_IDS_H_P2
#define GOPHERCAN_IDS_H_P2

// all of the global parameter struct externs so all files including GopherCAN.h
// have access
extern CAN_COMMAND_STRUCT can_command;
extern U16_CAN_STRUCT rpm;
extern U8_CAN_STRUCT fan_current;
extern U8_CAN_STRUCT u8_tester;
extern U16_CAN_STRUCT u16_tester;
extern U32_CAN_STRUCT u32_tester;
extern U64_CAN_STRUCT u64_tester;
extern S8_CAN_STRUCT s8_tester;
extern S16_CAN_STRUCT s16_tester;
extern S32_CAN_STRUCT s32_tester;
extern S64_CAN_STRUCT s64_tester;
extern FLOAT_CAN_STRUCT float_tester;


#endif // GOPHERCAN_IDS_H_P2
#endif // AUTOGEN_EXTERNS


// End of GopherCAN_ids.h
