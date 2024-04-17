struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SUUIDHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ struct _GUID key;
}; /* size: 0x0018 */

enum RegistrationState
{
  NOT_REGISTERED = 0,
  PENDING_REGISTRATION = 1,
  FULLY_REGISTERED = 2,
};

typedef struct _RTL_CONDITION_VARIABLE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WakeCount : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE; /* size: 0x0004 */

class COleConditionVariable
{
  /* 0x0000 */ struct _RTL_CONDITION_VARIABLE _cv;
}; /* size: 0x0004 */

struct tagRIFEntry
{
  /* 0x0000 */ struct SUUIDHashNode HashNode;
  /* 0x0018 */ struct _GUID iidCounterpart;
  /* 0x0028 */ struct _GUID psclsid;
  /* 0x0038 */ unsigned long dwFlags;
  /* 0x003c */ struct tagRIFEntry* pBase;
  /* 0x0040 */ unsigned long cSrvRefs;
  /* 0x0044 */ enum RegistrationState srvRegistrationState;
  /* 0x0048 */ class COleConditionVariable ConditionSrvInterface;
  /* 0x004c */ struct _RPC_SERVER_INTERFACE* pSrvInterface;
  /* 0x0050 */ unsigned long cCliRefs;
  /* 0x0054 */ struct _RPC_CLIENT_INTERFACE* pCliInterface;
}; /* size: 0x0058 */

