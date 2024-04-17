typedef enum _COVERAGE_REQUEST_CODES
{
  CoverageAllModules = 0,
  CoverageSearchByHash = 1,
  CoverageSearchByName = 2,
} COVERAGE_REQUEST_CODES, *PCOVERAGE_REQUEST_CODES;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _COVERAGE_MODULE_REQUEST
{
  /* 0x0000 */ enum _COVERAGE_REQUEST_CODES RequestType;
  union
  {
    union
    {
      /* 0x0004 */ unsigned char MD5Hash[16];
      /* 0x0004 */ struct _UNICODE_STRING ModuleName;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ SearchInfo;
} COVERAGE_MODULE_REQUEST, *PCOVERAGE_MODULE_REQUEST; /* size: 0x0014 */

typedef struct _COVERAGE_MODULE_INFO
{
  /* 0x0000 */ unsigned long ModuleInfoSize;
  /* 0x0004 */ unsigned long IsBinaryLoaded;
  /* 0x0008 */ struct _UNICODE_STRING ModulePathName;
  /* 0x0010 */ unsigned long CoverageSectionSize;
  /* 0x0014 */ unsigned char CoverageSection[1];
  /* 0x0015 */ char __PADDING__[3];
} COVERAGE_MODULE_INFO, *PCOVERAGE_MODULE_INFO; /* size: 0x0018 */

typedef struct _COVERAGE_MODULES
{
  /* 0x0000 */ unsigned long ListAndReset;
  /* 0x0004 */ unsigned long NumberOfModules;
  /* 0x0008 */ struct _COVERAGE_MODULE_REQUEST ModuleRequestInfo;
  /* 0x001c */ struct _COVERAGE_MODULE_INFO Modules[1];
} COVERAGE_MODULES, *PCOVERAGE_MODULES; /* size: 0x0034 */

