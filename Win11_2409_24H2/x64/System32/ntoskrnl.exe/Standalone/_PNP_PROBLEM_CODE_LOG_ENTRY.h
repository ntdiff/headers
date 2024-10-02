typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _PNP_PROBLEM_CODE_LOG_OPERATION
{
  ProblemCodeOpInvalid = 0,
  ProblemCodeOpSet = 1,
  ProblemCodeOpClear = 2,
  ProblemCodeOpMax = 3,
} PNP_PROBLEM_CODE_LOG_OPERATION, *PPNP_PROBLEM_CODE_LOG_OPERATION;

typedef struct _PNP_PROBLEM_CODE_LOG_ENTRY
{
  /* 0x0000 */ union _LARGE_INTEGER Timestamp;
  /* 0x0008 */ enum _PNP_PROBLEM_CODE_LOG_OPERATION Operation;
  /* 0x000c */ unsigned long ProblemCode;
  /* 0x0010 */ long ProblemStatus;
  /* 0x0014 */ long __PADDING__[1];
} PNP_PROBLEM_CODE_LOG_ENTRY, *PPNP_PROBLEM_CODE_LOG_ENTRY; /* size: 0x0018 */

