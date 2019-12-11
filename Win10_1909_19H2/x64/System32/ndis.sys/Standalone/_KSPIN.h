enum KSPIN_COMMUNICATION
{
  KSPIN_COMMUNICATION_NONE = 0,
  KSPIN_COMMUNICATION_SINK = 1,
  KSPIN_COMMUNICATION_SOURCE = 2,
  KSPIN_COMMUNICATION_BOTH = 3,
  KSPIN_COMMUNICATION_BRIDGE = 4,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct KSIDENTIFIER
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _GUID Set;
      /* 0x0010 */ unsigned long Id;
      /* 0x0014 */ unsigned long Flags;
    }; /* size: 0x0018 */
    struct
    {
      /* 0x0000 */ __int64 Alignment;
      /* 0x0008 */ long __PADDING__[4];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

struct KSPRIORITY
{
  /* 0x0000 */ unsigned long PriorityClass;
  /* 0x0004 */ unsigned long PrioritySubClass;
}; /* size: 0x0008 */

enum KSPIN_DATAFLOW
{
  KSPIN_DATAFLOW_IN = 1,
  KSPIN_DATAFLOW_OUT = 2,
};

enum KSSTATE
{
  KSSTATE_STOP = 0,
  KSSTATE_ACQUIRE = 1,
  KSSTATE_PAUSE = 2,
  KSSTATE_RUN = 3,
};

enum KSRESET
{
  KSRESET_BEGIN = 0,
  KSRESET_END = 1,
};

typedef struct _KSPIN
{
  /* 0x0000 */ const struct _KSPIN_DESCRIPTOR_EX* Descriptor;
  /* 0x0008 */ void* Bag;
  /* 0x0010 */ void* Context;
  /* 0x0018 */ unsigned long Id;
  /* 0x001c */ enum KSPIN_COMMUNICATION Communication;
  /* 0x0020 */ unsigned char ConnectionIsExternal;
  /* 0x0028 */ struct KSIDENTIFIER ConnectionInterface;
  /* 0x0040 */ struct KSIDENTIFIER ConnectionMedium;
  /* 0x0058 */ struct KSPRIORITY ConnectionPriority;
  /* 0x0060 */ union KSDATAFORMAT* ConnectionFormat;
  /* 0x0068 */ struct KSMULTIPLE_ITEM* AttributeList;
  /* 0x0070 */ unsigned long StreamHeaderSize;
  /* 0x0074 */ enum KSPIN_DATAFLOW DataFlow;
  /* 0x0078 */ enum KSSTATE DeviceState;
  /* 0x007c */ enum KSRESET ResetState;
  /* 0x0080 */ enum KSSTATE ClientState;
  /* 0x0084 */ long __PADDING__[1];
} KSPIN, *PKSPIN; /* size: 0x0088 */

