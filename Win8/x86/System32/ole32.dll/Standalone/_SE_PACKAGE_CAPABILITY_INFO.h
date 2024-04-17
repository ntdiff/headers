typedef struct _SE_PACKAGE_CAPABILITY_INFO
{
  /* 0x0000 */ unsigned long Remaining;
  /* 0x0004 */ unsigned long PackageGrantedAccess;
  /* 0x0008 */ unsigned long CapabilityGrantedAccess;
  /* 0x000c */ unsigned long UserGroupsRemaining;
  /* 0x0010 */ unsigned char PackagesPresent;
  /* 0x0011 */ unsigned char PackageMatch;
  /* 0x0012 */ unsigned char CapabilityMatch;
  /* 0x0013 */ unsigned char LogPermissiveFailure;
} SE_PACKAGE_CAPABILITY_INFO, *PSE_PACKAGE_CAPABILITY_INFO; /* size: 0x0014 */

