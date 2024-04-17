typedef struct _STORAGE_OFFLOAD_TOKEN
{
  /* 0x0000 */ unsigned char TokenType[4];
  /* 0x0004 */ unsigned char Reserved[2];
  /* 0x0006 */ unsigned char TokenIdLength[2];
  union
  {
    struct
    {
      /* 0x0008 */ unsigned char Reserved2[504];
    } /* size: 0x01f8 */ StorageOffloadZeroDataToken;
    /* 0x0008 */ unsigned char Token[504];
  }; /* size: 0x01f8 */
} STORAGE_OFFLOAD_TOKEN, *PSTORAGE_OFFLOAD_TOKEN; /* size: 0x0200 */

typedef struct _DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 TokenOffset;
  /* 0x0010 */ struct _STORAGE_OFFLOAD_TOKEN Token;
} DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS, *PDEVICE_DSM_OFFLOAD_WRITE_PARAMETERS; /* size: 0x0210 */

