typedef struct _LEARNING_MODE_DATA
{
  /* 0x0000 */ unsigned long Settings;
  /* 0x0004 */ unsigned char Enabled;
  /* 0x0005 */ unsigned char PermissiveModeEnabled;
  /* 0x0006 */ char __PADDING__[2];
} LEARNING_MODE_DATA, *PLEARNING_MODE_DATA; /* size: 0x0008 */

