typedef struct _GENERIC_MAPPING
{
  /* 0x0000 */ unsigned long GenericRead;
  /* 0x0004 */ unsigned long GenericWrite;
  /* 0x0008 */ unsigned long GenericExecute;
  /* 0x000c */ unsigned long GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_OBJECTTYPE_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long NumberOfObjects;
  /* 0x0008 */ unsigned long NumberOfHandles;
  /* 0x000c */ unsigned long TypeIndex;
  /* 0x0010 */ unsigned long InvalidAttributes;
  /* 0x0014 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0024 */ unsigned long ValidAccessMask;
  /* 0x0028 */ unsigned long PoolType;
  /* 0x002c */ unsigned char SecurityRequired;
  /* 0x002d */ unsigned char WaitableObject;
  /* 0x0030 */ struct _UNICODE_STRING TypeName;
} SYSTEM_OBJECTTYPE_INFORMATION, *PSYSTEM_OBJECTTYPE_INFORMATION; /* size: 0x0040 */

