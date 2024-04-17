class KRef<NDIS_BIND_PROTOCOL_DRIVER>
{
  /* 0x0000 */ class KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder* _p;
}; /* size: 0x0008 */

struct NDIS_BIND_PROTOCOL_LINK
{
  /* 0x0050 */ class KRef<NDIS_BIND_PROTOCOL_DRIVER> BindDriver;
}; /* size: 0x0058 */

