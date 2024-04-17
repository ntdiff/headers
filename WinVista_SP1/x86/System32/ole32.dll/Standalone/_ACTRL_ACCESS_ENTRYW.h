typedef enum _MULTIPLE_TRUSTEE_OPERATION
{
  NO_MULTIPLE_TRUSTEE = 0,
  TRUSTEE_IS_IMPERSONATE = 1,
} MULTIPLE_TRUSTEE_OPERATION, *PMULTIPLE_TRUSTEE_OPERATION;

typedef enum _TRUSTEE_FORM
{
  TRUSTEE_IS_SID = 0,
  TRUSTEE_IS_NAME = 1,
  TRUSTEE_BAD_FORM = 2,
  TRUSTEE_IS_OBJECTS_AND_SID = 3,
  TRUSTEE_IS_OBJECTS_AND_NAME = 4,
} TRUSTEE_FORM, *PTRUSTEE_FORM;

typedef enum _TRUSTEE_TYPE
{
  TRUSTEE_IS_UNKNOWN = 0,
  TRUSTEE_IS_USER = 1,
  TRUSTEE_IS_GROUP = 2,
  TRUSTEE_IS_DOMAIN = 3,
  TRUSTEE_IS_ALIAS = 4,
  TRUSTEE_IS_WELL_KNOWN_GROUP = 5,
  TRUSTEE_IS_DELETED = 6,
  TRUSTEE_IS_INVALID = 7,
  TRUSTEE_IS_COMPUTER = 8,
} TRUSTEE_TYPE, *PTRUSTEE_TYPE;

typedef struct _TRUSTEE_W
{
  /* 0x0000 */ struct _TRUSTEE_W* pMultipleTrustee;
  /* 0x0004 */ enum _MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
  /* 0x0008 */ enum _TRUSTEE_FORM TrusteeForm;
  /* 0x000c */ enum _TRUSTEE_TYPE TrusteeType;
  /* 0x0010 */ wchar_t* ptstrName;
} TRUSTEE_W, *PTRUSTEE_W; /* size: 0x0014 */

typedef struct _ACTRL_ACCESS_ENTRYW
{
  /* 0x0000 */ struct _TRUSTEE_W Trustee;
  /* 0x0014 */ unsigned long fAccessFlags;
  /* 0x0018 */ unsigned long Access;
  /* 0x001c */ unsigned long ProvSpecificAccess;
  /* 0x0020 */ unsigned long Inheritance;
  /* 0x0024 */ wchar_t* lpInheritProperty;
} ACTRL_ACCESS_ENTRYW, *PACTRL_ACCESS_ENTRYW; /* size: 0x0028 */

