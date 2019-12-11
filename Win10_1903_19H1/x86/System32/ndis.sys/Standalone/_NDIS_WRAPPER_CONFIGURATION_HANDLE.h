typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _RTL_QUERY_REGISTRY_TABLE
{
  /* 0x0000 */ void* QueryRoutine /* function */;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ wchar_t* Name;
  /* 0x000c */ void* EntryContext;
  /* 0x0010 */ unsigned long DefaultType;
  /* 0x0014 */ void* DefaultData;
  /* 0x0018 */ unsigned long DefaultLength;
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE; /* size: 0x001c */

typedef struct _NDIS_WRAPPER_CONFIGURATION_HANDLE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _RTL_QUERY_REGISTRY_TABLE ParametersQueryTable[2];
} NDIS_WRAPPER_CONFIGURATION_HANDLE, *PNDIS_WRAPPER_CONFIGURATION_HANDLE; /* size: 0x0044 */

