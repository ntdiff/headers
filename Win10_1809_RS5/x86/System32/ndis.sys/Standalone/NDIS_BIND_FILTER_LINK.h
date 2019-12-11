class KRef<NDIS_BIND_FILTER_DRIVER>
{
  /* 0x0000 */ class KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder* _p;
}; /* size: 0x0004 */

struct NDIS_BIND_FILTER_LINK
{
  /* 0x0034 */ class KRef<NDIS_BIND_FILTER_DRIVER> BindDriver;
  /* 0x0038 */ unsigned long FilterIndex;
}; /* size: 0x003c */

