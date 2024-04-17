typedef struct _FP_32
{
  /* 0x0000 */ unsigned long W[1];
} FP_32, *PFP_32; /* size: 0x0004 */

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

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _FP_64
{
  /* 0x0000 */ unsigned long W[2];
} FP_64, *PFP_64; /* size: 0x0008 */

typedef struct _FP_80
{
  /* 0x0000 */ unsigned long W[3];
} FP_80, *PFP_80; /* size: 0x000c */

typedef struct _FP_128
{
  /* 0x0000 */ unsigned long W[4];
} FP_128, *PFP_128; /* size: 0x0010 */

typedef struct _FP_IEEE_VALUE
{
  union
  {
    union
    {
      /* 0x0000 */ short I16Value;
      /* 0x0000 */ unsigned short U16Value;
      /* 0x0000 */ long I32Value;
      /* 0x0000 */ unsigned long U32Value;
      /* 0x0000 */ void* StringValue;
      /* 0x0000 */ unsigned long CompareValue;
      /* 0x0000 */ struct _FP_32 Fp32Value;
      /* 0x0000 */ union _LARGE_INTEGER I64Value;
      /* 0x0000 */ union _ULARGE_INTEGER U64Value;
      /* 0x0000 */ struct _FP_64 Fp64Value;
      /* 0x0000 */ struct _FP_80 Fp80Value;
      /* 0x0000 */ struct _FP_128 Fp128Value;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Value;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0010 */ unsigned long RoundingMode : 2; /* bit position: 0 */
      /* 0x0010 */ unsigned long Inexact : 1; /* bit position: 2 */
      /* 0x0010 */ unsigned long Underflow : 1; /* bit position: 3 */
      /* 0x0010 */ unsigned long Overflow : 1; /* bit position: 4 */
      /* 0x0010 */ unsigned long ZeroDivide : 1; /* bit position: 5 */
      /* 0x0010 */ unsigned long InvalidOperation : 1; /* bit position: 6 */
      /* 0x0010 */ unsigned long OperandValid : 1; /* bit position: 7 */
      /* 0x0010 */ unsigned long Format : 4; /* bit position: 8 */
      /* 0x0010 */ unsigned long Precision : 4; /* bit position: 12 */
      /* 0x0010 */ unsigned long Operation : 12; /* bit position: 16 */
      /* 0x0010 */ unsigned long Spare : 3; /* bit position: 28 */
      /* 0x0010 */ unsigned long HardwareException : 1; /* bit position: 31 */
    }; /* bitfield */
  } /* size: 0x0004 */ Control;
  /* 0x0014 */ long __PADDING__[1];
} FP_IEEE_VALUE, *PFP_IEEE_VALUE; /* size: 0x0018 */

