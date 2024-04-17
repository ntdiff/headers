typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1
{
  /* 0x0000 */ unsigned long Name;
  /* 0x0004 */ unsigned short ValueType;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ValueCount;
  union
  {
    union
    {
      /* 0x0010 */ unsigned long pInt64[1];
      /* 0x0010 */ unsigned long pUint64[1];
      /* 0x0010 */ unsigned long ppString[1];
      /* 0x0010 */ unsigned long pFqbn[1];
      /* 0x0010 */ unsigned long pOctetString[1];
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Values;
} CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1, *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1; /* size: 0x0014 */

