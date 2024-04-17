typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0004 */

class IMessageParamList
{
  /* 0x0000 */ class IMessageParam* _pFirst;
  /* 0x0004 */ class IMessageParam* _pLast;
}; /* size: 0x0008 */

struct ClassicSTAState
{
  union
  {
    /* 0x0000 */ BOOL s_bASTACallReentrancyGuardEnabledByDefault;
    /* 0x0000 */ class Microsoft::WRL::Wrappers::SRWLock lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ class IMessageParamList aMessageParamLists[8];
  struct /* bitfield */
  {
    /* 0x0044 */ BOOL bASTACallReentrancyGuardExplicit : 1; /* bit position: 0 */
    /* 0x0044 */ BOOL bHasMessageFilter : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0045 */ char __PADDING__[3];
}; /* size: 0x0048 */

