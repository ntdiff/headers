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

typedef struct _REPARSE_DATA_BUFFER_EX
{
  /* 0x0000 */ unsigned long ExistingReparseTag;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ struct _REPARSE_DATA_BUFFER ReparseBuffer;
} REPARSE_DATA_BUFFER_EX, *PREPARSE_DATA_BUFFER_EX; /* size: 0x0028 */

