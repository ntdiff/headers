typedef struct _NDIS_NET_BUFFER_LIST_FILTERING_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short FilterId;
      union
      {
        union
        {
          /* 0x0002 */ unsigned short QueueId;
          /* 0x0002 */ unsigned short VPortId;
        }; /* size: 0x0002 */
      } /* size: 0x0002 */ QueueVPortInfo;
    } /* size: 0x0004 */ FilteringInfo;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0004 */
} NDIS_NET_BUFFER_LIST_FILTERING_INFO, *PNDIS_NET_BUFFER_LIST_FILTERING_INFO; /* size: 0x0004 */

