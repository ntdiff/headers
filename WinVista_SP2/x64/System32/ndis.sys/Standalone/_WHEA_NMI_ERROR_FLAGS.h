typedef union _WHEA_NMI_ERROR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_NMI_ERROR_FLAGS, *PWHEA_NMI_ERROR_FLAGS; /* size: 0x0004 */

