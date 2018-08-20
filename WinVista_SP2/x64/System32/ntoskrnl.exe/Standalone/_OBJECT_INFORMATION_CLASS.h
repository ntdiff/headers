typedef enum _OBJECT_INFORMATION_CLASS
{
  ObjectBasicInformation = 0,
  ObjectNameInformation = 1,
  ObjectTypeInformation = 2,
  ObjectTypesInformation = 3,
  ObjectHandleFlagInformation = 4,
  ObjectSessionInformation = 5,
  MaxObjectInfoClass = 6,
} OBJECT_INFORMATION_CLASS, *POBJECT_INFORMATION_CLASS;

