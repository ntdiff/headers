typedef struct _FPO_DATA
{
  /* 0x0000 */ unsigned long ulOffStart;
  /* 0x0004 */ unsigned long cbProcSize;
  /* 0x0008 */ unsigned long cdwLocals;
  /* 0x000c */ unsigned short cdwParams;
  struct /* bitfield */
  {
    /* 0x000e */ unsigned short cbProlog : 8; /* bit position: 0 */
    /* 0x000e */ unsigned short cbRegs : 3; /* bit position: 8 */
    /* 0x000e */ unsigned short fHasSEH : 1; /* bit position: 11 */
    /* 0x000e */ unsigned short fUseBP : 1; /* bit position: 12 */
    /* 0x000e */ unsigned short reserved : 1; /* bit position: 13 */
    /* 0x000e */ unsigned short cbFrame : 2; /* bit position: 14 */
  }; /* bitfield */
} FPO_DATA, *PFPO_DATA; /* size: 0x0010 */

