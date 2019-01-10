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

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct
      {
        /* 0x0004 */ unsigned short Level;
        /* 0x0006 */ unsigned short Group;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long Affinity;
      } /* size: 0x000c */ Interrupt;
      struct
      {
        union
        {
          struct
          {
            /* 0x0004 */ unsigned short Group;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Raw;
          struct
          {
            /* 0x0004 */ unsigned short Level;
            /* 0x0006 */ unsigned short Group;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned long Affinity;
          } /* size: 0x000c */ Translated;
        }; /* size: 0x000c */
      } /* size: 0x000c */ MessageInterrupt;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long RequestLine;
        /* 0x000c */ unsigned char TransferWidth;
        /* 0x000d */ unsigned char Reserved1;
        /* 0x000e */ unsigned char Reserved2;
        /* 0x000f */ unsigned char Reserved3;
      } /* size: 0x000c */ DmaV3;
      struct
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
      struct
      {
        /* 0x0004 */ unsigned char Class;
        /* 0x0005 */ unsigned char Type;
        /* 0x0006 */ unsigned char Reserved1;
        /* 0x0007 */ unsigned char Reserved2;
        /* 0x0008 */ unsigned long IdLowPart;
        /* 0x000c */ unsigned long IdHighPart;
      } /* size: 0x000c */ Connection;
    }; /* size: 0x000c */
  } /* size: 0x000c */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0010 */

