/*
 * File: SPIRead.c
 *
 *
 *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
 *
 *   This file is an S-function produced by the S-Function
 *   Builder which only recognizes certain fields.  Changes made
 *   outside these fields will be lost the next time the block is
 *   used to load, edit, and resave this file. This file will be overwritten
 *   by the S-function Builder block. If you want to edit this file by hand,
 *   you must change it only in the area defined as:
 *
 *        %%%-SFUNWIZ_defines_Changes_BEGIN
 *        #define NAME 'replacement text'
 *        %%% SFUNWIZ_defines_Changes_END
 *
 *   DO NOT change NAME--Change the 'replacement text' only.
 *
 *   For better compatibility with the Simulink Coder, the
 *   "wrapper" S-function technique is used.  This is discussed
 *   in the Simulink Coder's Manual in the Chapter titled,
 *   "Wrapper S-functions".
 *
 *  -------------------------------------------------------------------------
 * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
 *  -------------------------------------------------------------------------
 * Created: Fri Dec 22 16:22:09 2017
 */

#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                SPIRead

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS                     0
#define NUM_OUTPUTS                    4

/* Output Port  0 */
#define OUT_PORT_0_NAME                Vc1
#define OUTPUT_0_WIDTH                 1
#define OUTPUT_DIMS_0_COL              1
#define OUTPUT_0_DTYPE                 uint32_T
#define OUTPUT_0_COMPLEX               COMPLEX_NO
#define OUT_0_FRAME_BASED              FRAME_NO
#define OUT_0_BUS_BASED                0
#define OUT_0_BUS_NAME
#define OUT_0_DIMS                     1-D
#define OUT_0_ISSIGNED                 1
#define OUT_0_WORDLENGTH               8
#define OUT_0_FIXPOINTSCALING          1
#define OUT_0_FRACTIONLENGTH           3
#define OUT_0_BIAS                     0
#define OUT_0_SLOPE                    0.125

/* Output Port  1 */
#define OUT_PORT_1_NAME                Vc2
#define OUTPUT_1_WIDTH                 1
#define OUTPUT_DIMS_1_COL              1
#define OUTPUT_1_DTYPE                 uint32_T
#define OUTPUT_1_COMPLEX               COMPLEX_NO
#define OUT_1_FRAME_BASED              FRAME_NO
#define OUT_1_BUS_BASED                0
#define OUT_1_BUS_NAME
#define OUT_1_DIMS                     1-D
#define OUT_1_ISSIGNED                 1
#define OUT_1_WORDLENGTH               8
#define OUT_1_FIXPOINTSCALING          1
#define OUT_1_FRACTIONLENGTH           3
#define OUT_1_BIAS                     0
#define OUT_1_SLOPE                    0.125

/* Output Port  2 */
#define OUT_PORT_2_NAME                Vc3
#define OUTPUT_2_WIDTH                 1
#define OUTPUT_DIMS_2_COL              1
#define OUTPUT_2_DTYPE                 uint32_T
#define OUTPUT_2_COMPLEX               COMPLEX_NO
#define OUT_2_FRAME_BASED              FRAME_NO
#define OUT_2_BUS_BASED                0
#define OUT_2_BUS_NAME
#define OUT_2_DIMS                     1-D
#define OUT_2_ISSIGNED                 1
#define OUT_2_WORDLENGTH               8
#define OUT_2_FIXPOINTSCALING          1
#define OUT_2_FRACTIONLENGTH           3
#define OUT_2_BIAS                     0
#define OUT_2_SLOPE                    0.125

