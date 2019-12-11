typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> >
{
  /* 0x0000 */ struct Rtl::KString* _p;
}; /* size: 0x0008 */

struct NDIS_BIND_FILTER_DRIVER
{
  /* 0x0020 */ struct _GUID Guid;
  /* 0x0030 */ unsigned long FilterBindFlags;
  /* 0x0038 */ class KPtr<Rtl::KString,KDeletePtr<Rtl::KString> > FilterClass;
  /* 0x0040 */ struct _NDIS_FILTER_DRIVER_BLOCK* RunningDriver;
}; /* size: 0x0048 */

