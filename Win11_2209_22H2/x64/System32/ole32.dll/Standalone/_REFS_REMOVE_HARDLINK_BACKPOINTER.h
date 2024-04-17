typedef struct _REFS_REMOVE_HARDLINK_BACKPOINTER
{
  /* 0x0000 */ unsigned __int64 ParentDirectory;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ wchar_t FileName[1];
  /* 0x0012 */ char __PADDING__[6];
} REFS_REMOVE_HARDLINK_BACKPOINTER, *PREFS_REMOVE_HARDLINK_BACKPOINTER; /* size: 0x0018 */

