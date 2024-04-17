typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1
{
  /* 0x0000 */ wchar_t* Name;
  /* 0x0004 */ unsigned short ValueType;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ValueCount;
  union
  {
    union
    {
      /* 0x0010 */ __int64* pInt64;
      /* 0x0010 */ unsigned __int64* pUint64;
      /* 0x0010 */ wchar_t** ppString;
      /* 0x0010 */ struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE* pFqbn;
      /* 0x0010 */ struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE* pOctetString;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1; /* size: 0x0014 */

