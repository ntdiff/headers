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

typedef struct _NT_IORING_OP_CANCEL
{
  /* 0x0000 */ enum _NT_IORING_OP_FLAGS CommonOpFlags;
  /* 0x0008 */ union _NT_IORING_HANDLEREF File;
  /* 0x0010 */ unsigned __int64 CancelId;
} NT_IORING_OP_CANCEL, *PNT_IORING_OP_CANCEL; /* size: 0x0018 */

