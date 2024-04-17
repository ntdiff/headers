typedef struct _SE_PACKAGE_CAPABILITY_INFO
{
  /* 0x0000 */ unsigned long Remaining;
  /* 0x0004 */ unsigned long PackageGrantedAccess;
  /* 0x0008 */ unsigned long CapabilityGrantedAccess;
  /* 0x000c */ unsigned long UserGroupsRemaining;
  /* 0x0010 */ unsigned long AllAppPackagesSkippedAccess;
  /* 0x0014 */ unsigned char PackagesPresent;
  /* 0x0015 */ unsigned char PackageMatch;
  /* 0x0016 */ unsigned char CapabilityMatch;
  /* 0x0017 */ unsigned char LogPermissiveFailure;
  /* 0x0018 */ unsigned char AllAppPackagesSkipped;
  /* 0x0019 */ char __PADDING__[3];
} SE_PACKAGE_CAPABILITY_INFO, *PSE_PACKAGE_CAPABILITY_INFO; /* size: 0x001c */

