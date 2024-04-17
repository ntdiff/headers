typedef struct _SCOPE_TABLE_AMD64
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct
  {
    /* 0x0004 */ unsigned long BeginAddress;
    /* 0x0008 */ unsigned long EndAddress;
    /* 0x000c */ unsigned long HandlerAddress;
    /* 0x0010 */ unsigned long JumpTarget;
  } /* size: 0x0010 */ ScopeRecord[1];
} SCOPE_TABLE_AMD64, *PSCOPE_TABLE_AMD64; /* size: 0x0014 */

