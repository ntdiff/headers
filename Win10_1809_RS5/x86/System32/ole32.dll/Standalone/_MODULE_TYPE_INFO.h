typedef struct _MODULE_TYPE_INFO
{
  /* 0x0000 */ unsigned short dataLength;
  /* 0x0002 */ unsigned short leaf;
  /* 0x0004 */ unsigned char data[1];
  /* 0x0005 */ char __PADDING__[1];
} MODULE_TYPE_INFO, *PMODULE_TYPE_INFO; /* size: 0x0006 */

