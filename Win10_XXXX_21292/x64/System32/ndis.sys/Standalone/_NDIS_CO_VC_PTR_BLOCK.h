typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ void* ClientContext;
  /* 0x0020 */ struct _LIST_ENTRY ClientLink;
  /* 0x0030 */ struct _LIST_ENTRY VcLink;
  /* 0x0040 */ struct _NDIS_CO_AF_BLOCK* AfBlock;
  /* 0x0048 */ struct _NDIS_CO_VC_BLOCK* VcBlock;
  /* 0x0050 */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x0058 */ long OwnsVcBlock;
  /* 0x0060 */ void* CoDeleteVcHandler /* function */;
  /* 0x0068 */ void* DeleteVcContext;
  /* 0x0070 */ void* ClModifyCallQoSCompleteHandler /* function */;
  /* 0x0078 */ void* ClIncomingCallQoSChangeHandler /* function */;
  /* 0x0080 */ void* ClCallConnectedHandler /* function */;
  /* 0x0088 */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x0090 */ void* CallMgrContext;
  /* 0x0098 */ struct _LIST_ENTRY CallMgrLink;
  /* 0x00a8 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x00b0 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x00b8 */ void* CmModifyCallQoSHandler /* function */;
  /* 0x00c0 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x00c8 */ void* MiniportContext;
  /* 0x00d0 */ void* WCoSendPacketsHandler /* function */;
  /* 0x00d8 */ void* WCoDeleteVcHandler /* function */;
  /* 0x00e0 */ void* WCoActivateVcHandler /* function */;
  /* 0x00e8 */ void* WCoDeactivateVcHandler /* function */;
  /* 0x00f0 */ void* WCoSendNetBufferListsHandler /* function */;
  /* 0x00f8 */ void* CoSendNetBufferListsHandler /* function */;
  /* 0x0100 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0108 */ void* CoSendPacketHandler /* function */;
  /* 0x0110 */ void* CoSendPacketCompleteHandler /* function */;
  /* 0x0118 */ void* CoIndicateReceivePacketHandler /* function */;
  /* 0x0120 */ void* CoIndicateReceiveNetBufferListsHandler /* function */;
  /* 0x0128 */ struct _UNICODE_STRING VcInstanceName;
  /* 0x0138 */ union _LARGE_INTEGER VcIndex;
  /* 0x0140 */ struct _LIST_ENTRY WmiLink;
  /* 0x0150 */ unsigned char CallMiniportDeleteVc;
  /* 0x0151 */ char __PADDING__[7];
} NDIS_CO_VC_PTR_BLOCK, *PNDIS_CO_VC_PTR_BLOCK; /* size: 0x0158 */

