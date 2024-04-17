typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _OBJECT_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Attributes;
  /* 0x0004 */ unsigned long GrantedAccess;
  /* 0x0008 */ unsigned long HandleCount;
  /* 0x000c */ unsigned long PointerCount;
  /* 0x0010 */ unsigned long PagedPoolCharge;
  /* 0x0014 */ unsigned long NonPagedPoolCharge;
  /* 0x0018 */ unsigned long Reserved[3];
  /* 0x0024 */ unsigned long NameInfoSize;
  /* 0x0028 */ unsigned long TypeInfoSize;
  /* 0x002c */ unsigned long SecurityDescriptorSize;
  /* 0x0030 */ union _LARGE_INTEGER CreationTime;
} OBJECT_BASIC_INFORMATION, *POBJECT_BASIC_INFORMATION; /* size: 0x0038 */

