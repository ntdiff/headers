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

typedef struct _NT_IORING_OP_FLUSH
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
} NT_IORING_OP_FLUSH, *PNT_IORING_OP_FLUSH; /* size: 0x0010 */

