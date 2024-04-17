typedef struct _MkInterfaceList
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0008 */ struct tagInterfaceData* apIFDList[1];
} MkInterfaceList, *PMkInterfaceList; /* size: 0x0010 */

