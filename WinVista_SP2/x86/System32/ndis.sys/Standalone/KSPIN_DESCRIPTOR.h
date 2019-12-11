enum KSPIN_DATAFLOW
{
  KSPIN_DATAFLOW_IN = 1,
  KSPIN_DATAFLOW_OUT = 2,
};

enum KSPIN_COMMUNICATION
{
  KSPIN_COMMUNICATION_NONE = 0,
  KSPIN_COMMUNICATION_SINK = 1,
  KSPIN_COMMUNICATION_SOURCE = 2,
  KSPIN_COMMUNICATION_BOTH = 3,
  KSPIN_COMMUNICATION_BRIDGE = 4,
};

struct KSPIN_DESCRIPTOR
{
  /* 0x0000 */ unsigned long InterfacesCount;
  /* 0x0004 */ const struct KSIDENTIFIER* Interfaces;
  /* 0x0008 */ unsigned long MediumsCount;
  /* 0x000c */ const struct KSIDENTIFIER* Mediums;
  /* 0x0010 */ unsigned long DataRangesCount;
  /* 0x0014 */ union KSDATAFORMAT* const* DataRanges;
  /* 0x0018 */ enum KSPIN_DATAFLOW DataFlow;
  /* 0x001c */ enum KSPIN_COMMUNICATION Communication;
  /* 0x0020 */ const struct _GUID* Category;
  /* 0x0024 */ const struct _GUID* Name;
  union
  {
    /* 0x0028 */ __int64 Reserved;
    struct
    {
      /* 0x0028 */ unsigned long ConstrainedDataRangesCount;
      /* 0x002c */ union KSDATAFORMAT** ConstrainedDataRanges;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0030 */

