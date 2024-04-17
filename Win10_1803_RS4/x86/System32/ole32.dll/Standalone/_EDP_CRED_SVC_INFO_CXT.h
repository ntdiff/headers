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
      struct
      {
        /* 0x0004 */ struct _GUID CredentialGuid;
      } /* size: 0x0010 */ ConsumerDplStateInfo;
      /* 0x0014 */ long __PADDING__[2];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
} EDP_CRED_SVC_INFO_CXT, *PEDP_CRED_SVC_INFO_CXT; /* size: 0x001c */

