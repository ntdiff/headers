struct MARK_HANDLE_INFO
{
  union
  {
    /* 0x0000 */ unsigned long UsnSourceInfo;
    /* 0x0000 */ unsigned long CopyNumber;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* VolumeHandle;
  /* 0x0008 */ unsigned long HandleInfo;
}; /* size: 0x000c */

