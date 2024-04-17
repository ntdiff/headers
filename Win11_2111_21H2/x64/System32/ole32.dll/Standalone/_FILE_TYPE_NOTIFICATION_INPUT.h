typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILE_TYPE_NOTIFICATION_INPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumFileTypeIDs;
  /* 0x0008 */ struct _GUID FileTypeID[1];
} FILE_TYPE_NOTIFICATION_INPUT, *PFILE_TYPE_NOTIFICATION_INPUT; /* size: 0x0018 */

