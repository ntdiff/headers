struct IORING_REGISTERED_BUFFER
{
  /* 0x0000 */ unsigned int BufferIndex;
  /* 0x0004 */ unsigned int Offset;
}; /* size: 0x0008 */

typedef union _NT_IORING_BUFFERREF
{
  union
  {
    /* 0x0000 */ void* Address;
    /* 0x0000 */ struct IORING_REGISTERED_BUFFER FixedBuffer;
  }; /* size: 0x0008 */
} NT_IORING_BUFFERREF, *PNT_IORING_BUFFERREF; /* size: 0x0008 */

