typedef struct _iobuf
{
  /* 0x0000 */ char* _ptr;
  /* 0x0004 */ int _cnt;
  /* 0x0008 */ char* _base;
  /* 0x000c */ int _flag;
  /* 0x0010 */ int _file;
  /* 0x0014 */ int _charbuf;
  /* 0x0018 */ int _bufsiz;
  /* 0x001c */ char* _tmpfname;
} iobuf, *Piobuf; /* size: 0x0020 */

