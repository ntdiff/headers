typedef struct _DEVICE_SEEK_PENALTY_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char IncursSeekPenalty;
  /* 0x0009 */ char __PADDING__[3];
} DEVICE_SEEK_PENALTY_DESCRIPTOR, *PDEVICE_SEEK_PENALTY_DESCRIPTOR; /* size: 0x000c */

