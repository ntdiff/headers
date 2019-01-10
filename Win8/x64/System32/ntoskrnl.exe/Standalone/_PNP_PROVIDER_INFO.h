typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PNP_PROVIDER_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned char ProviderType;
  /* 0x0011 */ unsigned char Satisfied;
  /* 0x0012 */ unsigned short Flags;
  union
  {
    union
    {
      /* 0x0018 */ struct _DEVICE_OBJECT* ProviderPdo;
      /* 0x0018 */ struct _PNP_RESERVED_PROVIDER_INFO* ProviderReservation;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} PNP_PROVIDER_INFO, *PPNP_PROVIDER_INFO; /* size: 0x0020 */

