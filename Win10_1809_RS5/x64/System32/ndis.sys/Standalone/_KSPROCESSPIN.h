typedef struct _KSPROCESSPIN
{
  /* 0x0000 */ struct _KSPIN* Pin;
  /* 0x0008 */ struct _KSSTREAM_POINTER* StreamPointer;
  /* 0x0010 */ struct _KSPROCESSPIN* InPlaceCounterpart;
  /* 0x0018 */ struct _KSPROCESSPIN* DelegateBranch;
  /* 0x0020 */ struct _KSPROCESSPIN* CopySource;
  /* 0x0028 */ void* Data;
  /* 0x0030 */ unsigned long BytesAvailable;
  /* 0x0034 */ unsigned long BytesUsed;
  /* 0x0038 */ unsigned long Flags;
  /* 0x003c */ unsigned char Terminate;
  /* 0x003d */ char __PADDING__[3];
} KSPROCESSPIN, *PKSPROCESSPIN; /* size: 0x0040 */

