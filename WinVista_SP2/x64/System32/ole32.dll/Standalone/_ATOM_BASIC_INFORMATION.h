typedef struct _ATOM_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned short UsageCount;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short NameLength;
  /* 0x0006 */ wchar_t Name[1];
} ATOM_BASIC_INFORMATION, *PATOM_BASIC_INFORMATION; /* size: 0x0008 */

