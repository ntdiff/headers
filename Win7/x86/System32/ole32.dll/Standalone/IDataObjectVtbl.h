struct IDataObjectVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetData /* function */;
  /* 0x0010 */ void* GetDataHere /* function */;
  /* 0x0014 */ void* QueryGetData /* function */;
  /* 0x0018 */ void* GetCanonicalFormatEtc /* function */;
  /* 0x001c */ void* SetData /* function */;
  /* 0x0020 */ void* EnumFormatEtc /* function */;
  /* 0x0024 */ void* DAdvise /* function */;
  /* 0x0028 */ void* DUnadvise /* function */;
  /* 0x002c */ void* EnumDAdvise /* function */;
}; /* size: 0x0030 */

