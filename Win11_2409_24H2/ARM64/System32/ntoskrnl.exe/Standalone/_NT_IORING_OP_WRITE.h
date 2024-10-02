typedef enum _NT_IORING_OP_FLAGS
{
  NT_IORING_OP_FLAG_NONE = 0,
  NT_IORING_OP_FLAG_REGISTERED_FILE_0 = 1,
  NT_IORING_OP_FLAG_REGISTERED_FILE = 1,
  NT_IORING_OP_FLAG_REGISTERED_BUFFER_0 = 2,
  NT_IORING_OP_FLAG_REGISTERED_BUFFER = 2,
} NT_IORING_OP_FLAGS, *PNT_IORING_OP_FLAGS;

typedef enum _NT_WRITE_FLAGS
{
  NT_WRITE_FLAG_NONE = 0,
  NT_WRITE_FLAG_WRITE_THROUGH = 1,
} NT_WRITE_FLAGS, *PNT_WRITE_FLAGS;

typedef union _NT_IORING_HANDLEREF
{
  union
  {
    /* 0x0000 */ void* Handle;
    /* 0x0000 */ unsigned int HandleIndex;
  }; /* size: 0x0008 */
} NT_IORING_HANDLEREF, *PNT_IORING_HANDLEREF; /* size: 0x0008 */

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

typedef struct _NT_IORING_OP_WRITE
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ enum _NT_WRITE_FLAGS Flags;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
  /* 0x0010 */ union _NT_IORING_BUFFERREF Buffer;
  /* 0x0018 */ unsigned __int64 Offset;
  /* 0x0020 */ unsigned int Length;
  /* 0x0024 */ unsigned int Key;
} NT_IORING_OP_WRITE, *PNT_IORING_OP_WRITE; /* size: 0x0028 */

