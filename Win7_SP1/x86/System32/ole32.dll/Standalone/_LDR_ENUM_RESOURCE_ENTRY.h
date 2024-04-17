typedef struct _LDR_ENUM_RESOURCE_ENTRY
{
  /* 0x0000 */ union
  {
    union
    {
      /* 0x0000 */ unsigned long NameOrId;
      /* 0x0000 */ struct _IMAGE_RESOURCE_DIRECTORY_STRING* Name;
      struct
      {
        /* 0x0000 */ unsigned short Id;
        /* 0x0002 */ unsigned short NameIsPresent;
      }; /* size: 0x0004 */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Path[3];
  /* 0x000c */ void* Data;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long Reserved;
} LDR_ENUM_RESOURCE_ENTRY, *PLDR_ENUM_RESOURCE_ENTRY; /* size: 0x0018 */

