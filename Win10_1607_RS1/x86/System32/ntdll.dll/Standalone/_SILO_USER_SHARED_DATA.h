typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef struct _SILO_USER_SHARED_DATA
{
  /* 0x0000 */ unsigned long ServiceSessionId;
  /* 0x0004 */ unsigned long ActiveConsoleId;
  /* 0x0008 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0010 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0014 */ unsigned long SuiteMask;
  /* 0x0018 */ unsigned char IsMultiSessionSku;
  /* 0x0019 */ char __PADDING__[7];
} SILO_USER_SHARED_DATA, *PSILO_USER_SHARED_DATA; /* size: 0x0020 */

