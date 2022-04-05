// GopherCAN_ids.h
//  (auto-generated)
//  This header file houses all of the auto-generated IDs for modules, parameters, and CAN
//  command IDs. This file can be completely auto-generated


#ifndef GOPHERCAN_IDS_H
#define GOPHERCAN_IDS_H

// Generated by GopherCANnon

#define GOPHERCAN_HASH REP_HASH_NOT_IMP


// Module IDs:
typedef enum
{
    ALL_MODULES_ID = 0,
    DLM_ID = 1,
    DAM_FR_ID = 2,
    DAM_RL_ID = 3,
    DAM_RR_ID = 4,
    PDM_ID = 5,
    TCM_ID = 6,
    ACM_ID = 7,
    
    NUM_OF_MODULES
} MODULE_ID;


// Parameter IDs:
typedef enum
{
    CAN_COMMAND_ID = 0,
    U8_TESTER_ID = 1,
    U16_TESTER_ID = 2,
    U32_TESTER_ID = 3,
    U64_TESTER_ID = 4,
    S8_TESTER_ID = 5,
    S16_TESTER_ID = 6,
    S32_TESTER_ID = 7,
    S64_TESTER_ID = 8,
    FLOAT_TESTER_ID = 9,
    FLOAT_TESTER_2_ID = 10,
    FLOAT_TESTER_3_ID = 11,
    FLOAT_TESTER_4_ID = 12,
    FLOAT_TESTER_5_ID = 13,
    FLOAT_TESTER_6_ID = 14,
    RPM_ID = 15,
    FAN_CURRENT_ID = 16,
    FLOAT_TESTER_7_ID = 17,
    ADC1_TESTER_0_ID = 18,
    ADC1_TESTER_1_ID = 19,
    ADC1_TESTER_2_ID = 20,
    ADC1_TESTER_3_ID = 21,
    ADC1_TESTER_4_ID = 22,
    ADC1_TESTER_5_ID = 23,
    ADC1_TESTER_6_ID = 24,
    ADC2_TESTER_0_ID = 25,
    ADC2_TESTER_1_ID = 26,
    ADC2_TESTER_2_ID = 27,
    ADC2_TESTER_3_ID = 28,
    ADC2_TESTER_4_ID = 29,
    ADC2_TESTER_5_ID = 30,
    ADC2_TESTER_6_ID = 31,
    ADC3_TESTER_0_ID = 32,
    ADC3_TESTER_1_ID = 33,
    ADC3_TESTER_2_ID = 34,
    ADC3_TESTER_3_ID = 35,
    ADC3_TESTER_4_ID = 36,
    ADC3_TESTER_5_ID = 37,
    ADC3_TESTER_6_ID = 38,
    ADC3_TESTER_7_ID = 39,
    ADC3_TESTER_8_ID = 40,
    ADC3_TESTER_9_ID = 41,
    ADC3_TESTER_10_ID = 42,
    ADC3_TESTER_11_ID = 43,
    EXAMPLE_NEW_PARAM_ID = 44,
    
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
extern U8_CAN_STRUCT u8_tester;
extern U16_CAN_STRUCT u16_tester;
extern U32_CAN_STRUCT u32_tester;
extern U64_CAN_STRUCT u64_tester;
extern S8_CAN_STRUCT s8_tester;
extern S16_CAN_STRUCT s16_tester;
extern S32_CAN_STRUCT s32_tester;
extern S64_CAN_STRUCT s64_tester;
extern FLOAT_CAN_STRUCT float_tester;
extern FLOAT_CAN_STRUCT float_tester_2;
extern FLOAT_CAN_STRUCT float_tester_3;
extern FLOAT_CAN_STRUCT float_tester_4;
extern FLOAT_CAN_STRUCT float_tester_5;
extern FLOAT_CAN_STRUCT float_tester_6;
extern U16_CAN_STRUCT rpm;
extern U8_CAN_STRUCT fan_current;
extern FLOAT_CAN_STRUCT float_tester_7;
extern FLOAT_CAN_STRUCT adc1_tester_0;
extern FLOAT_CAN_STRUCT adc1_tester_1;
extern FLOAT_CAN_STRUCT adc1_tester_2;
extern FLOAT_CAN_STRUCT adc1_tester_3;
extern FLOAT_CAN_STRUCT adc1_tester_4;
extern FLOAT_CAN_STRUCT adc1_tester_5;
extern FLOAT_CAN_STRUCT adc1_tester_6;
extern FLOAT_CAN_STRUCT adc2_tester_0;
extern FLOAT_CAN_STRUCT adc2_tester_1;
extern FLOAT_CAN_STRUCT adc2_tester_2;
extern FLOAT_CAN_STRUCT adc2_tester_3;
extern FLOAT_CAN_STRUCT adc2_tester_4;
extern FLOAT_CAN_STRUCT adc2_tester_5;
extern FLOAT_CAN_STRUCT adc2_tester_6;
extern FLOAT_CAN_STRUCT adc3_tester_0;
extern FLOAT_CAN_STRUCT adc3_tester_1;
extern FLOAT_CAN_STRUCT adc3_tester_2;
extern FLOAT_CAN_STRUCT adc3_tester_3;
extern FLOAT_CAN_STRUCT adc3_tester_4;
extern FLOAT_CAN_STRUCT adc3_tester_5;
extern FLOAT_CAN_STRUCT adc3_tester_6;
extern FLOAT_CAN_STRUCT adc3_tester_7;
extern FLOAT_CAN_STRUCT adc3_tester_8;
extern FLOAT_CAN_STRUCT adc3_tester_9;
extern FLOAT_CAN_STRUCT adc3_tester_10;
extern FLOAT_CAN_STRUCT adc3_tester_11;
extern FLOAT_CAN_STRUCT example_new_param;


#endif // GOPHERCAN_IDS_H_P2
#endif // AUTOGEN_EXTERNS


// End of GopherCAN_ids.h

