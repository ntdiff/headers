struct NDK_VERSION
{
  /* 0x0000 */ unsigned short Major;
  /* 0x0002 */ unsigned short Minor;
}; /* size: 0x0004 */

typedef struct _NDIS_OPEN_NDK_ADAPTER_PARAMETERS
{
  /* 0x0000 */ struct NDK_VERSION Version;
} NDIS_OPEN_NDK_ADAPTER_PARAMETERS, *PNDIS_OPEN_NDK_ADAPTER_PARAMETERS; /* size: 0x0004 */

