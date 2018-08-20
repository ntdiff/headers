typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long SectionOffset;
  /* 0x0004 */ unsigned long SectionLength;
  /* 0x0008 */ unsigned short Revision;
  /* 0x000a */ unsigned char ValidationBits;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _GUID SectionType;
  /* 0x0020 */ struct _GUID FRUId;
  /* 0x0030 */ enum _WHEA_ERROR_SEVERITY SectionSeverity;
  /* 0x0034 */ char FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR; /* size: 0x0048 */

