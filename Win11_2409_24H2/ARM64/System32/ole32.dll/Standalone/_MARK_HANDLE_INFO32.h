typedef struct _MARK_HANDLE_INFO32
{
  union
  {
    /* 0x0000 */ unsigned long UsnSourceInfo;
    /* 0x0000 */ unsigned long CopyNumber;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned int VolumeHandle;
  /* 0x0008 */ unsigned long HandleInfo;
} MARK_HANDLE_INFO32, *PMARK_HANDLE_INFO32; /* size: 0x000c */

