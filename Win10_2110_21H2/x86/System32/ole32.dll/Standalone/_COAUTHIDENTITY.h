typedef struct _COAUTHIDENTITY
{
  /* 0x0000 */ wchar_t* User;
  /* 0x0004 */ unsigned long UserLength;
  /* 0x0008 */ wchar_t* Domain;
  /* 0x000c */ unsigned long DomainLength;
  /* 0x0010 */ wchar_t* Password;
  /* 0x0014 */ unsigned long PasswordLength;
  /* 0x0018 */ unsigned long Flags;
} COAUTHIDENTITY, *PCOAUTHIDENTITY; /* size: 0x001c */

