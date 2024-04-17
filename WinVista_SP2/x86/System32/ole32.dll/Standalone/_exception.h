typedef struct _exception
{
  /* 0x0000 */ int type;
  /* 0x0004 */ char* name;
  /* 0x0008 */ double arg1;
  /* 0x0010 */ double arg2;
  /* 0x0018 */ double retval;
} exception, *Pexception; /* size: 0x0020 */

