typedef struct _IMAGE_FILE_MACHINES
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long x86 : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long amd64 : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long arm : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long arm64 : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long arm64ec : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_FILE_MACHINES, *PIMAGE_FILE_MACHINES; /* size: 0x0004 */

