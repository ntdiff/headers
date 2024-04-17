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

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _SAFER_HASH_IDENTIFICATION
{
  /* 0x0000 */ struct _SAFER_IDENTIFICATION_HEADER header;
  /* 0x0020 */ wchar_t Description[256];
  /* 0x0220 */ wchar_t FriendlyName[256];
  /* 0x0420 */ unsigned long HashSize;
  /* 0x0424 */ unsigned char ImageHash[64];
  /* 0x0464 */ unsigned int HashAlgorithm;
  /* 0x0468 */ union _LARGE_INTEGER ImageSize;
  /* 0x0470 */ unsigned long dwSaferFlags;
  /* 0x0474 */ long __PADDING__[1];
} SAFER_HASH_IDENTIFICATION, *PSAFER_HASH_IDENTIFICATION; /* size: 0x0478 */

