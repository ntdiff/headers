typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CLASSIC_EVENT_ID
{
  /* 0x0000 */ struct _GUID EventGuid;
  /* 0x0010 */ unsigned char Type;
  /* 0x0011 */ unsigned char Reserved[7];
} CLASSIC_EVENT_ID, *PCLASSIC_EVENT_ID; /* size: 0x0018 */

