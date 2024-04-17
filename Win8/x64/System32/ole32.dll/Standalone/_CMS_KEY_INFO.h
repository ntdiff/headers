typedef struct _CMS_KEY_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned int Algid;
  /* 0x0008 */ unsigned char* pbOID;
  /* 0x0010 */ unsigned long cbOID;
  /* 0x0014 */ long __PADDING__[1];
} CMS_KEY_INFO, *PCMS_KEY_INFO; /* size: 0x0018 */

