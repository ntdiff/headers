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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_FILTER_INTERFACE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long FilterType;
  /* 0x000c */ unsigned long FilterRunType;
  /* 0x0010 */ unsigned long IfIndex;
  /* 0x0018 */ union _NET_LUID_LH NetLuid;
  /* 0x0020 */ struct _UNICODE_STRING FilterClass;
  /* 0x0028 */ struct _UNICODE_STRING FilterInstanceName;
} NDIS_FILTER_INTERFACE, *PNDIS_FILTER_INTERFACE; /* size: 0x0030 */

typedef struct _NDIS_ENUM_FILTERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NumberOfFilters;
  /* 0x000c */ unsigned long OffsetFirstFilter;
  /* 0x0010 */ struct _NDIS_FILTER_INTERFACE Filter[1];
} NDIS_ENUM_FILTERS, *PNDIS_ENUM_FILTERS; /* size: 0x0040 */

