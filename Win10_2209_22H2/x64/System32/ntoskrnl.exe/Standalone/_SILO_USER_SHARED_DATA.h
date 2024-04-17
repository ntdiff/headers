typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef struct _KSYSTEM_TIME
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long High1Time;
  /* 0x0008 */ long High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME; /* size: 0x000c */

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

typedef struct _SILO_USER_SHARED_DATA
{
  /* 0x0000 */ unsigned long ServiceSessionId;
  /* 0x0004 */ unsigned long ActiveConsoleId;
  /* 0x0008 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0010 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0014 */ unsigned long SuiteMask;
  /* 0x0018 */ unsigned long SharedUserSessionId;
  /* 0x001c */ unsigned char IsMultiSessionSku;
  /* 0x001e */ wchar_t NtSystemRoot[260];
  /* 0x0226 */ unsigned short UserModeGlobalLogger[16];
  /* 0x0248 */ unsigned long TimeZoneId;
  /* 0x024c */ volatile long TimeZoneBiasStamp;
  /* 0x0250 */ struct _KSYSTEM_TIME TimeZoneBias;
  /* 0x0260 */ union _LARGE_INTEGER TimeZoneBiasEffectiveStart;
  /* 0x0268 */ union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
} SILO_USER_SHARED_DATA, *PSILO_USER_SHARED_DATA; /* size: 0x0270 */

