typedef struct _EISA_MEMORY_TYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char ReadWrite : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Cached : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char Reserved0 : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Type : 2; /* bit position: 3 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Reserved1 : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE; /* size: 0x0001 */

