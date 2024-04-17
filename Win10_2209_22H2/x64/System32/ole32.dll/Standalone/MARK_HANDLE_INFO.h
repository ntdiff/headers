struct MARK_HANDLE_INFO
{
  union
  {
    /* 0x0000 */ unsigned long UsnSourceInfo;
    /* 0x0000 */ unsigned long CopyNumber;
  }; /* size: 0x0004 */
  /* 0x0008 */ void* VolumeHandle;
  /* 0x0010 */ unsigned long HandleInfo;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

