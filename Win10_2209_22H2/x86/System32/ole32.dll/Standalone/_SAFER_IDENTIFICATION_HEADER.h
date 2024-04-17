typedef enum _SAFER_IDENTIFICATION_TYPES
{
  SaferIdentityDefault = 0,
  SaferIdentityTypeImageName = 1,
  SaferIdentityTypeImageHash = 2,
  SaferIdentityTypeUrlZone = 3,
  SaferIdentityTypeCertificate = 4,
} SAFER_IDENTIFICATION_TYPES, *PSAFER_IDENTIFICATION_TYPES;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _SAFER_IDENTIFICATION_HEADER
{
  /* 0x0000 */ enum _SAFER_IDENTIFICATION_TYPES dwIdentificationType;
  /* 0x0004 */ unsigned long cbStructSize;
  /* 0x0008 */ struct _GUID IdentificationGuid;
  /* 0x0018 */ struct _FILETIME lastModified;
} SAFER_IDENTIFICATION_HEADER, *PSAFER_IDENTIFICATION_HEADER; /* size: 0x0020 */

