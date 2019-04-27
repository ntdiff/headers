typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NB10
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Offset;
  /* 0x0008 */ unsigned long TimeStamp;
  /* 0x000c */ unsigned long Age;
  /* 0x0010 */ char PdbName[1];
  /* 0x0011 */ char __PADDING__[3];
} NB10, *PNB10; /* size: 0x0014 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RSDS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ struct _GUID Guid;
  /* 0x0014 */ unsigned long Age;
  /* 0x0018 */ char PdbName[1];
  /* 0x0019 */ char __PADDING__[3];
} RSDS, *PRSDS; /* size: 0x001c */

typedef union _CVDD
{
  union
  {
    /* 0x0000 */ unsigned long Signature;
    /* 0x0000 */ struct _NB10 NB10;
    /* 0x0000 */ struct _RSDS RsDs;
  }; /* size: 0x001c */
} CVDD, *PCVDD; /* size: 0x001c */

typedef struct _ETW_DEBUGID_TRACKING_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned char ConsumersNotified;
  /* 0x0009 */ unsigned char Spare[3];
  /* 0x000c */ unsigned long DebugIdSize;
  /* 0x0010 */ union _CVDD DebugId;
} ETW_DEBUGID_TRACKING_ENTRY, *PETW_DEBUGID_TRACKING_ENTRY; /* size: 0x002c */

