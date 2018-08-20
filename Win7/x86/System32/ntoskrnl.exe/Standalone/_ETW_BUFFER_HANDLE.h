typedef struct _ETW_BUFFER_HANDLE
{
  /* 0x0000 */ struct _WMI_BUFFER_HEADER* TraceBuffer;
  /* 0x0004 */ struct _EX_FAST_REF* BufferFastRef;
} ETW_BUFFER_HANDLE, *PETW_BUFFER_HANDLE; /* size: 0x0008 */

