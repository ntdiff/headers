typedef struct _LDR_IMAGE_RFG_CONTEXT
{
  /* 0x0000 */ void* PrologueData;
  /* 0x0004 */ struct _IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER* PrologueHeader;
  /* 0x0008 */ unsigned long PrologueHeaderSize;
  /* 0x000c */ struct _IMAGE_BASE_RELOCATION* PrologueBaseReloc;
  /* 0x0010 */ unsigned long PrologueBaseRelocSize;
  /* 0x0014 */ void* EpilogueData;
  /* 0x0018 */ struct _IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER* EpilogueHeader;
  /* 0x001c */ unsigned long EpilogueHeaderSize;
  /* 0x0020 */ struct _IMAGE_BASE_RELOCATION* EpilogueBaseReloc;
  /* 0x0024 */ unsigned long EpilogueBaseRelocSize;
  /* 0x0028 */ unsigned long StraddleEpilogueByteCount;
  /* 0x002c */ unsigned long BitsPerEpilogue;
  /* 0x0030 */ unsigned long FailureRoutineRva;
  /* 0x0034 */ unsigned long MaximumRelocationPte;
} LDR_IMAGE_RFG_CONTEXT, *PLDR_IMAGE_RFG_CONTEXT; /* size: 0x0038 */

