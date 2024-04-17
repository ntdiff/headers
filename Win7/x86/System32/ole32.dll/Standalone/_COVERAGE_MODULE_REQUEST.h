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
  /* 0x0004 */ wchar_t* Buffer;
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

