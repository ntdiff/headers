typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0008 */

class IMessageParamList
{
  /* 0x0000 */ class IMessageParam* _pFirst;
  /* 0x0008 */ class IMessageParam* _pLast;
}; /* size: 0x0010 */

struct ClassicSTAState
{
  union
  {
    /* 0x0000 */ BOOL s_bASTACallReentrancyGuardEnabledByDefault;
    /* 0x0000 */ class Microsoft::WRL::Wrappers::SRWLock lock;
  }; /* size: 0x0008 */
  /* 0x0008 */ class IMessageParamList aMessageParamLists[8];
  struct /* bitfield */
  {
    /* 0x0088 */ BOOL bASTACallReentrancyGuardExplicit : 1; /* bit position: 0 */
    /* 0x0088 */ BOOL bHasMessageFilter : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0089 */ char __PADDING__[7];
}; /* size: 0x0090 */

