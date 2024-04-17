struct tagElement
{
  /* 0x0000 */ struct tagElement* pNext;
  /* 0x0004 */ unsigned long iHashValue;
  /* 0x0008 */ unsigned short fValueFlags;
  /* 0x000a */ unsigned short cbKey;
  /* 0x000c */ struct IUnknown* pUnknown;
  /* 0x0010 */ unsigned char* abKey /* zero-length array */;
}; /* size: 0x0010 */

