typedef struct _REFERENCE_EX
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ unsigned char ZeroBased;
  /* 0x0010 */ struct NDIS_REFCOUNT_HANDLE__* RefCountTracker;
} REFERENCE_EX, *PREFERENCE_EX; /* size: 0x0018 */

