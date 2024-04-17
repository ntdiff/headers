typedef struct _heapinfo
{
  /* 0x0000 */ int* _pentry;
  /* 0x0008 */ unsigned __int64 _size;
  /* 0x0010 */ int _useflag;
  /* 0x0014 */ long __PADDING__[1];
} heapinfo, *Pheapinfo; /* size: 0x0018 */

