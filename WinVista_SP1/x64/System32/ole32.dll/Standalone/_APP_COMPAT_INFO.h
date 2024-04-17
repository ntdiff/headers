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

typedef struct _APP_COMPAT_INFO
{
  /* 0x0000 */ unsigned long dwTotalSize;
  /* 0x0008 */ union _ULARGE_INTEGER CompatibilityFlags;
} APP_COMPAT_INFO, *PAPP_COMPAT_INFO; /* size: 0x0010 */

