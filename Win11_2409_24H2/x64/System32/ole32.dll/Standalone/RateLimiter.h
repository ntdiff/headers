class std::chrono::duration<__int64,std::ratio<1,1> >
{
  /* 0x0000 */ __int64 _MyRep;
}; /* size: 0x0008 */

class std::chrono::duration<__int64,std::ratio<1,1000000000> >
{
  /* 0x0000 */ __int64 _MyRep;
}; /* size: 0x0008 */

class std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000> > >
{
  /* 0x0000 */ class std::chrono::duration<__int64,std::ratio<1,1000000000> > _MyDur;
}; /* size: 0x0008 */

struct RateLimiter::CurrentSliceData
{
  /* 0x0000 */ class std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000> > > _currentSliceEnd;
  /* 0x0008 */ unsigned long _currentSliceRequestCount;
  /* 0x0010 */ class std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000> > > _currentRestrictionEnd;
}; /* size: 0x0018 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class wil::locked_struct<RateLimiter::CurrentSliceData,wil::details::Feature_AlwaysEnabled>
{
  /* 0x0000 */ struct RateLimiter::CurrentSliceData m_data;
  /* 0x0018 */ struct _RTL_CRITICAL_SECTION m_cs;
}; /* size: 0x0040 */

class RateLimiter
{
  /* 0x0000 */ const unsigned long _maxRequestsPerSlice;
  /* 0x0008 */ const class std::chrono::duration<__int64,std::ratio<1,1> > _sliceDuration;
  /* 0x0010 */ const class std::chrono::duration<__int64,std::ratio<1,1> > _restrictionDuration;
  /* 0x0018 */ class wil::locked_struct<RateLimiter::CurrentSliceData,wil::details::Feature_AlwaysEnabled> _currentSliceData;
}; /* size: 0x0058 */

