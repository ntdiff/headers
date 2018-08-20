typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PNP_PROVIDER_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned char ProviderType;
  /* 0x0009 */ unsigned char Satisfied;
  /* 0x000a */ unsigned short Flags;
  union // _TAG_UNNAMED_87
  {
    union
    {
      /* 0x000c */ struct _DEVICE_OBJECT* ProviderPdo;
      /* 0x000c */ struct _PNP_RESERVED_PROVIDER_INFO* ProviderReservation;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} PNP_PROVIDER_INFO, *PPNP_PROVIDER_INFO; /* size: 0x0010 */

