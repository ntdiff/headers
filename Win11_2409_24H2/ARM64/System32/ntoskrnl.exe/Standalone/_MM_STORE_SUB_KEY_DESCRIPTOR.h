typedef union _MM_STORE_SUB_KEY_DESCRIPTOR
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long KeyType : 2; /* bit position: 0 */
        /* 0x0000 */ unsigned long Spare : 10; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0004 */ Flags;
    /* 0x0000 */ void* VirtualAddress;
  }; /* size: 0x0008 */
} MM_STORE_SUB_KEY_DESCRIPTOR, *PMM_STORE_SUB_KEY_DESCRIPTOR; /* size: 0x0008 */

