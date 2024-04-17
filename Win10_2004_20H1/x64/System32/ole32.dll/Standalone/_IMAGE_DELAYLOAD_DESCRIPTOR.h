typedef struct _IMAGE_DELAYLOAD_DESCRIPTOR
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long AllAttributes;
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RvaBased : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long ReservedAttributes : 31; /* bit position: 1 */
      }; /* bitfield */
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Attributes;
  /* 0x0004 */ unsigned long DllNameRVA;
  /* 0x0008 */ unsigned long ModuleHandleRVA;
  /* 0x000c */ unsigned long ImportAddressTableRVA;
  /* 0x0010 */ unsigned long ImportNameTableRVA;
  /* 0x0014 */ unsigned long BoundImportAddressTableRVA;
  /* 0x0018 */ unsigned long UnloadInformationTableRVA;
  /* 0x001c */ unsigned long TimeDateStamp;
} IMAGE_DELAYLOAD_DESCRIPTOR, *PIMAGE_DELAYLOAD_DESCRIPTOR; /* size: 0x0020 */

