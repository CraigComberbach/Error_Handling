//Include the following code in your main.c file
//#ifndef ERROR_HANDLING_LIBRARY
//	#error "You need to include the Error Handling library for this code to compile"
//#endif
//Include the following code in your Config.h file
/************* Library Definition ***************/
//#define ERROR_HANDLING_MAJOR	0
//#define ERROR_HANDLING_MINOR	0
//#define ERROR_HANDLING_PATCH	0

/************* Library Definition ***************/
#define ERROR_HANDLING_LIBRARY

/*************   Magic  Numbers   ***************/
/*************    Enumeration     ***************/
/***********State Machine Definitions************/
/*************Function  Prototypes***************/
int Stall_Processor(int errorCausedBy);