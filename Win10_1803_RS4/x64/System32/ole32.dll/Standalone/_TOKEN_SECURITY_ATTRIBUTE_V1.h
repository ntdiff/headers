typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _TOKEN_SECURITY_ATTRIBUTE_V1
{
  /* 0x0000 */ struct _UNICODE_STRING Name;
  /* 0x0010 */ unsigned short ValueType;
  /* 0x0012 */ unsigned short Reserved;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long ValueCount;
  union
  {
    union
    {
      /* 0x0020 */ __int64* pInt64;
      /* 0x0020 */ unsigned __int64* pUint64;
      /* 0x0020 */ struct _UNICODE_STRING* pString;
      /* 0x0020 */ struct _TOKEN_SECURITY_ATTRIBUTE_FQBN_VALUE* pFqbn;
      /* 0x0020 */ struct _TOKEN_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE* pOctetString;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Values;
} TOKEN_SECURITY_ATTRIBUTE_V1, *PTOKEN_SECURITY_ATTRIBUTE_V1; /* size: 0x0028 */

