typedef struct _EVENT_PAYLOAD_PREDICATE
{
  /* 0x0000 */ unsigned short FieldIndex;
  /* 0x0002 */ unsigned short CompareOp;
  /* 0x0008 */ unsigned __int64 Value[2];
} EVENT_PAYLOAD_PREDICATE, *PEVENT_PAYLOAD_PREDICATE; /* size: 0x0018 */

