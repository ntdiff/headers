typedef union _NDIS_RSC_NBL_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short CoalescedSegCount;
      /* 0x0002 */ unsigned short DupAckCount;
    } /* size: 0x0004 */ Info;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0004 */
} NDIS_RSC_NBL_INFO, *PNDIS_RSC_NBL_INFO; /* size: 0x0004 */

