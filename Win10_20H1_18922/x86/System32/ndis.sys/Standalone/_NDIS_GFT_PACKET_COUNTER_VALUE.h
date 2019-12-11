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

typedef struct _NDIS_GFT_PACKET_COUNTER_VALUE
{
  /* 0x0000 */ unsigned __int64 Packets;
  /* 0x0008 */ union _LARGE_INTEGER LastUpdate;
} NDIS_GFT_PACKET_COUNTER_VALUE, *PNDIS_GFT_PACKET_COUNTER_VALUE; /* size: 0x0010 */

