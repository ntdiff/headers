typedef struct _OVERLAPPED_ENTRY
{
  /* 0x0000 */ unsigned __int64 lpCompletionKey;
  /* 0x0008 */ struct _OVERLAPPED* lpOverlapped;
  /* 0x0010 */ unsigned __int64 Internal;
  /* 0x0018 */ unsigned long dwNumberOfBytesTransferred;
  /* 0x001c */ long __PADDING__[1];
} OVERLAPPED_ENTRY, *POVERLAPPED_ENTRY; /* size: 0x0020 */

