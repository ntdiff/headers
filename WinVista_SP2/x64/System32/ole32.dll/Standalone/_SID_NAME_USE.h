typedef enum _SID_NAME_USE
{
  SidTypeUser = 1,
  SidTypeGroup = 2,
  SidTypeDomain = 3,
  SidTypeAlias = 4,
  SidTypeWellKnownGroup = 5,
  SidTypeDeletedAccount = 6,
  SidTypeInvalid = 7,
  SidTypeUnknown = 8,
  SidTypeComputer = 9,
  SidTypeLabel = 10,
} SID_NAME_USE, *PSID_NAME_USE;

