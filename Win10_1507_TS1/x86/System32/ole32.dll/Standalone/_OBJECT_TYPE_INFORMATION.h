typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _GENERIC_MAPPING
{
  /* 0x0000 */ unsigned long GenericRead;
  /* 0x0004 */ unsigned long GenericWrite;
  /* 0x0008 */ unsigned long GenericExecute;
  /* 0x000c */ unsigned long GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING; /* size: 0x0010 */

typedef struct _OBJECT_TYPE_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING TypeName;
  /* 0x0008 */ unsigned long TotalNumberOfObjects;
  /* 0x000c */ unsigned long TotalNumberOfHandles;
  /* 0x0010 */ unsigned long TotalPagedPoolUsage;
  /* 0x0014 */ unsigned long TotalNonPagedPoolUsage;
  /* 0x0018 */ unsigned long TotalNamePoolUsage;
  /* 0x001c */ unsigned long TotalHandleTableUsage;
  /* 0x0020 */ unsigned long HighWaterNumberOfObjects;
  /* 0x0024 */ unsigned long HighWaterNumberOfHandles;
  /* 0x0028 */ unsigned long HighWaterPagedPoolUsage;
  /* 0x002c */ unsigned long HighWaterNonPagedPoolUsage;
  /* 0x0030 */ unsigned long HighWaterNamePoolUsage;
  /* 0x0034 */ unsigned long HighWaterHandleTableUsage;
  /* 0x0038 */ unsigned long InvalidAttributes;
  /* 0x003c */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x004c */ unsigned long ValidAccessMask;
  /* 0x0050 */ unsigned char SecurityRequired;
  /* 0x0051 */ unsigned char MaintainHandleCount;
  /* 0x0052 */ unsigned char TypeIndex;
  /* 0x0053 */ char ReservedByte;
  /* 0x0054 */ unsigned long PoolType;
  /* 0x0058 */ unsigned long DefaultPagedPoolCharge;
  /* 0x005c */ unsigned long DefaultNonPagedPoolCharge;
} OBJECT_TYPE_INFORMATION, *POBJECT_TYPE_INFORMATION; /* size: 0x0060 */

