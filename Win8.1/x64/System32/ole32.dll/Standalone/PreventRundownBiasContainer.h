typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

class PreventRundownBiasContainer
{
  /* 0x0010 */ struct _LIST_ENTRY _listBiases;
}; /* size: 0x0020 */

