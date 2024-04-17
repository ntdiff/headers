struct pvalueW
{
  /* 0x0000 */ wchar_t* pv_valuename;
  /* 0x0008 */ int pv_valuelen;
  /* 0x0010 */ void* pv_value_context;
  /* 0x0018 */ unsigned long pv_type;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

