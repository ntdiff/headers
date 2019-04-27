typedef struct _LDR_SERVICE_TAG_RECORD
{
  /* 0x0000 */ struct _LDR_SERVICE_TAG_RECORD* Next;
  /* 0x0008 */ unsigned long ServiceTag;
  /* 0x000c */ long __PADDING__[1];
} LDR_SERVICE_TAG_RECORD, *PLDR_SERVICE_TAG_RECORD; /* size: 0x0010 */

