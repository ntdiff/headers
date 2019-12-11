typedef struct _NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO
{
  union
  {
    /* 0x0000 */ void* MediaSpecificInfo;
    /* 0x0000 */ void* NativeWifiSpecificInfo;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO, *PNDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO; /* size: 0x0008 */

