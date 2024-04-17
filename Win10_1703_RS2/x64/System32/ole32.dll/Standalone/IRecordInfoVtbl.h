struct IRecordInfoVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* RecordInit /* function */;
  /* 0x0020 */ void* RecordClear /* function */;
  /* 0x0028 */ void* RecordCopy /* function */;
  /* 0x0030 */ void* GetGuid /* function */;
  /* 0x0038 */ void* GetName /* function */;
  /* 0x0040 */ void* GetSize /* function */;
  /* 0x0048 */ void* GetTypeInfo /* function */;
  /* 0x0050 */ void* GetField /* function */;
  /* 0x0058 */ void* GetFieldNoCopy /* function */;
  /* 0x0060 */ void* PutField /* function */;
  /* 0x0068 */ void* PutFieldNoCopy /* function */;
  /* 0x0070 */ void* GetFieldNames /* function */;
  /* 0x0078 */ void* IsMatchingType /* function */;
  /* 0x0080 */ void* RecordCreate /* function */;
  /* 0x0088 */ void* RecordCreateCopy /* function */;
  /* 0x0090 */ void* RecordDestroy /* function */;
}; /* size: 0x0098 */

