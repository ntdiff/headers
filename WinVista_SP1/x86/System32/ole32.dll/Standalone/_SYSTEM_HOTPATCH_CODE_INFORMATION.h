typedef struct _HOTPATCH_HOOK_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 TargetAddress;
  /* 0x0008 */ unsigned __int64 MappedAddress;
  /* 0x0010 */ unsigned long CodeOffset;
  /* 0x0014 */ unsigned long CodeSize;
  /* 0x0018 */ unsigned long OrigCodeOffset;
  /* 0x001c */ unsigned long ValidationOffset;
  /* 0x0020 */ unsigned long ValidationSize;
  /* 0x0024 */ long __PADDING__[1];
} HOTPATCH_HOOK_DESCRIPTOR, *PHOTPATCH_HOOK_DESCRIPTOR; /* size: 0x0028 */

typedef struct _SYSTEM_HOTPATCH_CODE_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long InfoSize;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long DescriptorsCount;
      /* 0x0010 */ struct _HOTPATCH_HOOK_DESCRIPTOR CodeDescriptors[1];
    } /* size: 0x0030 */ CodeInfo;
    struct
    {
      /* 0x0008 */ unsigned short NameOffset;
      /* 0x000a */ unsigned short NameLength;
    } /* size: 0x0004 */ KernelInfo;
    struct
    {
      /* 0x0008 */ unsigned short NameOffset;
      /* 0x000a */ unsigned short NameLength;
      /* 0x000c */ unsigned short TargetNameOffset;
      /* 0x000e */ unsigned short TargetNameLength;
      /* 0x0010 */ unsigned short ColdpatchImagePathOffset;
      /* 0x0012 */ unsigned short ColdpatchImagePathLength;
      /* 0x0014 */ unsigned char PatchingFinished;
      /* 0x0015 */ char __PADDING__[1];
    } /* size: 0x000e */ UserModeInfo;
    struct
    {
      /* 0x0008 */ unsigned short NameOffset;
      /* 0x000a */ unsigned short NameLength;
      /* 0x000c */ unsigned short TargetNameOffset;
      /* 0x000e */ unsigned short TargetNameLength;
      /* 0x0010 */ unsigned short ColdpatchImagePathOffset;
      /* 0x0012 */ unsigned short ColdpatchImagePathLength;
      /* 0x0018 */ unsigned __int64 TargetProcess;
    } /* size: 0x0018 */ InjectionInfo;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned __int64 ParentDirectory;
        /* 0x0010 */ unsigned __int64 ObjectHandle1;
        /* 0x0018 */ unsigned __int64 ObjectHandle2;
      } /* size: 0x0018 */ AtomicSwap;
      /* 0x0020 */ long __PADDING__[6];
    }; /* size: 0x0030 */
  }; /* size: 0x0030 */
} SYSTEM_HOTPATCH_CODE_INFORMATION, *PSYSTEM_HOTPATCH_CODE_INFORMATION; /* size: 0x0038 */

