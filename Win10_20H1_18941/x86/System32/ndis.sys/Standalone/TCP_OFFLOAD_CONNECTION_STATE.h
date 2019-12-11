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

