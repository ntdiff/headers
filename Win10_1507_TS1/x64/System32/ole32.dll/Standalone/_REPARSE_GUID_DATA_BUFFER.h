typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _REPARSE_GUID_DATA_BUFFER
{
  /* 0x0000 */ unsigned long ReparseTag;
  /* 0x0004 */ unsigned short ReparseDataLength;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ struct _GUID ReparseGuid;
  struct
  {
    /* 0x0018 */ unsigned char DataBuffer[1];
  } /* size: 0x0001 */ GenericReparseBuffer;
  /* 0x0019 */ char __PADDING__[3];
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER; /* size: 0x001c */

