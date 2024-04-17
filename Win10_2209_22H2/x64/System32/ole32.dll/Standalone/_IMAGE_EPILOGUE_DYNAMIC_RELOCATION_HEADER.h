typedef struct _IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER
{
  /* 0x0000 */ unsigned long EpilogueCount;
  /* 0x0004 */ unsigned char EpilogueByteCount;
  /* 0x0005 */ unsigned char BranchDescriptorElementSize;
  /* 0x0006 */ unsigned short BranchDescriptorCount;
} IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER, *PIMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER; /* size: 0x0008 */

