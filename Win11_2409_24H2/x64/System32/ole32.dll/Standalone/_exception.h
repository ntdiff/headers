typedef struct _exception
{
  /* 0x0000 */ int type;
  /* 0x0008 */ char* name;
  /* 0x0010 */ double arg1;
  /* 0x0018 */ double arg2;
  /* 0x0020 */ double retval;
} exception, *Pexception; /* size: 0x0028 */

