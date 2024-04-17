typedef struct _LDR_IMAGE_RFG_CONTEXT
{
  /* 0x0000 */ void* PrologueData;
  /* 0x0008 */ struct _IMAGE_PROLOGUE_DYNAMIC_RELOCATION_HEADER* PrologueHeader;
  /* 0x0010 */ unsigned long PrologueHeaderSize;
  /* 0x0018 */ struct _IMAGE_BASE_RELOCATION* PrologueBaseReloc;
  /* 0x0020 */ unsigned long PrologueBaseRelocSize;
  /* 0x0028 */ void* EpilogueData;
  /* 0x0030 */ struct _IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER* EpilogueHeader;
  /* 0x0038 */ unsigned long EpilogueHeaderSize;
  /* 0x0040 */ struct _IMAGE_BASE_RELOCATION* EpilogueBaseReloc;
  /* 0x0048 */ unsigned long EpilogueBaseRelocSize;
  /* 0x004c */ unsigned long StraddleEpilogueByteCount;
  /* 0x0050 */ unsigned long BitsPerEpilogue;
  /* 0x0054 */ unsigned long FailureRoutineRva;
  /* 0x0058 */ unsigned __int64 MaximumRelocationPte;
} LDR_IMAGE_RFG_CONTEXT, *PLDR_IMAGE_RFG_CONTEXT; /* size: 0x0060 */

