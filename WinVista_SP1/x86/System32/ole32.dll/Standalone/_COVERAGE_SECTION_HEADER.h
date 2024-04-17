typedef struct _COVERAGE_SECTION_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long CoverageType;
  /* 0x0008 */ unsigned char MD5Hash[16];
  /* 0x0018 */ unsigned long CoverageSectionSize;
  /* 0x001c */ unsigned long CoverageVectorSize;
  /* 0x0020 */ unsigned long CoverageVectorOffset;
  /* 0x0024 */ unsigned long ExtraDataOffset;
} COVERAGE_SECTION_HEADER, *PCOVERAGE_SECTION_HEADER; /* size: 0x0028 */

