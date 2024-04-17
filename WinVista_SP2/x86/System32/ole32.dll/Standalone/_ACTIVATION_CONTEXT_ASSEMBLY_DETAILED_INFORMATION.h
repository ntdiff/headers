typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION
{
  /* 0x0000 */ unsigned long ulFlags;
  /* 0x0004 */ unsigned long ulEncodedAssemblyIdentityLength;
  /* 0x0008 */ unsigned long ulManifestPathType;
  /* 0x000c */ unsigned long ulManifestPathLength;
  /* 0x0010 */ union _LARGE_INTEGER liManifestLastWriteTime;
  /* 0x0018 */ unsigned long ulPolicyPathType;
  /* 0x001c */ unsigned long ulPolicyPathLength;
  /* 0x0020 */ union _LARGE_INTEGER liPolicyLastWriteTime;
  /* 0x0028 */ unsigned long ulMetadataSatelliteRosterIndex;
  /* 0x002c */ unsigned long ulManifestVersionMajor;
  /* 0x0030 */ unsigned long ulManifestVersionMinor;
  /* 0x0034 */ unsigned long ulPolicyVersionMajor;
  /* 0x0038 */ unsigned long ulPolicyVersionMinor;
  /* 0x003c */ unsigned long ulAssemblyDirectoryNameLength;
  /* 0x0040 */ const wchar_t* lpAssemblyEncodedAssemblyIdentity;
  /* 0x0044 */ const wchar_t* lpAssemblyManifestPath;
  /* 0x0048 */ const wchar_t* lpAssemblyPolicyPath;
  /* 0x004c */ const wchar_t* lpAssemblyDirectoryName;
  /* 0x0050 */ unsigned long ulFileCount;
  /* 0x0054 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION; /* size: 0x0058 */

