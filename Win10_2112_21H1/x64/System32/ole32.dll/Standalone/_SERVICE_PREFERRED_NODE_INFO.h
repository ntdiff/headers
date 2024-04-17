typedef struct _SERVICE_PREFERRED_NODE_INFO
{
  /* 0x0000 */ unsigned short usPreferredNode;
  /* 0x0002 */ unsigned char fDelete;
  /* 0x0003 */ char __PADDING__[1];
} SERVICE_PREFERRED_NODE_INFO, *PSERVICE_PREFERRED_NODE_INFO; /* size: 0x0004 */

