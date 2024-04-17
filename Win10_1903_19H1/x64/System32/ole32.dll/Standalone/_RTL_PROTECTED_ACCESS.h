typedef struct _RTL_PROTECTED_ACCESS
{
  /* 0x0000 */ unsigned long DominateMask;
  /* 0x0004 */ unsigned long DeniedProcessAccess;
  /* 0x0008 */ unsigned long DeniedThreadAccess;
} RTL_PROTECTED_ACCESS, *PRTL_PROTECTED_ACCESS; /* size: 0x000c */

