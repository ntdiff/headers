typedef struct _VIRTUALIZATION_INSTANCE_INFO_INPUT_EX
{
  /* 0x0000 */ unsigned short HeaderSize;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NotificationInfoSize;
  /* 0x000c */ unsigned short NotificationInfoOffset;
  /* 0x000e */ unsigned short ProviderMajorVersion;
} VIRTUALIZATION_INSTANCE_INFO_INPUT_EX, *PVIRTUALIZATION_INSTANCE_INFO_INPUT_EX; /* size: 0x0010 */

