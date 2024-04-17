typedef struct _KHETERO_HWFEEDBACK_CLASS
{
  /* 0x0000 */ unsigned char PerformanceClass;
  /* 0x0001 */ unsigned char EfficiencyClass;
  /* 0x0002 */ unsigned char PerformanceClassRawValue;
  /* 0x0003 */ unsigned char EfficiencyClassRawValue;
} KHETERO_HWFEEDBACK_CLASS, *PKHETERO_HWFEEDBACK_CLASS; /* size: 0x0004 */

typedef struct _KHETRO_HWFEEDBACK_TYPE
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _KHETERO_HWFEEDBACK_CLASS HwFeedbackClass[1];
} KHETRO_HWFEEDBACK_TYPE, *PKHETRO_HWFEEDBACK_TYPE; /* size: 0x0008 */

