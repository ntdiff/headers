struct IRecordInfoVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* RecordInit /* function */;
  /* 0x0010 */ void* RecordClear /* function */;
  /* 0x0014 */ void* RecordCopy /* function */;
  /* 0x0018 */ void* GetGuid /* function */;
  /* 0x001c */ void* GetName /* function */;
  /* 0x0020 */ void* GetSize /* function */;
  /* 0x0024 */ void* GetTypeInfo /* function */;
  /* 0x0028 */ void* GetField /* function */;
  /* 0x002c */ void* GetFieldNoCopy /* function */;
  /* 0x0030 */ void* PutField /* function */;
  /* 0x0034 */ void* PutFieldNoCopy /* function */;
  /* 0x0038 */ void* GetFieldNames /* function */;
  /* 0x003c */ void* IsMatchingType /* function */;
  /* 0x0040 */ void* RecordCreate /* function */;
  /* 0x0044 */ void* RecordCreateCopy /* function */;
  /* 0x0048 */ void* RecordDestroy /* function */;
}; /* size: 0x004c */

