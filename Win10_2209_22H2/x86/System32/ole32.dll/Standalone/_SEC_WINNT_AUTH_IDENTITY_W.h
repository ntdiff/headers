typedef struct _SEC_WINNT_AUTH_IDENTITY_W
{
  /* 0x0000 */ wchar_t* User;
  /* 0x0004 */ unsigned long UserLength;
  /* 0x0008 */ wchar_t* Domain;
  /* 0x000c */ unsigned long DomainLength;
  /* 0x0010 */ wchar_t* Password;
  /* 0x0014 */ unsigned long PasswordLength;
  /* 0x0018 */ unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W; /* size: 0x001c */

