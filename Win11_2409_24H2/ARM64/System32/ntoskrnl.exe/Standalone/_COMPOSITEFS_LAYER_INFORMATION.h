typedef struct _BLOCK_IO_LAYER_INFORMATION
{
  /* 0x0000 */ char* ArcName;
} BLOCK_IO_LAYER_INFORMATION, *PBLOCK_IO_LAYER_INFORMATION; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CIMFS_LAYER_INFORMATION
{
  /* 0x0000 */ struct _GUID TargetVolume;
  /* 0x0010 */ struct _UNICODE_STRING* CimFiles;
  /* 0x0018 */ unsigned long CimFilesCount;
  /* 0x001c */ unsigned long MountFlags;
  /* 0x0020 */ unsigned char ParentIsVsmb;
  /* 0x0028 */ char* ParentDeviceArcName;
} CIMFS_LAYER_INFORMATION, *PCIMFS_LAYER_INFORMATION; /* size: 0x0030 */

typedef struct _COMPOSITEFS_LAYER_INFORMATION
{
  /* 0x0000 */ unsigned long DeviceType;
  union
  {
    union
    {
      /* 0x0008 */ struct _BLOCK_IO_LAYER_INFORMATION BlockIo;
      /* 0x0008 */ struct _CIMFS_LAYER_INFORMATION Cimfs;
    }; /* size: 0x0030 */
  } /* size: 0x0030 */ u;
} COMPOSITEFS_LAYER_INFORMATION, *PCOMPOSITEFS_LAYER_INFORMATION; /* size: 0x0038 */

