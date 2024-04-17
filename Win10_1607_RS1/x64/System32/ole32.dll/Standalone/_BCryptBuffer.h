typedef struct _BCryptBuffer
{
  /* 0x0000 */ unsigned long cbBuffer;
  /* 0x0004 */ unsigned long BufferType;
  /* 0x0008 */ void* pvBuffer;
} BCryptBuffer, *PBCryptBuffer; /* size: 0x0010 */

