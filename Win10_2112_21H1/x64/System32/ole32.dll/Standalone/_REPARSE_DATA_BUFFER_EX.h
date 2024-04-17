typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _REPARSE_DATA_BUFFER
{
  /* 0x0000 */ unsigned long ReparseTag;
  /* 0x0004 */ unsigned short ReparseDataLength;
  /* 0x0006 */ unsigned short Reserved;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned short SubstituteNameOffset;
      /* 0x000a */ unsigned short SubstituteNameLength;
      /* 0x000c */ unsigned short PrintNameOffset;
      /* 0x000e */ unsigned short PrintNameLength;
      /* 0x0010 */ unsigned long Flags;
      /* 0x0014 */ wchar_t PathBuffer[1];
      /* 0x0016 */ char __PADDING__[2];
    } /* size: 0x0010 */ SymbolicLinkReparseBuffer;
    struct
    {
      /* 0x0008 */ unsigned short SubstituteNameOffset;
      /* 0x000a */ unsigned short SubstituteNameLength;
      /* 0x000c */ unsigned short PrintNameOffset;
      /* 0x000e */ unsigned short PrintNameLength;
      /* 0x0010 */ wchar_t PathBuffer[1];
    } /* size: 0x000a */ MountPointReparseBuffer;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned char DataBuffer[1];
      } /* size: 0x0001 */ GenericReparseBuffer;
      /* 0x0009 */ char __PADDING__[15];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER; /* size: 0x0018 */

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

typedef struct _REPARSE_DATA_BUFFER_EX
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ExistingReparseTag;
  /* 0x0008 */ struct _GUID ExistingReparseGuid;
  /* 0x0018 */ unsigned __int64 Reserved;
  union
  {
    /* 0x0020 */ struct _REPARSE_DATA_BUFFER ReparseDataBuffer;
    /* 0x0020 */ struct _REPARSE_GUID_DATA_BUFFER ReparseGuidDataBuffer;
  }; /* size: 0x001c */
  /* 0x003c */ long __PADDING__[1];
} REPARSE_DATA_BUFFER_EX, *PREPARSE_DATA_BUFFER_EX; /* size: 0x0040 */

