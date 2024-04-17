typedef struct _MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH
{
  /* 0x0000 */ unsigned long Version;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long ApplyReversePatches : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long ApplyForwardPatches : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long UndoPatch : 1; /* bit position: 2 */
        /* 0x0004 */ unsigned long Spare : 29; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x0010 */ void* BaseImageAddress;
  /* 0x0018 */ void* PatchImageAddress;
} MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH, *PMANAGE_HOT_PATCH_APPLY_IMAGE_PATCH; /* size: 0x0020 */

