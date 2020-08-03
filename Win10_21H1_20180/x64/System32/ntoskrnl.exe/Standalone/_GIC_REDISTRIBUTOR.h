typedef struct _GIC_REDISTRIBUTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned __int64 DiscoveryRangeBaseAddress;
  /* 0x000c */ unsigned long DiscoveryRangeLength;
} GIC_REDISTRIBUTOR, *PGIC_REDISTRIBUTOR; /* size: 0x0010 */

