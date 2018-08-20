typedef enum _WHEA_EVENT_LOG_ENTRY_TYPE
{
  WheaEventLogEntryTypeInformational = 0,
  WheaEventLogEntryTypeWarning = 1,
  WheaEventLogEntryTypeError = 2,
} WHEA_EVENT_LOG_ENTRY_TYPE, *PWHEA_EVENT_LOG_ENTRY_TYPE;

typedef enum _WHEA_EVENT_LOG_ENTRY_ID
{
  WheaEventLogEntryIdCmcPollingTimeout = -2147483647,
  WheaEventLogEntryIdWheaInit = -2147483646,
  WheaEventLogEntryIdMax = -2147483645,
} WHEA_EVENT_LOG_ENTRY_ID, *PWHEA_EVENT_LOG_ENTRY_ID;

typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long Reserved : 32; /* bit position: 0 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_EVENT_LOG_ENTRY_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;
  /* 0x0010 */ unsigned long OwnerTag;
  /* 0x0014 */ enum _WHEA_EVENT_LOG_ENTRY_ID Id;
  /* 0x0018 */ union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
  /* 0x001c */ unsigned long PayloadLength;
} WHEA_EVENT_LOG_ENTRY_HEADER, *PWHEA_EVENT_LOG_ENTRY_HEADER; /* size: 0x0020 */

