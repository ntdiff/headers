class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> >
{
  /* 0x0000 */ struct Rtl::KString* _p;
}; /* size: 0x0008 */

struct NDIS_BIND_PROTOCOL_DRIVER
{
  /* 0x0020 */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > Name;
  /* 0x0028 */ unsigned long ProtocolBindFlags;
  /* 0x0030 */ struct _NDIS_PROTOCOL_BLOCK* RunningDriver;
}; /* size: 0x0038 */

