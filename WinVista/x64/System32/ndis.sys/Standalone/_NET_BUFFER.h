typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

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

typedef struct _NET_BUFFER
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _NET_BUFFER* Next;
      /* 0x0008 */ struct _MDL* CurrentMdl;
      /* 0x0010 */ unsigned long CurrentMdlOffset;
      union
      {
        /* 0x0018 */ unsigned long DataLength;
        struct
        {
          /* 0x0018 */ unsigned __int64 stDataLength;
          /* 0x0020 */ struct _MDL* MdlChain;
          /* 0x0028 */ unsigned long DataOffset;
        }; /* size: 0x0014 */
      }; /* size: 0x0014 */
    }; /* size: 0x0028 */
    /* 0x0000 */ union _SLIST_HEADER Link;
  }; /* size: 0x0028 */
  /* 0x0030 */ unsigned short ChecksumBias;
  /* 0x0032 */ unsigned short Reserved;
  /* 0x0038 */ void* NdisPoolHandle;
  /* 0x0040 */ void* NdisReserved[2];
  /* 0x0050 */ void* ProtocolReserved[6];
  /* 0x0080 */ void* MiniportReserved[4];
  /* 0x00a0 */ union _LARGE_INTEGER NdisReserved1;
  /* 0x00a8 */ long __PADDING__[2];
} NET_BUFFER, *PNET_BUFFER; /* size: 0x00b0 */

