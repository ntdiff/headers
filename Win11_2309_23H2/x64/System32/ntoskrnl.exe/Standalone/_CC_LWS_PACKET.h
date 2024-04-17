typedef enum _CC_LWS_PACKET_TYPE
{
  LWSPacket_Invalid = 0,
  LWSPacket_Partition = 1,
  LWSPacket_PrivateVCM = 2,
  LWSPacket_Max = 3,
} CC_LWS_PACKET_TYPE, *PCC_LWS_PACKET_TYPE;

typedef struct _CC_LWS_PACKET
{
  /* 0x0000 */ enum _CC_LWS_PACKET_TYPE Type;
  /* 0x0004 */ unsigned char Active;
  union
  {
    union
    {
      /* 0x0008 */ struct _CC_PARTITION* Partition;
      /* 0x0008 */ struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Overlay;
} CC_LWS_PACKET, *PCC_LWS_PACKET; /* size: 0x0010 */

