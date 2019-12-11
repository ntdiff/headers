typedef struct _NDIS_PD_EXT_CLIENT_DISPATCH
{
  /* 0x0000 */ void* PDExtClientProcessBuffersSend /* function */;
  /* 0x0008 */ void* PDExtClientProcessBuffersReceive /* function */;
  /* 0x0010 */ void* PDExtClientCompleteBuffersSend /* function */;
  /* 0x0018 */ void* PDExtClientCompleteBuffersReceive /* function */;
} NDIS_PD_EXT_CLIENT_DISPATCH, *PNDIS_PD_EXT_CLIENT_DISPATCH; /* size: 0x0020 */

