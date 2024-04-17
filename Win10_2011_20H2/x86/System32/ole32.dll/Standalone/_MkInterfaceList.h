typedef struct _MkInterfaceListEntry
{
  /* 0x0000 */ struct tagInterfaceData* pIFD;
  /* 0x0004 */ int fRegisteredByAppContainer;
} MkInterfaceListEntry, *PMkInterfaceListEntry; /* size: 0x0008 */

typedef struct _MkInterfaceList
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ struct _MkInterfaceListEntry apIFDList[1];
} MkInterfaceList, *PMkInterfaceList; /* size: 0x000c */

