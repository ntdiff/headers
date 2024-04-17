typedef union _NDIS_RW_LOCK_REFCOUNT
{
  union
  {
    /* 0x0000 */ unsigned long RefCount;
    /* 0x0000 */ unsigned char cacheLine[16];
  }; /* size: 0x0010 */
} NDIS_RW_LOCK_REFCOUNT, *PNDIS_RW_LOCK_REFCOUNT; /* size: 0x0010 */

typedef struct _NDIS_RW_LOCK
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 SpinLock;
      /* 0x0008 */ void* Context;
    }; /* size: 0x0010 */
    /* 0x0000 */ unsigned char Reserved[16];
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ union _NDIS_RW_LOCK_REFCOUNT RefCount[64];
    /* 0x0010 */ unsigned long RefCountEx[256];
    struct
    {
      /* 0x0010 */ unsigned __int64 RefCountLock;
      /* 0x0018 */ volatile unsigned long SharedRefCount;
      /* 0x001c */ volatile unsigned char WriterWaiting;
      /* 0x001d */ char __PADDING__[1011];
    }; /* size: 0x0400 */
  }; /* size: 0x0400 */
} NDIS_RW_LOCK, *PNDIS_RW_LOCK; /* size: 0x0410 */

