typedef struct _NETWORK_LOADER_BLOCK
{
  /* 0x0000 */ unsigned char* DHCPServerACK;
  /* 0x0008 */ unsigned long DHCPServerACKLength;
  /* 0x0010 */ unsigned char* BootServerReplyPacket;
  /* 0x0018 */ unsigned long BootServerReplyPacketLength;
  /* 0x001c */ long __PADDING__[1];
} NETWORK_LOADER_BLOCK, *PNETWORK_LOADER_BLOCK; /* size: 0x0020 */

