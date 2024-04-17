typedef struct _CBuffer
{
  /* 0x0000 */ unsigned char* Cursor;
  /* 0x0004 */ unsigned long BytesRemaining;
} CBuffer, *PCBuffer; /* size: 0x0008 */

