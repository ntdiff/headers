typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

enum TCP_OFFLOAD_CONNECTION_STATE
{
  TcpConnectionClosed = 0,
  TcpConnectionListen = 1,
  TcpConnectionSynSent = 2,
  TcpConnectionSynRcvd = 3,
  TcpConnectionEstablished = 4,
  TcpConnectionFinWait1 = 5,
  TcpConnectionFinWait2 = 6,
  TcpConnectionCloseWait = 7,
  TcpConnectionClosing = 8,
  TcpConnectionLastAck = 9,
  TcpConnectionTimeWait = 10,
  TcpConnectionMaxState = 11,
};

typedef struct _TCP_OFFLOAD_STATE_DELEGATED
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ enum TCP_OFFLOAD_CONNECTION_STATE State;
  /* 0x000c */ unsigned short Flags;
  /* 0x0010 */ unsigned long RcvNxt;
  /* 0x0014 */ unsigned long RcvWnd;
  /* 0x0018 */ unsigned long SndUna;
  /* 0x001c */ unsigned long SndNxt;
  /* 0x0020 */ unsigned long SndMax;
  /* 0x0024 */ unsigned long SndWnd;
  /* 0x0028 */ unsigned long MaxSndWnd;
  /* 0x002c */ unsigned long SendWL1;
  /* 0x0030 */ unsigned long CWnd;
  /* 0x0034 */ unsigned long SsThresh;
  /* 0x0038 */ unsigned short SRtt;
  /* 0x003a */ unsigned short RttVar;
  /* 0x003c */ unsigned long TsRecent;
  /* 0x0040 */ unsigned long TsRecentAge;
  /* 0x0044 */ unsigned long TsTime;
  /* 0x0048 */ unsigned long TotalRT;
  /* 0x004c */ unsigned char DupAckCount;
  /* 0x004d */ unsigned char SndWndProbeCount;
  struct
  {
    /* 0x0050 */ unsigned char ProbeCount;
    /* 0x0054 */ unsigned long TimeoutDelta;
  } /* size: 0x0008 */ KeepAlive;
  struct
  {
    /* 0x0058 */ unsigned char Count;
    /* 0x005c */ unsigned long TimeoutDelta;
  } /* size: 0x0008 */ Retransmit;
  union
  {
    struct
    {
      /* 0x0060 */ struct _NET_BUFFER_LIST* SendDataHead;
      /* 0x0068 */ struct _NET_BUFFER_LIST* SendDataTail;
    }; /* size: 0x0010 */
    /* 0x0060 */ unsigned long SendBacklogSize;
  }; /* size: 0x0010 */
  union
  {
    /* 0x0070 */ struct _NET_BUFFER_LIST* BufferedData;
    /* 0x0070 */ unsigned long ReceiveBacklogSize;
  }; /* size: 0x0008 */
  /* 0x0078 */ unsigned long DWnd;
  /* 0x007c */ long __PADDING__[1];
} TCP_OFFLOAD_STATE_DELEGATED, *PTCP_OFFLOAD_STATE_DELEGATED; /* size: 0x0080 */

