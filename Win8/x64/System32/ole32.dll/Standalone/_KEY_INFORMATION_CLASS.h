typedef enum _KEY_INFORMATION_CLASS
{
  KeyBasicInformation = 0,
  KeyNodeInformation = 1,
  KeyFullInformation = 2,
  KeyNameInformation = 3,
  KeyCachedInformation = 4,
  KeyFlagsInformation = 5,
  KeyVirtualizationInformation = 6,
  KeyHandleTagsInformation = 7,
  KeyTrustInformation = 8,
  MaxKeyInfoClass = 9,
} KEY_INFORMATION_CLASS, *PKEY_INFORMATION_CLASS;

