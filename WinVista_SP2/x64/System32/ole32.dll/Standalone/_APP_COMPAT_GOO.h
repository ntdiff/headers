typedef struct _PRE_APP_COMPAT_INFO
{
  /* 0x0000 */ unsigned long dwEntryTotalSize;
  /* 0x0004 */ unsigned long dwResourceInfoSize;
} PRE_APP_COMPAT_INFO, *PPRE_APP_COMPAT_INFO; /* size: 0x0008 */

typedef struct _APP_COMPAT_GOO
{
  /* 0x0000 */ unsigned long dwTotalGooSize;
  /* 0x0004 */ struct _PRE_APP_COMPAT_INFO AppCompatEntry[1];
} APP_COMPAT_GOO, *PAPP_COMPAT_GOO; /* size: 0x000c */

