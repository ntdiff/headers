typedef enum _NT_IORING_SQ_FLAGS
{
  NT_IORING_SQ_FLAG_NONE = 0,
} NT_IORING_SQ_FLAGS, *PNT_IORING_SQ_FLAGS;

enum IORING_OP_CODE
{
  IORING_OP_NOP = 0,
  IORING_OP_READ = 1,
  IORING_OP_REGISTER_FILES = 2,
  IORING_OP_REGISTER_BUFFERS = 3,
  IORING_OP_CANCEL = 4,
  IORING_OP_WRITE = 5,
  IORING_OP_FLUSH = 6,
};

typedef enum _NT_IORING_SQE_FLAGS
{
  NT_IORING_SQE_FLAG_NONE = 0,
  NT_IORING_SQE_FLAG_DRAIN_PRECEDING_OPS = 1,
} NT_IORING_SQE_FLAGS, *PNT_IORING_SQE_FLAGS;

typedef enum _NT_IORING_OP_FLAGS
{
  NT_IORING_OP_FLAG_NONE = 0,
  NT_IORING_OP_FLAG_REGISTERED_FILE_0 = 1,
  NT_IORING_OP_FLAG_REGISTERED_FILE = 1,
  NT_IORING_OP_FLAG_REGISTERED_BUFFER_0 = 2,
  NT_IORING_OP_FLAG_REGISTERED_BUFFER = 2,
} NT_IORING_OP_FLAGS, *PNT_IORING_OP_FLAGS;

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

typedef struct _NT_IORING_OP_READ
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ unsigned int Padding;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
  /* 0x0010 */ union _NT_IORING_BUFFERREF Buffer;
  /* 0x0018 */ unsigned __int64 Offset;
  /* 0x0020 */ unsigned int Length;
  /* 0x0024 */ unsigned int Key;
} NT_IORING_OP_READ, *PNT_IORING_OP_READ; /* size: 0x0028 */

typedef enum _NT_IORING_REG_FILES_REQ_FLAGS
{
  NT_IORING_REG_FILES_REQ_FLAG_NONE = 0,
} NT_IORING_REG_FILES_REQ_FLAGS, *PNT_IORING_REG_FILES_REQ_FLAGS;

typedef enum _NT_IORING_REG_FILES_ADV_FLAGS
{
  NT_IORING_REG_FILES_ADV_FLAG_NONE = 0,
} NT_IORING_REG_FILES_ADV_FLAGS, *PNT_IORING_REG_FILES_ADV_FLAGS;

typedef struct _NT_IORING_REG_FILES_FLAGS
{
  /* 0x0000 */ enum _NT_IORING_REG_FILES_REQ_FLAGS Required;
  /* 0x0004 */ enum _NT_IORING_REG_FILES_ADV_FLAGS Advisory;
} NT_IORING_REG_FILES_FLAGS, *PNT_IORING_REG_FILES_FLAGS; /* size: 0x0008 */

typedef struct _NT_IORING_OP_REGISTER_FILES
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ struct _NT_IORING_REG_FILES_FLAGS Flags;
  /* 0x000c */ unsigned int Count;
  /* 0x0010 */ void** Handles;
} NT_IORING_OP_REGISTER_FILES, *PNT_IORING_OP_REGISTER_FILES; /* size: 0x0018 */

typedef enum _NT_IORING_REG_BUFFERS_REQ_FLAGS
{
  NT_IORING_REG_BUFFERS_REQ_FLAG_NONE = 0,
} NT_IORING_REG_BUFFERS_REQ_FLAGS, *PNT_IORING_REG_BUFFERS_REQ_FLAGS;

typedef enum _NT_IORING_REG_BUFFERS_ADV_FLAGS
{
  NT_IORING_REG_BUFFERS_ADV_FLAG_NONE = 0,
} NT_IORING_REG_BUFFERS_ADV_FLAGS, *PNT_IORING_REG_BUFFERS_ADV_FLAGS;

typedef struct _NT_IORING_REG_BUFFERS_FLAGS
{
  /* 0x0000 */ enum _NT_IORING_REG_BUFFERS_REQ_FLAGS Required;
  /* 0x0004 */ enum _NT_IORING_REG_BUFFERS_ADV_FLAGS Advisory;
} NT_IORING_REG_BUFFERS_FLAGS, *PNT_IORING_REG_BUFFERS_FLAGS; /* size: 0x0008 */

typedef struct _NT_IORING_OP_REGISTER_BUFFERS
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ struct _NT_IORING_REG_BUFFERS_FLAGS Flags;
  /* 0x000c */ unsigned int Count;
  /* 0x0010 */ struct IORING_BUFFER_INFO* Buffers;
} NT_IORING_OP_REGISTER_BUFFERS, *PNT_IORING_OP_REGISTER_BUFFERS; /* size: 0x0018 */

typedef struct _NT_IORING_OP_CANCEL
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
  /* 0x0010 */ unsigned __int64 CancelId;
} NT_IORING_OP_CANCEL, *PNT_IORING_OP_CANCEL; /* size: 0x0018 */

typedef enum _NT_WRITE_FLAGS
{
  NT_WRITE_FLAG_NONE = 0,
  NT_WRITE_FLAG_WRITE_THROUGH = 1,
} NT_WRITE_FLAGS, *PNT_WRITE_FLAGS;

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

typedef struct _NT_IORING_OP_FLUSH
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
} NT_IORING_OP_FLUSH, *PNT_IORING_OP_FLUSH; /* size: 0x0010 */

typedef struct _NT_IORING_OP_RESERVED
{
  /* 0x0000 */ unsigned __int64 Argument1;
  /* 0x0008 */ unsigned __int64 Argument2;
  /* 0x0010 */ unsigned __int64 Argument3;
  /* 0x0018 */ unsigned __int64 Argument4;
  /* 0x0020 */ unsigned __int64 Argument5;
  /* 0x0028 */ unsigned __int64 Argument6;
} NT_IORING_OP_RESERVED, *PNT_IORING_OP_RESERVED; /* size: 0x0030 */

typedef struct _NT_IORING_SQE
{
  /* 0x0000 */ enum IORING_OP_CODE OpCode;
  /* 0x0004 */ enum _NT_IORING_SQE_FLAGS Flags;
  union
  {
    /* 0x0008 */ unsigned __int64 UserData;
    /* 0x0008 */ unsigned __int64 PaddingUserDataForWow;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0010 */ struct _NT_IORING_OP_READ Read;
    /* 0x0010 */ struct _NT_IORING_OP_REGISTER_FILES RegisterFiles;
    /* 0x0010 */ struct _NT_IORING_OP_REGISTER_BUFFERS RegisterBuffers;
    /* 0x0010 */ struct _NT_IORING_OP_CANCEL Cancel;
    /* 0x0010 */ struct _NT_IORING_OP_WRITE Write;
    /* 0x0010 */ struct _NT_IORING_OP_FLUSH Flush;
    /* 0x0010 */ struct _NT_IORING_OP_RESERVED ReservedMaxSizePadding;
  }; /* size: 0x0030 */
} NT_IORING_SQE, *PNT_IORING_SQE; /* size: 0x0040 */

typedef struct _NT_IORING_SUBMISSION_QUEUE
{
  /* 0x0000 */ unsigned int Head;
  /* 0x0004 */ unsigned int Tail;
  /* 0x0008 */ enum _NT_IORING_SQ_FLAGS Flags;
  /* 0x0010 */ struct _NT_IORING_SQE Entries[1];
} NT_IORING_SUBMISSION_QUEUE, *PNT_IORING_SUBMISSION_QUEUE; /* size: 0x0050 */

