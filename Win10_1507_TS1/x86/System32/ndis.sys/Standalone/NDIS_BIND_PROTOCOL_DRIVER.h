class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> >
{
  /* 0x0000 */ struct Rtl::KString* _p;
}; /* size: 0x0004 */

struct NDIS_BIND_PROTOCOL_DRIVER
{
  /* 0x0010 */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > Name;
  /* 0x0014 */ unsigned long ProtocolBindFlags;
  /* 0x0018 */ struct _NDIS_PROTOCOL_BLOCK* RunningDriver;
}; /* size: 0x001c */

