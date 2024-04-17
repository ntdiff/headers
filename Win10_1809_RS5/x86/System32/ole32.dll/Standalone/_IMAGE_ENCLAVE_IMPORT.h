typedef struct _IMAGE_ENCLAVE_IMPORT
{
  /* 0x0000 */ unsigned long MatchType;
  /* 0x0004 */ unsigned long MinimumSecurityVersion;
  /* 0x0008 */ unsigned char UniqueOrAuthorID[32];
  /* 0x0028 */ unsigned char FamilyID[16];
  /* 0x0038 */ unsigned char ImageID[16];
  /* 0x0048 */ unsigned long ImportName;
  /* 0x004c */ unsigned long Reserved;
} IMAGE_ENCLAVE_IMPORT, *PIMAGE_ENCLAVE_IMPORT; /* size: 0x0050 */

