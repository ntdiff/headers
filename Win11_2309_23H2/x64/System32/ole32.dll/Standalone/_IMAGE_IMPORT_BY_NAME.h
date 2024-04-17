typedef struct _IMAGE_IMPORT_BY_NAME
{
  /* 0x0000 */ unsigned short Hint;
  /* 0x0002 */ char Name[1];
  /* 0x0003 */ char __PADDING__[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME; /* size: 0x0004 */

