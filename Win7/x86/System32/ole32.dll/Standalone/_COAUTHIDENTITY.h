typedef struct _COAUTHIDENTITY
{
  /* 0x0000 */ unsigned short* User;
  /* 0x0004 */ unsigned long UserLength;
  /* 0x0008 */ unsigned short* Domain;
  /* 0x000c */ unsigned long DomainLength;
  /* 0x0010 */ unsigned short* Password;
  /* 0x0014 */ unsigned long PasswordLength;
  /* 0x0018 */ unsigned long Flags;
} COAUTHIDENTITY, *PCOAUTHIDENTITY; /* size: 0x001c */

