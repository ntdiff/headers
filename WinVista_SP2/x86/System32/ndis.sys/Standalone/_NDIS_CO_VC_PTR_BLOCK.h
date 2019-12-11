typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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

typedef struct _NDIS_CO_VC_PTR_BLOCK
{
  /* 0x0000 */ long References;
  /* 0x0004 */ unsigned long CallFlags;
  /* 0x0008 */ unsigned long* pVcFlags;
  /* 0x000c */ unsigned long Lock;
  /* 0x0010 */ void* ClientContext;
  /* 0x0014 */ struct _LIST_ENTRY ClientLink;
  /* 0x001c */ struct _LIST_ENTRY VcLink;
  /* 0x0024 */ struct _NDIS_CO_AF_BLOCK* AfBlock;
  /* 0x0028 */ struct _NDIS_CO_VC_BLOCK* VcBlock;
  /* 0x002c */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x0030 */ long OwnsVcBlock;
  /* 0x0034 */ void* CoDeleteVcHandler /* function */;
  /* 0x0038 */ void* DeleteVcContext;
  /* 0x003c */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0040 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0044 */ void* ClCallConnectedHandler /* function */;
  /* 0x0048 */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x004c */ void* CallMgrContext;
  /* 0x0050 */ struct _LIST_ENTRY CallMgrLink;
  /* 0x0058 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x005c */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x0060 */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0064 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0068 */ void* MiniportContext;
  /* 0x006c */ void* WCoSendPacketsHandler /* function */;
  /* 0x0070 */ void* WCoDeleteVcHandler /* function */;
  /* 0x0074 */ void* WCoActivateVcHandler /* function */;
  /* 0x0078 */ void* WCoDeactivateVcHandler /* function */;
  /* 0x007c */ void* WCoSendNetBufferListsHandler /* function */;
  /* 0x0080 */ void* CoSendNetBufferListsHandler /* function */;
  /* 0x0084 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0088 */ void* CoSendPacketHandler /* function */;
  /* 0x008c */ void* CoSendPacketCompleteHandler /* function */;
  /* 0x0090 */ void* CoIndicateReceivePacketHandler /* function */;
  /* 0x0094 */ void* CoIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0098 */ struct _UNICODE_STRING VcInstanceName;
  /* 0x00a0 */ union _LARGE_INTEGER VcIndex;
  /* 0x00a8 */ struct _LIST_ENTRY WmiLink;
  /* 0x00b0 */ unsigned char CallMiniportDeleteVc;
  /* 0x00b1 */ char __PADDING__[7];
} NDIS_CO_VC_PTR_BLOCK, *PNDIS_CO_VC_PTR_BLOCK; /* size: 0x00b8 */

