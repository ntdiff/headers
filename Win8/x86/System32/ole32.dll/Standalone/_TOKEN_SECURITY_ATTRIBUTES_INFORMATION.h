typedef struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long AttributeCount;
  union
  {
    /* 0x0008 */ struct _TOKEN_SECURITY_ATTRIBUTE_V1* pAttributeV1;
  } /* size: 0x0004 */ Attribute;
} TOKEN_SECURITY_ATTRIBUTES_INFORMATION, *PTOKEN_SECURITY_ATTRIBUTES_INFORMATION; /* size: 0x000c */

