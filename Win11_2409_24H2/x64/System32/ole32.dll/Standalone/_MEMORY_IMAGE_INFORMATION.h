typedef struct _MEMORY_IMAGE_INFORMATION
{
  /* 0x0000 */ void* ImageBase;
  /* 0x0008 */ unsigned __int64 SizeOfImage;
  union
  {
    /* 0x0010 */ unsigned long ImageFlags;
    struct /* bitfield */
    {
      /* 0x0010 */ unsigned long ImagePartialMap : 1; /* bit position: 0 */
      /* 0x0010 */ unsigned long ImageNotExecutable : 1; /* bit position: 1 */
      /* 0x0010 */ unsigned long ImageSigningLevel : 4; /* bit position: 2 */
      /* 0x0010 */ unsigned long ImageExtensionPresent : 1; /* bit position: 6 */
      /* 0x0010 */ unsigned long Reserved : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0014 */ long __PADDING__[1];
} MEMORY_IMAGE_INFORMATION, *PMEMORY_IMAGE_INFORMATION; /* size: 0x0018 */

