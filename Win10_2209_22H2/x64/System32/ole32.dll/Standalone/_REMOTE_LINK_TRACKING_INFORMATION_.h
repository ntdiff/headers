typedef struct _REMOTE_LINK_TRACKING_INFORMATION_
{
  /* 0x0000 */ void* TargetFileObject;
  /* 0x0008 */ unsigned long TargetLinkTrackingInformationLength;
  /* 0x000c */ unsigned char TargetLinkTrackingInformationBuffer[1];
  /* 0x000d */ char __PADDING__[3];
} REMOTE_LINK_TRACKING_INFORMATION_, *PREMOTE_LINK_TRACKING_INFORMATION_; /* size: 0x0010 */

