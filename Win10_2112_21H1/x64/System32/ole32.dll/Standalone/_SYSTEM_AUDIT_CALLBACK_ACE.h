typedef struct _ACE_HEADER
{
  /* 0x0000 */ unsigned char AceType;
  /* 0x0001 */ unsigned char AceFlags;
  /* 0x0002 */ unsigned short AceSize;
} ACE_HEADER, *PACE_HEADER; /* size: 0x0004 */

typedef struct _SYSTEM_AUDIT_CALLBACK_ACE
{
  /* 0x0000 */ struct _ACE_HEADER Header;
  /* 0x0004 */ unsigned long Mask;
  /* 0x0008 */ unsigned long SidStart;
} SYSTEM_AUDIT_CALLBACK_ACE, *PSYSTEM_AUDIT_CALLBACK_ACE; /* size: 0x000c */

