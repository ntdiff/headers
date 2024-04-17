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

