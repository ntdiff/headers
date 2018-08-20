typedef union _WHEA_REVISION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorRevision;
      /* 0x0001 */ unsigned char MajorRevision;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_REVISION, *PWHEA_REVISION; /* size: 0x0002 */

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char FRUId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char FRUText : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS; /* size: 0x0001 */

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Primary : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ContainmentWarning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reset : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ThresholdExceeded : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ResourceNotAvailable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long LatentError : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS; /* size: 0x0004 */

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
  /* 0x0008 */ union _WHEA_REVISION Revision;
  /* 0x000a */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ struct _GUID SectionType;
  /* 0x0020 */ struct _GUID FRUId;
  /* 0x0030 */ enum _WHEA_ERROR_SEVERITY SectionSeverity;
  /* 0x0034 */ char FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR; /* size: 0x0048 */

