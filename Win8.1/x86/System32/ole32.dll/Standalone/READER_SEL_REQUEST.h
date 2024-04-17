enum READER_SEL_REQUEST_MATCH_TYPE
{
  RSR_MATCH_TYPE_READER_AND_CONTAINER = 1,
  RSR_MATCH_TYPE_SERIAL_NUMBER = 2,
  RSR_MATCH_TYPE_ALL_CARDS = 3,
};

struct READER_SEL_REQUEST
{
  /* 0x0000 */ unsigned long dwShareMode;
  /* 0x0004 */ unsigned long dwPreferredProtocols;
  /* 0x0008 */ enum READER_SEL_REQUEST_MATCH_TYPE MatchType;
  union
  {
    struct
    {
      /* 0x000c */ unsigned long cbReaderNameOffset;
      /* 0x0010 */ unsigned long cchReaderNameLength;
      /* 0x0014 */ unsigned long cbContainerNameOffset;
      /* 0x0018 */ unsigned long cchContainerNameLength;
      /* 0x001c */ unsigned long dwDesiredCardModuleVersion;
      /* 0x0020 */ unsigned long dwCspFlags;
    } /* size: 0x0018 */ ReaderAndContainerParameter;
    struct
    {
      struct
      {
        /* 0x000c */ unsigned long cbSerialNumberOffset;
        /* 0x0010 */ unsigned long cbSerialNumberLength;
        /* 0x0014 */ unsigned long dwDesiredCardModuleVersion;
      } /* size: 0x000c */ SerialNumberParameter;
      /* 0x0018 */ long __PADDING__[3];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0024 */

