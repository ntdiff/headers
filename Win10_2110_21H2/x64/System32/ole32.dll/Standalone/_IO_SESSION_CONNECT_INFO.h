typedef struct _IO_SESSION_CONNECT_INFO
{
  /* 0x0000 */ unsigned long SessionId;
  /* 0x0004 */ unsigned char LocalSession;
  /* 0x0005 */ char __PADDING__[3];
} IO_SESSION_CONNECT_INFO, *PIO_SESSION_CONNECT_INFO; /* size: 0x0008 */

