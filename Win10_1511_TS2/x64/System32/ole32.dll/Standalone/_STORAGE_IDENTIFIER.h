typedef enum _STORAGE_IDENTIFIER_CODE_SET
{
  StorageIdCodeSetReserved = 0,
  StorageIdCodeSetBinary = 1,
  StorageIdCodeSetAscii = 2,
  StorageIdCodeSetUtf8 = 3,
} STORAGE_IDENTIFIER_CODE_SET, *PSTORAGE_IDENTIFIER_CODE_SET;

typedef enum _STORAGE_IDENTIFIER_TYPE
{
  StorageIdTypeVendorSpecific = 0,
  StorageIdTypeVendorId = 1,
  StorageIdTypeEUI64 = 2,
  StorageIdTypeFCPHName = 3,
  StorageIdTypePortRelative = 4,
  StorageIdTypeTargetPortGroup = 5,
  StorageIdTypeLogicalUnitGroup = 6,
  StorageIdTypeMD5LogicalUnitIdentifier = 7,
  StorageIdTypeScsiNameString = 8,
} STORAGE_IDENTIFIER_TYPE, *PSTORAGE_IDENTIFIER_TYPE;

typedef enum _STORAGE_ASSOCIATION_TYPE
{
  StorageIdAssocDevice = 0,
  StorageIdAssocPort = 1,
  StorageIdAssocTarget = 2,
} STORAGE_ASSOCIATION_TYPE, *PSTORAGE_ASSOCIATION_TYPE;

typedef struct _STORAGE_IDENTIFIER
{
  /* 0x0000 */ enum _STORAGE_IDENTIFIER_CODE_SET CodeSet;
  /* 0x0004 */ enum _STORAGE_IDENTIFIER_TYPE Type;
  /* 0x0008 */ unsigned short IdentifierSize;
  /* 0x000a */ unsigned short NextOffset;
  /* 0x000c */ enum _STORAGE_ASSOCIATION_TYPE Association;
  /* 0x0010 */ unsigned char Identifier[1];
  /* 0x0011 */ char __PADDING__[3];
} STORAGE_IDENTIFIER, *PSTORAGE_IDENTIFIER; /* size: 0x0014 */

