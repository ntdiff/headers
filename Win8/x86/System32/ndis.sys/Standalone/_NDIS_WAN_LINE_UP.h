typedef enum _NDIS_WAN_QUALITY
{
  NdisWanRaw = 0,
  NdisWanErrorControl = 1,
  NdisWanReliable = 2,
} NDIS_WAN_QUALITY, *PNDIS_WAN_QUALITY;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_WAN_LINE_UP
{
  /* 0x0000 */ unsigned long LinkSpeed;
  /* 0x0004 */ unsigned long MaximumTotalSize;
  /* 0x0008 */ enum _NDIS_WAN_QUALITY Quality;
  /* 0x000c */ unsigned short SendWindow;
  /* 0x000e */ unsigned char RemoteAddress[6];
  /* 0x0014 */ unsigned char LocalAddress[6];
  /* 0x001c */ unsigned long ProtocolBufferLength;
  /* 0x0020 */ unsigned char* ProtocolBuffer;
  /* 0x0024 */ unsigned short ProtocolType;
  /* 0x0028 */ struct _UNICODE_STRING DeviceName;
} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP; /* size: 0x0030 */

