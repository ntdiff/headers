enum SourceOfClientHResult
{
  Unknown = 0,
  Server = 1,
  ClientSideChannelNegotiateSyntax = 2,
  ClientSideChannelGetBuffer = 3,
  ClientSideChannelSendReceive = 4,
  ClientSideChannelSend = 5,
  ClientSideChannelReceive = 6,
  ClientSideTransportNegotiateSyntax = 7,
  ClientSideTransportGetBuffer = 8,
  ClientSideTransportSendReceive = 9,
  ClientSideTransportSend = 10,
  ClientSideTransportReceive = 11,
  ClientSideSizing = 12,
  ClientSideMarshaling = 13,
  ClientSideUnmarshaling = 14,
  ClientCancel = 15,
  ServerFault = 16,
  ServerSideAccessCheck = 17,
  ServerSideChannelGeneric = 18,
  ServerSideChannelCallControl = 19,
};

