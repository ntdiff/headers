typedef struct _CM_KEYBOARD_DEVICE_DATA
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned char Type;
  /* 0x0005 */ unsigned char Subtype;
  /* 0x0006 */ unsigned short KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, *PCM_KEYBOARD_DEVICE_DATA; /* size: 0x0008 */

