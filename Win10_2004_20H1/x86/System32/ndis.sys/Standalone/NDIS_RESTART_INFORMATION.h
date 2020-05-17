typedef struct _NDIS_RESTART_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_RESTART_ATTRIBUTES* Next;
  /* 0x0004 */ unsigned long Oid;
  /* 0x0008 */ unsigned long DataLength;
  /* 0x0010 */ unsigned char Data[1];
  /* 0x0011 */ char __PADDING__[7];
} NDIS_RESTART_ATTRIBUTES, *PNDIS_RESTART_ATTRIBUTES; /* size: 0x0018 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NET_IF_ACCESS_TYPE
{
  NET_IF_ACCESS_LOOPBACK = 1,
  NET_IF_ACCESS_BROADCAST = 2,
  NET_IF_ACCESS_POINT_TO_POINT = 3,
  NET_IF_ACCESS_POINT_TO_MULTI_POINT = 4,
  NET_IF_ACCESS_MAXIMUM = 5,
} NET_IF_ACCESS_TYPE, *PNET_IF_ACCESS_TYPE;

typedef enum _NET_IF_CONNECTION_TYPE
{
  NET_IF_CONNECTION_DEDICATED = 1,
  NET_IF_CONNECTION_PASSIVE = 2,
  NET_IF_CONNECTION_DEMAND = 3,
  NET_IF_CONNECTION_MAXIMUM = 4,
} NET_IF_CONNECTION_TYPE, *PNET_IF_CONNECTION_TYPE;

typedef struct _NDIS_RESTART_GENERAL_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long MtuSize;
  /* 0x0008 */ unsigned __int64 MaxXmitLinkSpeed;
  /* 0x0010 */ unsigned __int64 MaxRcvLinkSpeed;
  /* 0x0018 */ unsigned long LookaheadSize;
  /* 0x001c */ unsigned long MacOptions;
  /* 0x0020 */ unsigned long SupportedPacketFilters;
  /* 0x0024 */ unsigned long MaxMulticastListSize;
  /* 0x0028 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES* RecvScaleCapabilities;
  /* 0x002c */ enum _NET_IF_ACCESS_TYPE AccessType;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ enum _NET_IF_CONNECTION_TYPE ConnectionType;
  /* 0x0038 */ unsigned long SupportedStatistics;
  /* 0x003c */ unsigned long DataBackFillSize;
  /* 0x0040 */ unsigned long ContextBackFillSize;
  /* 0x0044 */ unsigned long* SupportedOidList;
  /* 0x0048 */ unsigned long SupportedOidListLength;
  /* 0x004c */ unsigned long MaxLookaheadSizeAccessed;
} NDIS_RESTART_GENERAL_ATTRIBUTES, *PNDIS_RESTART_GENERAL_ATTRIBUTES; /* size: 0x0050 */

typedef struct _NDIS_RECEIVE_SCALE_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long CapabilitiesFlags;
  /* 0x0008 */ unsigned long NumberOfInterruptMessages;
  /* 0x000c */ unsigned long NumberOfReceiveQueues;
  /* 0x0010 */ unsigned short NumberOfIndirectionTableEntries;
  /* 0x0012 */ char __PADDING__[2];
} NDIS_RECEIVE_SCALE_CAPABILITIES, *PNDIS_RECEIVE_SCALE_CAPABILITIES; /* size: 0x0014 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef struct _NDIS_PROTOCOL_RESTART_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned char* FilterModuleNameBuffer;
  /* 0x0008 */ unsigned long FilterModuleNameBufferLength;
  /* 0x000c */ struct _NDIS_RESTART_ATTRIBUTES* RestartAttributes;
  /* 0x0010 */ unsigned long BoundIfIndex;
  /* 0x0018 */ union _NET_LUID_LH BoundIfNetluid;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ long __PADDING__[1];
} NDIS_PROTOCOL_RESTART_PARAMETERS, *PNDIS_PROTOCOL_RESTART_PARAMETERS; /* size: 0x0028 */

class Rtl::KArray<unsigned char,1>
{
  /* 0x0000 */ unsigned long m_bufferSize;
  /* 0x0004 */ unsigned long m_numElements;
  /* 0x0008 */ unsigned char* _p;
}; /* size: 0x000c */

struct NDIS_RESTART_INFORMATION
{
  union
  {
    /* 0x0000 */ struct _NDIS_RESTART_ATTRIBUTES Attributes;
    struct
    {
      /* 0x0000 */ unsigned char Padding[16];
      /* 0x0010 */ struct _NDIS_RESTART_GENERAL_ATTRIBUTES General;
      /* 0x0060 */ struct _NDIS_RECEIVE_SCALE_CAPABILITIES RssCaps;
      /* 0x0078 */ struct _NDIS_PROTOCOL_RESTART_PARAMETERS ProtocolParameters;
      /* 0x00a0 */ unsigned long MiniportMacOptionsToPreserve;
      /* 0x00a4 */ class Rtl::KArray<unsigned char,1> FilterInstanceBuffer;
    }; /* size: 0x00ac */
  }; /* size: 0x00ac */
}; /* size: 0x00b0 */

