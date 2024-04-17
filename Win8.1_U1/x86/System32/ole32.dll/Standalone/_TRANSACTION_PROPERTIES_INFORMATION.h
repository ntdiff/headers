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

typedef struct _TRANSACTION_PROPERTIES_INFORMATION
{
  /* 0x0000 */ unsigned long IsolationLevel;
  /* 0x0004 */ unsigned long IsolationFlags;
  /* 0x0008 */ union _LARGE_INTEGER Timeout;
  /* 0x0010 */ unsigned long Outcome;
  /* 0x0014 */ unsigned long DescriptionLength;
  /* 0x0018 */ wchar_t Description[1];
  /* 0x001a */ char __PADDING__[6];
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION; /* size: 0x0020 */

