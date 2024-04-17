typedef struct _heapinfo
{
  /* 0x0000 */ int* _pentry;
  /* 0x0004 */ unsigned int _size;
  /* 0x0008 */ int _useflag;
} heapinfo, *Pheapinfo; /* size: 0x000c */

