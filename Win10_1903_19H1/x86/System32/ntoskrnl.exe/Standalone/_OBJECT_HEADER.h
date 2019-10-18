typedef struct _EX_PUSH_LOCK
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
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _QUAD
{
  union
  {
    /* 0x0000 */ __int64 UseThisFieldToCopy;
    /* 0x0000 */ double DoNotUseThisField;
  }; /* size: 0x0008 */
} QUAD, *PQUAD; /* size: 0x0008 */

typedef struct _OBJECT_HEADER
{
  /* 0x0000 */ long PointerCount;
  union
  {
    /* 0x0004 */ long HandleCount;
    /* 0x0004 */ void* NextToFree;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x000c */ unsigned char TypeIndex;
  union
  {
    /* 0x000d */ unsigned char TraceFlags;
    struct /* bitfield */
    {
      /* 0x000d */ unsigned char DbgRefTrace : 1; /* bit position: 0 */
      /* 0x000d */ unsigned char DbgTracePermanent : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000e */ unsigned char InfoMask;
  union
  {
    /* 0x000f */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x000f */ unsigned char NewObject : 1; /* bit position: 0 */
      /* 0x000f */ unsigned char KernelObject : 1; /* bit position: 1 */
      /* 0x000f */ unsigned char KernelOnlyAccess : 1; /* bit position: 2 */
      /* 0x000f */ unsigned char ExclusiveObject : 1; /* bit position: 3 */
      /* 0x000f */ unsigned char PermanentObject : 1; /* bit position: 4 */
      /* 0x000f */ unsigned char DefaultSecurityQuota : 1; /* bit position: 5 */
      /* 0x000f */ unsigned char SingleHandleEntry : 1; /* bit position: 6 */
      /* 0x000f */ unsigned char DeletedInline : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  union
  {
    /* 0x0010 */ struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;
    /* 0x0010 */ void* QuotaBlockCharged;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* SecurityDescriptor;
  /* 0x0018 */ struct _QUAD Body;
} OBJECT_HEADER, *POBJECT_HEADER; /* size: 0x0020 */

