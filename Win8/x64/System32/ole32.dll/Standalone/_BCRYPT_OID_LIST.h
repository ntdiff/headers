typedef struct _BCRYPT_OID_LIST
{
  /* 0x0000 */ unsigned long dwOIDCount;
  /* 0x0008 */ struct _BCRYPT_OID* pOIDs;
} BCRYPT_OID_LIST, *PBCRYPT_OID_LIST; /* size: 0x0010 */

