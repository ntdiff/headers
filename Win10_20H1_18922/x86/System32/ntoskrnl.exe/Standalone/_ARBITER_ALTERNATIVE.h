typedef struct _ARBITER_ALTERNATIVE
{
  /* 0x0000 */ unsigned __int64 Minimum;
  /* 0x0008 */ unsigned __int64 Maximum;
  /* 0x0010 */ unsigned __int64 Length;
  /* 0x0018 */ unsigned __int64 Alignment;
  /* 0x0020 */ long Priority;
  /* 0x0024 */ unsigned long Flags;
  /* 0x0028 */ struct _IO_RESOURCE_DESCRIPTOR* Descriptor;
  /* 0x002c */ unsigned long Reserved[3];
} ARBITER_ALTERNATIVE, *PARBITER_ALTERNATIVE; /* size: 0x0038 */

