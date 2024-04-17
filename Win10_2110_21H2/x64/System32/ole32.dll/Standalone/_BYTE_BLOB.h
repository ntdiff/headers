typedef struct _BYTE_BLOB
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0004 */ unsigned char abData[1];
  /* 0x0005 */ char __PADDING__[3];
} BYTE_BLOB, *PBYTE_BLOB; /* size: 0x0008 */

