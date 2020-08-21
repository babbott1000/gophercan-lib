/*
 * GopherCAN.h
 *
 *  Created on: Aug 16, 2020
 *      Author: Calvin
 */

// this will include auto generated code based on a spreadsheet of variables

#ifndef GOPHERCAN_H_
#define GOPHERCAN_H_

#include "base_types.h"

// function prototypes
U8 init_can(U8 module_id);
U8 request_parameter(U8 priority, U8 dest_module, U16 parameter);
U8 send_can_command(U8 priority, U8 dest_module, U8 command_id, U8 command_parameter);
U8 add_custom_can_func(U8 func_id, void* (*func_ptr)(void*), U8 init_state, void* param_ptr, void* return_val_ptr);
U8 mod_custom_can_func_ptr(U8 func_id, void* (*func_ptr)(void*), void* param_ptr, void* return_val_ptr);
U8 mod_custom_can_func_state(U8 func_id, U8 state);


// ******** BEGIN AUTO GENERATED ********

// number of each type
#define NUM_OF_MODUALS    4
#define NUM_OF_PARAMETERS 4
#define NUM_OF_COMMANDS   3


// module IDs
#define ECM_ID 0
#define EDL_ID 1
#define PDM_ID 2
#define TCM_ID 3
#define ACM_ID 4


// request and custom commands
#define REQUEST_VALUE_ID 0
#define CAN_COMMAND_ID   1


// parameter IDs
#define RPM_ID 2
#define FAN_CURRENT_ID 3


// custom command IDs
#define INC_VARIABLE   0
#define TURN_FAN_OFF   1
#define CUST_COMMAND_2 2

// ******** END AUTO GENERATED ********


// return messages
#define SUCCESS             0
#define INIT_FAILED        -1
#define BAD_MODULE_ID      -2
#define BAD_PARAMETER_ID   -3
#define BAD_COMMAND_ID     -4
#define NOT_IMPLEMENTED    -11


// Data types
typedef enum
{	REQ_PARAM  = 0,
	COMMAND    = 1,
	UNSIGNED8  = 2,
	UNSIGNED16 = 3,
	UNSIGNED32 = 4,
	UNSIGNED64 = 5,
	SIGNED8    = 6,
	SIGNED16   = 7,
	SIGNED32   = 8,
	SIGNED64   = 9,
	FLOATING   = 10
} datatypes;


// priority defines
#define PRIO_HIGH 0b0
#define PRIO_LOW  0b1


// CAN message struct
typedef struct
{
	U32 id;             // only the least significant 29 bits will be used
	U8  dlc;            // [0, 8]
	U8  data[8];        // not all of these will matter depending on dlc
} CAN_MSG;


// custom function struct
typedef struct
{
	void* (*func_ptr)(void*, U8);
	U8    func_enabled;
	void* param_ptr;
	void* return_val_ptr;
} CUST_FUNC;


// request parameter and custom command structs
typedef struct
{
	U32 last_rx;
	U16 parameter_id;
} REQ_PARAM_STRUCT;

typedef struct
{
	U32 last_rx;
	U8  command_id;
	U8  command_parameter;
} CAN_COMMAND_STRUCT;


// parameter structs
typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	U8  data;
} U8_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	U16 data;
} U16_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	U32 data;
} U32_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	U64 data;
} U64_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	S8  data;
} S8_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	S16 data;
} S16_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	S32 data;
} S32_CAN_STRUCT;

typedef struct
{
	U8  update_enabled;
	U8  pending_response;
	U32 last_rx;
	S64 data;
} S64_CAN_STRUCT;

typedef struct
{
	U8    update_enabled;
	U8    pending_response;
	U32   last_rx;
	float data;
} FLOAT_CAN_STRUCT;


#endif /* GOPHERCAN_H_ */
