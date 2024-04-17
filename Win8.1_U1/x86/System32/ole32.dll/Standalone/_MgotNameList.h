typedef struct _MgotNameList
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ struct _MnkEqBuf* aNameListEntries[1];
} MgotNameList, *PMgotNameList; /* size: 0x0008 */

