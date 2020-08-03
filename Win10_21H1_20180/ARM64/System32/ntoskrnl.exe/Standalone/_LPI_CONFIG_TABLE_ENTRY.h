typedef union _LPI_CONFIG_TABLE_ENTRY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Enable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Reserved1_1 : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Priority : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} LPI_CONFIG_TABLE_ENTRY, *PLPI_CONFIG_TABLE_ENTRY; /* size: 0x0001 */

