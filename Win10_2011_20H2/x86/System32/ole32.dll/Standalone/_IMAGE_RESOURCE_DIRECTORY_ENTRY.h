typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long NameOffset : 31; /* bit position: 0 */
      /* 0x0000 */ unsigned long NameIsString : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Name;
    /* 0x0000 */ unsigned short Id;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long OffsetToData;
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long OffsetToDirectory : 31; /* bit position: 0 */
      /* 0x0004 */ unsigned long DataIsDirectory : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY; /* size: 0x0008 */

