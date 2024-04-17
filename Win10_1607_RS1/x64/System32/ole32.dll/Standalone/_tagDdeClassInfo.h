typedef struct _tagDdeClassInfo
{
  /* 0x0000 */ unsigned long dwContextMask;
  /* 0x0004 */ int fClaimFactory;
  /* 0x0008 */ unsigned long dwContext;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ unsigned long dwThreadId;
  /* 0x0014 */ unsigned long dwRegistrationKey;
  /* 0x0018 */ struct IUnknown* punk;
} tagDdeClassInfo, *PtagDdeClassInfo; /* size: 0x0020 */

