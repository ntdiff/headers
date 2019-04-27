typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ void* TibPad0[2];
      /* 0x0010 */ void* Spare1;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ void* PcrReserved0;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ unsigned char CurrentIrql;
  /* 0x0039 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x003a */ unsigned char Pad1[2];
  /* 0x003c */ unsigned short MajorVersion;
  /* 0x003e */ unsigned short MinorVersion;
  /* 0x0040 */ unsigned long StallScaleFactor;
  /* 0x0044 */ unsigned long SecondLevelCacheSize;
  union
  {
    /* 0x0048 */ unsigned short SoftwareInterruptPending;
    struct
    {
      /* 0x0048 */ unsigned char ApcInterrupt;
      /* 0x0049 */ unsigned char DispatchInterrupt;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x004a */ unsigned short InterruptPad;
  /* 0x004c */ unsigned char BtiMitigation;
  /* 0x004d */ unsigned char SsbMitigation;
  /* 0x004e */ unsigned char Pad2[2];
  /* 0x0050 */ unsigned __int64 PanicStorage[6];
  /* 0x0080 */ void* KdVersionBlock;
  /* 0x0088 */ void* HalReserved[14];
  /* 0x00f8 */ void* KvaUserModeTtbr1;
} KPCR, *PKPCR; /* size: 0x0100 */

