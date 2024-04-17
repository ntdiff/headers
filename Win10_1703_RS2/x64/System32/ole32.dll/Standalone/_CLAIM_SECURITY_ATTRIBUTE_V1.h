typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1
{
  /* 0x0000 */ wchar_t* Name;
  /* 0x0008 */ unsigned short ValueType;
  /* 0x000a */ unsigned short Reserved;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long ValueCount;
  union
  {
    union
    {
      /* 0x0018 */ __int64* pInt64;
      /* 0x0018 */ unsigned __int64* pUint64;
      /* 0x0018 */ wchar_t** ppString;
      /* 0x0018 */ struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE* pFqbn;
      /* 0x0018 */ struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE* pOctetString;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1; /* size: 0x0020 */

