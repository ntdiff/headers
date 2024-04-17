typedef struct _IMAGEHLP_GET_TYPE_INFO_PARAMS
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NumIds;
  /* 0x0010 */ unsigned long* TypeIds;
  /* 0x0018 */ unsigned __int64 TagFilter;
  /* 0x0020 */ unsigned long NumReqs;
  /* 0x0028 */ enum _IMAGEHLP_SYMBOL_TYPE_INFO* ReqKinds;
  /* 0x0030 */ unsigned __int64* ReqOffsets;
  /* 0x0038 */ unsigned long* ReqSizes;
  /* 0x0040 */ unsigned __int64 ReqStride;
  /* 0x0048 */ unsigned __int64 BufferSize;
  /* 0x0050 */ void* Buffer;
  /* 0x0058 */ unsigned long EntriesMatched;
  /* 0x005c */ unsigned long EntriesFilled;
  /* 0x0060 */ unsigned __int64 TagsFound;
  /* 0x0068 */ unsigned __int64 AllReqsValid;
  /* 0x0070 */ unsigned long NumReqsValid;
  /* 0x0078 */ unsigned __int64* ReqsValid;
} IMAGEHLP_GET_TYPE_INFO_PARAMS, *PIMAGEHLP_GET_TYPE_INFO_PARAMS; /* size: 0x0080 */

