typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _EDP_CRED_SVC_INFO_CXT
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    struct
    {
      /* 0x0004 */ struct _FILETIME ftRevocationTimeSince;
      /* 0x000c */ struct _GUID CredentialGuid;
    } /* size: 0x0018 */ RevocationInfo;
    struct
    {
      /* 0x0004 */ unsigned long CredentialLevel;
    } /* size: 0x0004 */ ConsumerDplStateInfo;
    struct
    {
      /* 0x0004 */ unsigned long CredentialLevel;
      /* 0x0008 */ wchar_t wszCredentialId[1];
      /* 0x000a */ char __PADDING__[2];
    } /* size: 0x0008 */ CredentialKeyID;
    struct
    {
      /* 0x0004 */ unsigned char pbAppIdSalt[32];
      /* 0x0024 */ unsigned char pbAppIdHash[32];
      /* 0x0044 */ unsigned long KeyIDOffset;
      /* 0x0048 */ unsigned long KeyIDSize;
      /* 0x004c */ struct _GUID CryptoSession;
      /* 0x005c */ unsigned long dwProtectionSequence;
      /* 0x0060 */ unsigned long dwKdfVcn;
      /* 0x0064 */ unsigned long CredentialLevel;
      /* 0x0068 */ wchar_t wszCredentialId[1];
      /* 0x006a */ char __PADDING__[2];
    } /* size: 0x0068 */ AppKeyCacheInfo;
  }; /* size: 0x0068 */
} EDP_CRED_SVC_INFO_CXT, *PEDP_CRED_SVC_INFO_CXT; /* size: 0x006c */

