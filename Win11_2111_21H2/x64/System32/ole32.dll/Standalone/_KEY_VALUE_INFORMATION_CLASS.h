typedef enum _KEY_VALUE_INFORMATION_CLASS
{
  KeyValueBasicInformation = 0,
  KeyValueFullInformation = 1,
  KeyValuePartialInformation = 2,
  KeyValueFullInformationAlign64 = 3,
  KeyValuePartialInformationAlign64 = 4,
  KeyValueLayerInformation = 5,
  MaxKeyValueInfoClass = 6,
} KEY_VALUE_INFORMATION_CLASS, *PKEY_VALUE_INFORMATION_CLASS;

