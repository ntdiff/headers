typedef struct _ACTION_HEADER
{
  /* 0x0000 */ unsigned long transport_id;
  /* 0x0004 */ unsigned short action_code;
  /* 0x0006 */ unsigned short reserved;
} ACTION_HEADER, *PACTION_HEADER; /* size: 0x0008 */

