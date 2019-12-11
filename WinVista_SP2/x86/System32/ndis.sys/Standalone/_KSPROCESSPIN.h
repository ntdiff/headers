typedef struct _KSPROCESSPIN
{
  /* 0x0000 */ struct _KSPIN* Pin;
  /* 0x0004 */ struct _KSSTREAM_POINTER* StreamPointer;
  /* 0x0008 */ struct _KSPROCESSPIN* InPlaceCounterpart;
  /* 0x000c */ struct _KSPROCESSPIN* DelegateBranch;
  /* 0x0010 */ struct _KSPROCESSPIN* CopySource;
  /* 0x0014 */ void* Data;
  /* 0x0018 */ unsigned long BytesAvailable;
  /* 0x001c */ unsigned long BytesUsed;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned char Terminate;
  /* 0x0025 */ char __PADDING__[3];
} KSPROCESSPIN, *PKSPROCESSPIN; /* size: 0x0028 */

