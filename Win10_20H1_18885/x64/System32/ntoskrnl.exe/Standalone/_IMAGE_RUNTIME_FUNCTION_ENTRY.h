typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{
  /* 0x0000 */ unsigned long BeginAddress;
  /* 0x0004 */ unsigned long EndAddress;
  union
  {
    /* 0x0008 */ unsigned long UnwindInfoAddress;
    /* 0x0008 */ unsigned long UnwindData;
  }; /* size: 0x0004 */
} IMAGE_RUNTIME_FUNCTION_ENTRY, *PIMAGE_RUNTIME_FUNCTION_ENTRY; /* size: 0x000c */

