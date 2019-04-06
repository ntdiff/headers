typedef struct _NETWORK_LOADER_BLOCK
{
  /* 0x0000 */ unsigned char* DHCPServerACK;
  /* 0x0004 */ unsigned long DHCPServerACKLength;
  /* 0x0008 */ unsigned char* BootServerReplyPacket;
  /* 0x000c */ unsigned long BootServerReplyPacketLength;
} NETWORK_LOADER_BLOCK, *PNETWORK_LOADER_BLOCK; /* size: 0x0010 */

