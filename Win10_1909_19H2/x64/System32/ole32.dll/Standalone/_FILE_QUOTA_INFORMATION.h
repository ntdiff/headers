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

typedef struct _SID_IDENTIFIER_AUTHORITY
{
  /* 0x0000 */ unsigned char Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY; /* size: 0x0006 */

typedef struct _SID
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char SubAuthorityCount;
  /* 0x0002 */ struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
  /* 0x0008 */ unsigned long SubAuthority[1];
} SID, *PSID; /* size: 0x000c */

typedef struct _FILE_QUOTA_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long SidLength;
  /* 0x0008 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0010 */ union _LARGE_INTEGER QuotaUsed;
  /* 0x0018 */ union _LARGE_INTEGER QuotaThreshold;
  /* 0x0020 */ union _LARGE_INTEGER QuotaLimit;
  /* 0x0028 */ struct _SID Sid;
  /* 0x0034 */ long __PADDING__[1];
} FILE_QUOTA_INFORMATION, *PFILE_QUOTA_INFORMATION; /* size: 0x0038 */

