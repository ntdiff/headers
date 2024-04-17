typedef struct _LDR_IMAGE_RFG_CONFIG
{
  /* 0x0000 */ unsigned long MaximumRelocationPte;
  /* 0x0004 */ unsigned long FailureRoutineRva;
  /* 0x0008 */ unsigned long PrologueHeaderSize;
  /* 0x000c */ unsigned long EpilogueHeaderSize;
  /* 0x0010 */ unsigned long StraddleEpilogueByteCount;
  /* 0x0014 */ unsigned long BitsPerEpilogue;
  /* 0x0018 */ struct _LDRP_RFG_RELOCATION_ITERATOR* IteratorIndices;
} LDR_IMAGE_RFG_CONFIG, *PLDR_IMAGE_RFG_CONFIG; /* size: 0x001c */

