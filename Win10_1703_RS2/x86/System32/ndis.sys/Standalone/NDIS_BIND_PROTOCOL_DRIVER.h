class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0004 */

struct NDIS_BIND_PROTOCOL_DRIVER
{
  /* 0x000c */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > Name;
  /* 0x0010 */ unsigned long ProtocolBindFlags;
  /* 0x0014 */ struct _NDIS_PROTOCOL_BLOCK* RunningDriver;
}; /* size: 0x0018 */

