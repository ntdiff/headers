typedef struct _DELAYLOAD_PROC_DESCRIPTOR
{
  /* 0x0000 */ unsigned long ImportDescribedByName;
  union
  {
    union
    {
      /* 0x0004 */ const char* Name;
      /* 0x0004 */ unsigned long Ordinal;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Description;
} DELAYLOAD_PROC_DESCRIPTOR, *PDELAYLOAD_PROC_DESCRIPTOR; /* size: 0x0008 */

