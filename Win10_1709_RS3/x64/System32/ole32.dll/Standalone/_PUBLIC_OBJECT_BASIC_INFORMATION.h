typedef struct _PUBLIC_OBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Attributes;
  /* 0x0004 */ unsigned long GrantedAccess;
  /* 0x0008 */ unsigned long HandleCount;
  /* 0x000c */ unsigned long PointerCount;
  /* 0x0010 */ unsigned long Reserved[10];
} PUBLIC_OBJECT_BASIC_INFORMATION, *PPUBLIC_OBJECT_BASIC_INFORMATION; /* size: 0x0038 */

