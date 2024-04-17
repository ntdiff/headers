typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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
  /* 0x0010 */ unsigned long TotalNumberOfObjects;
  /* 0x0014 */ unsigned long TotalNumberOfHandles;
  /* 0x0018 */ unsigned long TotalPagedPoolUsage;
  /* 0x001c */ unsigned long TotalNonPagedPoolUsage;
  /* 0x0020 */ unsigned long TotalNamePoolUsage;
  /* 0x0024 */ unsigned long TotalHandleTableUsage;
  /* 0x0028 */ unsigned long HighWaterNumberOfObjects;
  /* 0x002c */ unsigned long HighWaterNumberOfHandles;
  /* 0x0030 */ unsigned long HighWaterPagedPoolUsage;
  /* 0x0034 */ unsigned long HighWaterNonPagedPoolUsage;
  /* 0x0038 */ unsigned long HighWaterNamePoolUsage;
  /* 0x003c */ unsigned long HighWaterHandleTableUsage;
  /* 0x0040 */ unsigned long InvalidAttributes;
  /* 0x0044 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0054 */ unsigned long ValidAccessMask;
  /* 0x0058 */ unsigned char SecurityRequired;
  /* 0x0059 */ unsigned char MaintainHandleCount;
  /* 0x005a */ unsigned char TypeIndex;
  /* 0x005b */ char ReservedByte;
  /* 0x005c */ unsigned long PoolType;
  /* 0x0060 */ unsigned long DefaultPagedPoolCharge;
  /* 0x0064 */ unsigned long DefaultNonPagedPoolCharge;
} OBJECT_TYPE_INFORMATION, *POBJECT_TYPE_INFORMATION; /* size: 0x0068 */

