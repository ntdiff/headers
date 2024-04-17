typedef struct _SD_CHANGE_MACHINE_SID_OUTPUT
{
  /* 0x0000 */ unsigned __int64 NumSDChangedSuccess;
  /* 0x0008 */ unsigned __int64 NumSDChangedFail;
  /* 0x0010 */ unsigned __int64 NumSDUnused;
  /* 0x0018 */ unsigned __int64 NumSDTotal;
  /* 0x0020 */ unsigned __int64 NumMftSDChangedSuccess;
  /* 0x0028 */ unsigned __int64 NumMftSDChangedFail;
  /* 0x0030 */ unsigned __int64 NumMftSDTotal;
} SD_CHANGE_MACHINE_SID_OUTPUT, *PSD_CHANGE_MACHINE_SID_OUTPUT; /* size: 0x0038 */

typedef struct _SD_GLOBAL_CHANGE_OUTPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long ChangeType;
  /* 0x0008 */ struct _SD_CHANGE_MACHINE_SID_OUTPUT SdChange;
} SD_GLOBAL_CHANGE_OUTPUT, *PSD_GLOBAL_CHANGE_OUTPUT; /* size: 0x0040 */

