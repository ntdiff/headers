typedef enum _REG_ACTION
{
  KeyAdded = 0,
  KeyRemoved = 1,
  KeyModified = 2,
} REG_ACTION, *PREG_ACTION;

typedef struct _REG_NOTIFY_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ enum _REG_ACTION Action;
  /* 0x0008 */ unsigned long KeyLength;
  /* 0x000c */ wchar_t Key[1];
  /* 0x000e */ char __PADDING__[2];
} REG_NOTIFY_INFORMATION, *PREG_NOTIFY_INFORMATION; /* size: 0x0010 */

