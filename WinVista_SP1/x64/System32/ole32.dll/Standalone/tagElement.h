struct tagElement
{
  /* 0x0000 */ struct tagElement* pNext;
  /* 0x0008 */ unsigned long iHashValue;
  /* 0x000c */ unsigned short fValueFlags;
  /* 0x000e */ unsigned short cbKey;
  /* 0x0010 */ struct IUnknown* pUnknown;
  /* 0x0018 */ unsigned char* abKey /* zero-length array */;
}; /* size: 0x0018 */

