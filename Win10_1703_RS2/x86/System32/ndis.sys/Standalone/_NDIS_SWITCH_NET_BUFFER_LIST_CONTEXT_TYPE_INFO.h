typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ char* ContextName;
  /* 0x0008 */ struct _GUID* ExtensionId;
} NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO, *PNDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO; /* size: 0x000c */

