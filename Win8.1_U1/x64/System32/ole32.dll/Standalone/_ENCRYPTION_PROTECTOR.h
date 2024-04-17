typedef struct _ENCRYPTION_PROTECTOR
{
  /* 0x0000 */ unsigned long cbTotalLength;
  /* 0x0008 */ struct _SID* pUserSid;
  /* 0x0010 */ wchar_t* lpProtectorDescriptor;
} ENCRYPTION_PROTECTOR, *PENCRYPTION_PROTECTOR; /* size: 0x0018 */

