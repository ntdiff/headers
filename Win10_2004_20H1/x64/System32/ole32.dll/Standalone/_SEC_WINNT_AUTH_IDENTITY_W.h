typedef struct _SEC_WINNT_AUTH_IDENTITY_W
{
  /* 0x0000 */ wchar_t* User;
  /* 0x0008 */ unsigned long UserLength;
  /* 0x0010 */ wchar_t* Domain;
  /* 0x0018 */ unsigned long DomainLength;
  /* 0x0020 */ wchar_t* Password;
  /* 0x0028 */ unsigned long PasswordLength;
  /* 0x002c */ unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W; /* size: 0x0030 */

