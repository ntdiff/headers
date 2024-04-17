typedef struct _SD_ENUM_SDS_ENTRY
{
  /* 0x0000 */ unsigned long Hash;
  /* 0x0004 */ unsigned long SecurityId;
  /* 0x0008 */ unsigned __int64 Offset;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ unsigned char Descriptor[1];
  /* 0x0015 */ char __PADDING__[3];
} SD_ENUM_SDS_ENTRY, *PSD_ENUM_SDS_ENTRY; /* size: 0x0018 */

typedef struct _SD_ENUM_SDS_OUTPUT
{
  /* 0x0000 */ unsigned __int64 NextOffset;
  /* 0x0008 */ unsigned __int64 NumSDEntriesReturned;
  /* 0x0010 */ unsigned __int64 NumSDBytesReturned;
  /* 0x0018 */ struct _SD_ENUM_SDS_ENTRY SDEntry[1];
} SD_ENUM_SDS_OUTPUT, *PSD_ENUM_SDS_OUTPUT; /* size: 0x0030 */

