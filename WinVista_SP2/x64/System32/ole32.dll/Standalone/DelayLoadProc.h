struct DelayLoadProc
{
  /* 0x0000 */ int fImportByName;
  union
  {
    /* 0x0008 */ const char* szProcName;
    struct
    {
      /* 0x0008 */ unsigned long dwOrdinal;
      /* 0x000c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

