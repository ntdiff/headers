typedef struct _ACE_HEADER
{
  /* 0x0000 */ unsigned char AceType;
  /* 0x0001 */ unsigned char AceFlags;
  /* 0x0002 */ unsigned short AceSize;
} ACE_HEADER, *PACE_HEADER; /* size: 0x0004 */

