typedef struct __NCRYPT_KEY_ACCESS_POLICY_BLOB
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long dwPolicyFlags;
  /* 0x0008 */ unsigned long cbUserSid;
  /* 0x000c */ unsigned long cbApplicationSid;
} _NCRYPT_KEY_ACCESS_POLICY_BLOB, *P_NCRYPT_KEY_ACCESS_POLICY_BLOB; /* size: 0x0010 */

