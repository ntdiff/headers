enum MCA_EXCEPTION_TYPE
{
  HAL_MCE_RECORD = 0,
  HAL_MCA_RECORD = 1,
};

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union _MCI_STATS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short McaErrorCode;
      /* 0x0002 */ unsigned short ModelErrorCode;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long OtherInformation : 25; /* bit position: 0 */
        /* 0x0004 */ unsigned long ContextCorrupt : 1; /* bit position: 25 */
        /* 0x0004 */ unsigned long AddressValid : 1; /* bit position: 26 */
        /* 0x0004 */ unsigned long MiscValid : 1; /* bit position: 27 */
        /* 0x0004 */ unsigned long ErrorEnabled : 1; /* bit position: 28 */
        /* 0x0004 */ unsigned long UncorrectedError : 1; /* bit position: 29 */
        /* 0x0004 */ unsigned long StatusOverFlow : 1; /* bit position: 30 */
        /* 0x0004 */ unsigned long Valid : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0008 */ MciStatus;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATS, *PMCI_STATS; /* size: 0x0008 */

typedef union _MCI_ADDR
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Address;
      /* 0x0004 */ unsigned long Reserved;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_ADDR, *PMCI_ADDR; /* size: 0x0008 */

typedef struct _MCA_EXCEPTION
{
  /* 0x0000 */ unsigned long VersionNumber;
  /* 0x0004 */ enum MCA_EXCEPTION_TYPE ExceptionType;
  /* 0x0008 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0010 */ unsigned long ProcessorNumber;
  /* 0x0014 */ unsigned long Reserved1;
  union
  {
    union
    {
      struct
      {
        /* 0x0018 */ unsigned char BankNumber;
        /* 0x0019 */ unsigned char Reserved2[7];
        /* 0x0020 */ union _MCI_STATS Status;
        /* 0x0028 */ union _MCI_ADDR Address;
        /* 0x0030 */ unsigned __int64 Misc;
      } /* size: 0x0020 */ Mca;
      struct
      {
        /* 0x0018 */ unsigned __int64 Address;
        /* 0x0020 */ unsigned __int64 Type;
      } /* size: 0x0010 */ Mce;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ u;
  /* 0x0038 */ unsigned long ExtCnt;
  /* 0x003c */ unsigned long Reserved3;
  /* 0x0040 */ unsigned __int64 ExtReg[24];
} MCA_EXCEPTION, *PMCA_EXCEPTION; /* size: 0x0100 */

