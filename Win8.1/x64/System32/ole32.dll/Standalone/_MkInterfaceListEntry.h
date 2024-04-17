typedef struct _MkInterfaceListEntry
{
  /* 0x0000 */ struct tagInterfaceData* pIFD;
  /* 0x0008 */ int fRegisteredByAppContainer;
  /* 0x000c */ long __PADDING__[1];
} MkInterfaceListEntry, *PMkInterfaceListEntry; /* size: 0x0010 */

