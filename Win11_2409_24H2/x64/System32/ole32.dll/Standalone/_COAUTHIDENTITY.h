typedef struct _COAUTHIDENTITY
{
  /* 0x0000 */ unsigned short* User;
  /* 0x0008 */ unsigned long UserLength;
  /* 0x0010 */ unsigned short* Domain;
  /* 0x0018 */ unsigned long DomainLength;
  /* 0x0020 */ unsigned short* Password;
  /* 0x0028 */ unsigned long PasswordLength;
  /* 0x002c */ unsigned long Flags;
} COAUTHIDENTITY, *PCOAUTHIDENTITY; /* size: 0x0030 */

