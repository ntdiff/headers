typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _TCP_OFFLOAD_STATE_CONST
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ unsigned short Flags;
  /* 0x000a */ unsigned short RemotePort;
  /* 0x000c */ unsigned short LocalPort;
  struct /* bitfield */
  {
    /* 0x000e */ unsigned char SndWindScale : 4; /* bit position: 0 */
    /* 0x000e */ unsigned char RcvWindScale : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0010 */ unsigned short RemoteMss;
  /* 0x0014 */ unsigned long HashValue;
} TCP_OFFLOAD_STATE_CONST, *PTCP_OFFLOAD_STATE_CONST; /* size: 0x0018 */

