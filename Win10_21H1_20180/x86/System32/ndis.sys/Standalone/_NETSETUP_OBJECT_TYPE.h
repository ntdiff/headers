typedef enum _NETSETUP_OBJECT_TYPE
{
  NetSetupObjectTypeUnknown = 0,
  NetSetupObjectTypeGlobal = 1,
  NetSetupObjectTypeInterface = 2,
  NetSetupObjectTypeFilterDriver = 3,
  NetSetupObjectTypeProtocolDriver = 4,
  NetSetupObjectTypeServiceDriver = 5,
  NetSetupObjectTypeClientDriver = 6,
  NetSetupObjectTypeBindingPath = 7,
  NetSetupObjectTypeMux = 8,
  NetSetupObjectTypeTransaction = 9,
  NetSetupObjectTypeReflectedProperty = 10,
  NetSetupObjectTypeBindRule = 11,
  NetSetupObjectTypeInterfaceDriver = 12,
  NetSetupObjectTypeMaximum = 13,
} NETSETUP_OBJECT_TYPE, *PNETSETUP_OBJECT_TYPE;

