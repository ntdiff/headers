enum UoWActionType
{
  UoWAddThisKey = 0,
  UoWAddChildKey = 1,
  UoWDeleteThisKey = 2,
  UoWDeleteChildKey = 3,
  UoWSetValueNew = 4,
  UoWSetValueExisting = 5,
  UoWDeleteValue = 6,
  UoWSetKeyUserFlags = 7,
  UoWSetLastWriteTime = 8,
  UoWSetSecurityDescriptor = 9,
  UoWRenameSubKeyObsolete = 10,
  UoWRenameOldSubKeyObsolete = 11,
  UoWRenameNewSubKeyObsolete = 12,
  UoWIsolation = 13,
  UoWTestFail = 14,
  UoWRecreateKey = 15,
  UoWInvalid = 16,
};

