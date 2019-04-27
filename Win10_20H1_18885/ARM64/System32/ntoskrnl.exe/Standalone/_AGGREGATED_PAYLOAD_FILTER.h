typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _EVENT_PAYLOAD_PREDICATE
{
  /* 0x0000 */ unsigned short FieldIndex;
  /* 0x0002 */ unsigned short CompareOp;
  /* 0x0008 */ unsigned __int64 Value[2];
} EVENT_PAYLOAD_PREDICATE, *PEVENT_PAYLOAD_PREDICATE; /* size: 0x0018 */

typedef struct _AGGREGATED_PAYLOAD_FILTER
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short MagicValue : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short DescriptorVersion : 4; /* bit position: 12 */
  }; /* bitfield */
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned short PredicateCount;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ unsigned __int64 HashedEventIdBitmap;
  /* 0x0010 */ struct _GUID ProviderGuid;
  /* 0x0020 */ unsigned short EachEventTableOffset;
  /* 0x0022 */ unsigned short EachEventTableLength;
  /* 0x0024 */ unsigned short PayloadDecoderTableOffset;
  /* 0x0026 */ unsigned short PayloadDecoderTableLength;
  /* 0x0028 */ unsigned short EventFilterTableOffset;
  /* 0x002a */ unsigned short EventFilterTableLength;
  /* 0x002c */ unsigned short UNICODEStringTableOffset;
  /* 0x002e */ unsigned short UNICODEStringTableLength;
  /* 0x0030 */ unsigned short ANSIStringTableOffset;
  /* 0x0032 */ unsigned short ANSIStringTableLength;
  /* 0x0038 */ struct _EVENT_PAYLOAD_PREDICATE PredicateTable[1];
} AGGREGATED_PAYLOAD_FILTER, *PAGGREGATED_PAYLOAD_FILTER; /* size: 0x0050 */

