typedef enum _COPYFILE2_MESSAGE_TYPE
{
  COPYFILE2_CALLBACK_NONE = 0,
  COPYFILE2_CALLBACK_CHUNK_STARTED = 1,
  COPYFILE2_CALLBACK_CHUNK_FINISHED = 2,
  COPYFILE2_CALLBACK_STREAM_STARTED = 3,
  COPYFILE2_CALLBACK_STREAM_FINISHED = 4,
  COPYFILE2_CALLBACK_POLL_CONTINUE = 5,
  COPYFILE2_CALLBACK_ERROR = 6,
  COPYFILE2_CALLBACK_MAX = 7,
} COPYFILE2_MESSAGE_TYPE, *PCOPYFILE2_MESSAGE_TYPE;

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef enum _COPYFILE2_COPY_PHASE
{
  COPYFILE2_PHASE_NONE = 0,
  COPYFILE2_PHASE_PREPARE_SOURCE = 1,
  COPYFILE2_PHASE_PREPARE_DEST = 2,
  COPYFILE2_PHASE_READ_SOURCE = 3,
  COPYFILE2_PHASE_WRITE_DESTINATION = 4,
  COPYFILE2_PHASE_SERVER_COPY = 5,
  COPYFILE2_PHASE_NAMEGRAFT_COPY = 6,
  COPYFILE2_PHASE_MAX = 7,
} COPYFILE2_COPY_PHASE, *PCOPYFILE2_COPY_PHASE;

struct COPYFILE2_MESSAGE
{
  /* 0x0000 */ enum _COPYFILE2_MESSAGE_TYPE Type;
  /* 0x0004 */ unsigned long dwPadding;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long dwStreamNumber;
        /* 0x000c */ unsigned long dwReserved;
        /* 0x0010 */ void* hSourceFile;
        /* 0x0018 */ void* hDestinationFile;
        /* 0x0020 */ union _ULARGE_INTEGER uliChunkNumber;
        /* 0x0028 */ union _ULARGE_INTEGER uliChunkSize;
        /* 0x0030 */ union _ULARGE_INTEGER uliStreamSize;
        /* 0x0038 */ union _ULARGE_INTEGER uliTotalFileSize;
      } /* size: 0x0038 */ ChunkStarted;
      struct
      {
        /* 0x0008 */ unsigned long dwStreamNumber;
        /* 0x000c */ unsigned long dwFlags;
        /* 0x0010 */ void* hSourceFile;
        /* 0x0018 */ void* hDestinationFile;
        /* 0x0020 */ union _ULARGE_INTEGER uliChunkNumber;
        /* 0x0028 */ union _ULARGE_INTEGER uliChunkSize;
        /* 0x0030 */ union _ULARGE_INTEGER uliStreamSize;
        /* 0x0038 */ union _ULARGE_INTEGER uliStreamBytesTransferred;
        /* 0x0040 */ union _ULARGE_INTEGER uliTotalFileSize;
        /* 0x0048 */ union _ULARGE_INTEGER uliTotalBytesTransferred;
      } /* size: 0x0048 */ ChunkFinished;
      struct
      {
        /* 0x0008 */ unsigned long dwStreamNumber;
        /* 0x000c */ unsigned long dwReserved;
        /* 0x0010 */ void* hSourceFile;
        /* 0x0018 */ void* hDestinationFile;
        /* 0x0020 */ union _ULARGE_INTEGER uliStreamSize;
        /* 0x0028 */ union _ULARGE_INTEGER uliTotalFileSize;
      } /* size: 0x0028 */ StreamStarted;
      struct
      {
        /* 0x0008 */ unsigned long dwStreamNumber;
        /* 0x000c */ unsigned long dwReserved;
        /* 0x0010 */ void* hSourceFile;
        /* 0x0018 */ void* hDestinationFile;
        /* 0x0020 */ union _ULARGE_INTEGER uliStreamSize;
        /* 0x0028 */ union _ULARGE_INTEGER uliStreamBytesTransferred;
        /* 0x0030 */ union _ULARGE_INTEGER uliTotalFileSize;
        /* 0x0038 */ union _ULARGE_INTEGER uliTotalBytesTransferred;
      } /* size: 0x0038 */ StreamFinished;
      struct
      {
        /* 0x0008 */ unsigned long dwReserved;
      } /* size: 0x0004 */ PollContinue;
      struct
      {
        /* 0x0008 */ enum _COPYFILE2_COPY_PHASE CopyPhase;
        /* 0x000c */ unsigned long dwStreamNumber;
        /* 0x0010 */ HRESULT hrFailure;
        /* 0x0014 */ unsigned long dwReserved;
        /* 0x0018 */ union _ULARGE_INTEGER uliChunkNumber;
        /* 0x0020 */ union _ULARGE_INTEGER uliStreamSize;
        /* 0x0028 */ union _ULARGE_INTEGER uliStreamBytesTransferred;
        /* 0x0030 */ union _ULARGE_INTEGER uliTotalFileSize;
        /* 0x0038 */ union _ULARGE_INTEGER uliTotalBytesTransferred;
      } /* size: 0x0038 */ Error;
    }; /* size: 0x0048 */
  } /* size: 0x0048 */ Info;
}; /* size: 0x0050 */

