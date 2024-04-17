struct tagPROPSPEC
{
  /* 0x0000 */ unsigned long ulKind;
  union
  {
    /* 0x0008 */ unsigned long propid;
    /* 0x0008 */ wchar_t* lpwstr;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

