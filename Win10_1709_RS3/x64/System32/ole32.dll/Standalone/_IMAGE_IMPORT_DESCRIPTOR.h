typedef struct _IMAGE_IMPORT_DESCRIPTOR
{
  union
  {
    /* 0x0000 */ unsigned long Characteristics;
    /* 0x0000 */ unsigned long OriginalFirstThunk;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long TimeDateStamp;
  /* 0x0008 */ unsigned long ForwarderChain;
  /* 0x000c */ unsigned long Name;
  /* 0x0010 */ unsigned long FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR, *PIMAGE_IMPORT_DESCRIPTOR; /* size: 0x0014 */

