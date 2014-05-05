/**************************************************************************************************
Target Hardware:		PIC24FJ256GA1xx
Code assumptions:
Purpose:
Notes:

Version History:
vnext	Y-M-D	Craig Comberbach	Compiler: XC16 v1.21	Optimization: 0	IDE: MPLABx 2.05	Tool: RealICE	Computer: Intel Xeon CPU 3.07 GHz, 6 GB RAM, Windows 7 64 bit Professional SP1
	First version
**************************************************************************************************/
/*************    Header Files    ***************/
#include "Config.h"

/************* Library Definition ***************/
/************* Semantic Versioning***************/
#if ERROR_HANDLING_MAJOR != 0
	#error "Error Handling Library has had a change that loses some previously supported functionality"
#elif ERROR_HANDLING_MINOR != 0
	#error "Error Handling Library has new features that your code may benefit from"
#elif ERROR_HANDLING_PATCH != 0
	#error "Error Handling Library has had a bug fix, you should check to see that you weren't relying on a bug for functionality"
#endif

/************Arbitrary Functionality*************/
/*************   Magic  Numbers   ***************/
/*************    Enumeration     ***************/
/***********  Structure Definitions  ************/
/***********State Machine Definitions************/
/*************  Global Variables  ***************/
/*************Interrupt Prototypes***************/
/*************Function  Prototypes***************/
/************* Device Definitions ***************/
/************* Module Definitions ***************/
/************* Other  Definitions ***************/

int Stall_Processor(int errorCausedBy)
{
	while(1)
		ClrWdt();

	return 1;
}