struct DelayLoadProc
{
  /* 0x0000 */ int fImportByName;
  union
  {
    /* 0x0004 */ const char* szProcName;
    /* 0x0004 */ unsigned long dwOrdinal;
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

