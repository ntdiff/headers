typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _WWAN_REGISTER_ACTION
{
  WwanRegisterActionAutomatic = 0,
  WwanRegisterActionManual = 1,
  WwanRegisterActionMax = 2,
} WWAN_REGISTER_ACTION, *PWWAN_REGISTER_ACTION;

typedef struct _WWAN_SET_REGISTER_STATE
{
  /* 0x0000 */ wchar_t ProviderId[7];
  /* 0x0010 */ enum _WWAN_REGISTER_ACTION RegisterAction;
  /* 0x0014 */ unsigned long WwanDataClass;
} WWAN_SET_REGISTER_STATE, *PWWAN_SET_REGISTER_STATE; /* size: 0x0018 */

typedef struct _NDIS_WWAN_SET_REGISTER_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _WWAN_SET_REGISTER_STATE SetRegisterState;
} NDIS_WWAN_SET_REGISTER_STATE, *PNDIS_WWAN_SET_REGISTER_STATE; /* size: 0x001c */

