struct IDataObjectVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetData /* function */;
  /* 0x0020 */ void* GetDataHere /* function */;
  /* 0x0028 */ void* QueryGetData /* function */;
  /* 0x0030 */ void* GetCanonicalFormatEtc /* function */;
  /* 0x0038 */ void* SetData /* function */;
  /* 0x0040 */ void* EnumFormatEtc /* function */;
  /* 0x0048 */ void* DAdvise /* function */;
  /* 0x0050 */ void* DUnadvise /* function */;
  /* 0x0058 */ void* EnumDAdvise /* function */;
}; /* size: 0x0060 */

