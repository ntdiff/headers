typedef struct _PROC_THREAD_ATTRIBUTE
{
  /* 0x0000 */ unsigned long Attribute;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Value;
} PROC_THREAD_ATTRIBUTE, *PPROC_THREAD_ATTRIBUTE; /* size: 0x000c */

typedef struct _PROC_THREAD_ATTRIBUTE_LIST
{
  /* 0x0000 */ unsigned long PresentFlags;
  /* 0x0004 */ unsigned long AttributeCount;
  /* 0x0008 */ unsigned long LastAttribute;
  /* 0x000c */ unsigned long SpareUlong0;
  /* 0x0010 */ struct _PROC_THREAD_ATTRIBUTE* ExtendedFlagsAttribute;
  /* 0x0014 */ struct _PROC_THREAD_ATTRIBUTE Attributes[1];
} PROC_THREAD_ATTRIBUTE_LIST, *PPROC_THREAD_ATTRIBUTE_LIST; /* size: 0x0020 */

