typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SRP_ENTERPRISE_CONTEXT
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long AllowedEnterpriseIdCount;
  /* 0x0008 */ unsigned __int64 PolicyFlags;
  /* 0x0010 */ struct _UNICODE_STRING AllowedEnterpriseIds[1];
} SRP_ENTERPRISE_CONTEXT, *PSRP_ENTERPRISE_CONTEXT; /* size: 0x0020 */

