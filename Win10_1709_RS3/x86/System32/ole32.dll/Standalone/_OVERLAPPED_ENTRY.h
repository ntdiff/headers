typedef struct _OVERLAPPED_ENTRY
{
  /* 0x0000 */ unsigned long lpCompletionKey;
  /* 0x0004 */ struct _OVERLAPPED* lpOverlapped;
  /* 0x0008 */ unsigned long Internal;
  /* 0x000c */ unsigned long dwNumberOfBytesTransferred;
} OVERLAPPED_ENTRY, *POVERLAPPED_ENTRY; /* size: 0x0010 */

