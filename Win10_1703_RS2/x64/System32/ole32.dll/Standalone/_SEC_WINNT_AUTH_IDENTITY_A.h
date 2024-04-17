typedef struct _SEC_WINNT_AUTH_IDENTITY_A
{
  /* 0x0000 */ unsigned char* User;
  /* 0x0008 */ unsigned long UserLength;
  /* 0x0010 */ unsigned char* Domain;
  /* 0x0018 */ unsigned long DomainLength;
  /* 0x0020 */ unsigned char* Password;
  /* 0x0028 */ unsigned long PasswordLength;
  /* 0x002c */ unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A, *PSEC_WINNT_AUTH_IDENTITY_A; /* size: 0x0030 */

