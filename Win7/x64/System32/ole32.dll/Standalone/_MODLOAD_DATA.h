typedef struct _MODLOAD_DATA
{
  /* 0x0000 */ unsigned long ssize;
  /* 0x0004 */ unsigned long ssig;
  /* 0x0008 */ void* data;
  /* 0x0010 */ unsigned long size;
  /* 0x0014 */ unsigned long flags;
} MODLOAD_DATA, *PMODLOAD_DATA; /* size: 0x0018 */

