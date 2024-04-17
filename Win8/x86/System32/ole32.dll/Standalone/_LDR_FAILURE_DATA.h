typedef struct _LDR_FAILURE_DATA
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ wchar_t ImageName[32];
  /* 0x0044 */ wchar_t AdditionalInfo[32];
} LDR_FAILURE_DATA, *PLDR_FAILURE_DATA; /* size: 0x0084 */

