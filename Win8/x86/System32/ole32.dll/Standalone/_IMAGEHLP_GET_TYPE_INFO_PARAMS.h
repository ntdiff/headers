typedef struct _IMAGEHLP_GET_TYPE_INFO_PARAMS
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NumIds;
  /* 0x000c */ unsigned long* TypeIds;
  /* 0x0010 */ unsigned __int64 TagFilter;
  /* 0x0018 */ unsigned long NumReqs;
  /* 0x001c */ enum _IMAGEHLP_SYMBOL_TYPE_INFO* ReqKinds;
  /* 0x0020 */ unsigned long* ReqOffsets;
  /* 0x0024 */ unsigned long* ReqSizes;
  /* 0x0028 */ unsigned long ReqStride;
  /* 0x002c */ unsigned long BufferSize;
  /* 0x0030 */ void* Buffer;
  /* 0x0034 */ unsigned long EntriesMatched;
  /* 0x0038 */ unsigned long EntriesFilled;
  /* 0x0040 */ unsigned __int64 TagsFound;
  /* 0x0048 */ unsigned __int64 AllReqsValid;
  /* 0x0050 */ unsigned long NumReqsValid;
  /* 0x0054 */ unsigned __int64* ReqsValid;
} IMAGEHLP_GET_TYPE_INFO_PARAMS, *PIMAGEHLP_GET_TYPE_INFO_PARAMS; /* size: 0x0058 */

