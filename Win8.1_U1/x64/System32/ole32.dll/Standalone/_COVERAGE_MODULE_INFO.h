typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _COVERAGE_MODULE_INFO
{
  /* 0x0000 */ unsigned long ModuleInfoSize;
  /* 0x0004 */ unsigned long IsBinaryLoaded;
  /* 0x0008 */ struct _UNICODE_STRING ModulePathName;
  /* 0x0018 */ unsigned long CoverageSectionSize;
  /* 0x001c */ unsigned char CoverageSection[1];
  /* 0x001d */ char __PADDING__[3];
} COVERAGE_MODULE_INFO, *PCOVERAGE_MODULE_INFO; /* size: 0x0020 */

