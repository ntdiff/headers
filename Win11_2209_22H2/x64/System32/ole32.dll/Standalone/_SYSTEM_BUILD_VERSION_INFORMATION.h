typedef struct _SYSTEM_BUILD_VERSION_INFORMATION
{
  /* 0x0000 */ unsigned short LayerNumber;
  /* 0x0002 */ unsigned short LayerCount;
  /* 0x0004 */ unsigned long OsMajorVersion;
  /* 0x0008 */ unsigned long OsMinorVersion;
  /* 0x000c */ unsigned long NtBuildNumber;
  /* 0x0010 */ unsigned long NtBuildQfe;
  /* 0x0014 */ unsigned char LayerName[128];
  /* 0x0094 */ unsigned char NtBuildBranch[128];
  /* 0x0114 */ unsigned char NtBuildLab[128];
  /* 0x0194 */ unsigned char NtBuildLabEx[128];
  /* 0x0214 */ unsigned char NtBuildStamp[26];
  /* 0x022e */ unsigned char NtBuildArch[16];
  union
  {
    union
    {
      /* 0x0240 */ unsigned long Value32;
      struct /* bitfield */
      {
        /* 0x0240 */ unsigned long IsTopLevel : 1; /* bit position: 0 */
        /* 0x0240 */ unsigned long IsChecked : 1; /* bit position: 1 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
} SYSTEM_BUILD_VERSION_INFORMATION, *PSYSTEM_BUILD_VERSION_INFORMATION; /* size: 0x0244 */

