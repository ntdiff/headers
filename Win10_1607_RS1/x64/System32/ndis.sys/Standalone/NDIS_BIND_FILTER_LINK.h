class KRef<NDIS_BIND_FILTER_DRIVER>
{
  /* 0x0000 */ class KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder* _p;
}; /* size: 0x0008 */

struct NDIS_BIND_FILTER_LINK
{
  /* 0x0068 */ class KRef<NDIS_BIND_FILTER_DRIVER> BindDriver;
  /* 0x0070 */ unsigned long FilterIndex;
  /* 0x0074 */ long __PADDING__[1];
}; /* size: 0x0078 */

