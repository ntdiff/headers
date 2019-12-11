typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> >
{
}; /* size: 0x0004 */

class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> >
{
  /* 0x0000 */ class wistd::__compressed_pair<Rtl::KString *,wistd::default_delete<Rtl::KString> > __ptr_;
}; /* size: 0x0004 */

struct NDIS_BIND_FILTER_DRIVER
{
  /* 0x000c */ struct _GUID Guid;
  /* 0x001c */ unsigned long FilterBindFlags;
  /* 0x0020 */ class wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString> > FilterClass;
  /* 0x0024 */ struct _NDIS_FILTER_DRIVER_BLOCK* RunningDriver;
}; /* size: 0x0028 */

