typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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
  /* 0x0008 */ unsigned char* FilterModuleNameBuffer;
  /* 0x0010 */ unsigned long FilterModuleNameBufferLength;
  /* 0x0018 */ struct _NDIS_RESTART_ATTRIBUTES* RestartAttributes;
  /* 0x0020 */ unsigned long BoundIfIndex;
  /* 0x0028 */ union _NET_LUID_LH BoundIfNetluid;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ long __PADDING__[1];
} NDIS_PROTOCOL_RESTART_PARAMETERS, *PNDIS_PROTOCOL_RESTART_PARAMETERS; /* size: 0x0038 */

