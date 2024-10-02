typedef struct _XSAVE_ARM64_SVE_HEADER
{
  /* 0x0000 */ unsigned long VectorLength;
  /* 0x0004 */ unsigned long VectorRegisterOffset;
  /* 0x0008 */ unsigned long PredicateRegisterOffset;
  /* 0x000c */ unsigned long Reserved[5];
} XSAVE_ARM64_SVE_HEADER, *PXSAVE_ARM64_SVE_HEADER; /* size: 0x0020 */