/* Output Port  3 */
#define OUT_PORT_3_NAME                PEC
#define OUTPUT_3_WIDTH                 1
#define OUTPUT_DIMS_3_COL              1
#define OUTPUT_3_DTYPE                 uint32_T
#define OUTPUT_3_COMPLEX               COMPLEX_NO
#define OUT_3_FRAME_BASED              FRAME_NO
#define OUT_3_BUS_BASED                0
#define OUT_3_BUS_NAME
#define OUT_3_DIMS                     1-D
#define OUT_3_ISSIGNED                 1
#define OUT_3_WORDLENGTH               8
#define OUT_3_FIXPOINTSCALING          1
#define OUT_3_FRACTIONLENGTH           3
#define OUT_3_BIAS                     0
#define OUT_3_SLOPE                    0.125
#define NPARAMS                        0
#define SAMPLE_TIME_0                  INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES                0
#define DISC_STATES_IC                 [0]
#define NUM_CONT_STATES                0
#define CONT_STATES_IC                 [0]
#define SFUNWIZ_GENERATE_TLC           1
#define SOURCEFILES                    "__SFB__SRC_PATH C:\MCToolbox\rappid564xl\src\sfmSrc__SFB__SRC_PATH C:\MCToolbox\rappid564xl\src\c_library__SFB__BMU_Driver.c__SFB____SFB__INC_PATH C:\MCToolbox\rappid564xl\src\sfmInclude__SFB__INC_PATH C:\MCToolbox\rappid564xl\src\includes"
#define PANELINDEX                     6
#define USE_SIMSTRUCT                  0
#define SHOW_COMPILE_STEPS             0
#define CREATE_DEBUG_MEXFILE           0
#define SAVE_CODE_ONLY                 0
#define SFUNWIZ_REVISION               3.0

/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"

extern void SPIRead_Outputs_wrapper(uint32_T *Vc1,
  uint32_T *Vc2,
  uint32_T *Vc3,
  uint32_T *PEC);

/*====================*
 * S-function methods *
 *====================*/
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{
  DECL_AND_INIT_DIMSINFO(outputDimsInfo);
  ssSetNumSFcnParams(S, NPARAMS);
  if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

  ssSetNumContStates(S, NUM_CONT_STATES);
  ssSetNumDiscStates(S, NUM_DISC_STATES);
  if (!ssSetNumInputPorts(S, NUM_INPUTS))
    return;
  if (!ssSetNumOutputPorts(S, NUM_OUTPUTS))
    return;

  /* Output Port 0 */
  ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
  ssSetOutputPortDataType(S, 0, SS_UINT32);
  ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);

  /* Output Port 1 */
  ssSetOutputPortWidth(S, 1, OUTPUT_1_WIDTH);
  ssSetOutputPortDataType(S, 1, SS_UINT32);
  ssSetOutputPortComplexSignal(S, 1, OUTPUT_1_COMPLEX);

  /* Output Port 2 */
  ssSetOutputPortWidth(S, 2, OUTPUT_2_WIDTH);
  ssSetOutputPortDataType(S, 2, SS_UINT32);
  ssSetOutputPortComplexSignal(S, 2, OUTPUT_2_COMPLEX);

  /* Output Port 3 */
  ssSetOutputPortWidth(S, 3, OUTPUT_3_WIDTH);
  ssSetOutputPortDataType(S, 3, SS_UINT32);
  ssSetOutputPortComplexSignal(S, 3, OUTPUT_3_COMPLEX);
  ssSetNumSampleTimes(S, 1);
  ssSetNumRWork(S, 0);
  ssSetNumIWork(S, 0);
  ssSetNumPWork(S, 0);
  ssSetNumModes(S, 0);
  ssSetNumNonsampledZCs(S, 0);
  ssSetSimulinkVersionGeneratedIn(S, "8.8");

  /* Take care when specifying exception free code - see sfuntmpl_doc.c */
  ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                   SS_OPTION_USE_TLC_WITH_ACCELERATOR |
                   SS_OPTION_WORKS_WITH_CODE_REUSE));
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  ssSetSampleTime(S, 0, SAMPLE_TIME_0);
  ssSetModelReferenceSampleTimeDefaultInheritance(S);
  ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE

static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
  ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES

static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
  ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

/* Function: mdlOutputs =======================================================
 *
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  uint32_T *Vc1 = (uint32_T *)ssGetOutputPortRealSignal(S,0);
  uint32_T *Vc2 = (uint32_T *)ssGetOutputPortRealSignal(S,1);
  uint32_T *Vc3 = (uint32_T *)ssGetOutputPortRealSignal(S,2);
  uint32_T *PEC = (uint32_T *)ssGetOutputPortRealSignal(S,3);
  SPIRead_Outputs_wrapper(Vc1, Vc2, Vc3, PEC);
}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
}

#ifdef MATLAB_MEX_FILE                 /* Is this file being compiled as a MEX-file? */
#include "simulink.c"                  /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"                   /* Code generation registration function */
#endif
