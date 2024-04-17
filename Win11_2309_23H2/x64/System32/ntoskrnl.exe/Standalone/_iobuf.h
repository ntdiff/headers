typedef struct _iobuf
{
  /* 0x0000 */ char* _ptr;
  /* 0x0008 */ int _cnt;
  /* 0x0010 */ char* _base;
  /* 0x0018 */ int _flag;
  /* 0x001c */ int _file;
  /* 0x0020 */ int _charbuf;
  /* 0x0024 */ int _bufsiz;
  /* 0x0028 */ char* _tmpfname;
} iobuf, *Piobuf; /* size: 0x0030 */

