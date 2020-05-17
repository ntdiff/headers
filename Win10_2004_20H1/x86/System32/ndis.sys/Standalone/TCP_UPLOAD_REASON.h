enum TCP_UPLOAD_REASON
{
  LowActivity = 1,
  HighDropRate = 2,
  SmallIO = 3,
  NoBufferPreposting = 4,
  NoBufferProposting = 4,
  ReceivedUrgentData = 5,
  HighFragmentation = 6,
  HighOutOfOrderPackets = 7,
  TimeoutExpiration = 8,
  InvalidState = 9,
  UploadRequested = 10,
  HardwareFailure = 11,
  MaxUploadReason = 12,
};

