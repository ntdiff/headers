typedef struct _WPP_TRACE_CONTROL_BLOCK
{
  /* 0x0000 */ struct _WPP_TRACE_CONTROL_BLOCK* Next;
  /* 0x0008 */ unsigned __int64 UmRegistrationHandle;
  union
  {
    /* 0x0010 */ unsigned __int64 Logger;
    /* 0x0010 */ struct _WPP_WIN2K_CONTROL_BLOCK* Win2kCb;
    /* 0x0010 */ void* Ptr;
    /* 0x0010 */ struct _WPP_TRACE_CONTROL_BLOCK* Cb;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned char FlagsLen;
  /* 0x0019 */ unsigned char Level;
  /* 0x001a */ unsigned short Options;
  /* 0x001c */ unsigned long Flags[1];
  /* 0x0020 */ const struct _GUID* ControlGuid;
} WPP_TRACE_CONTROL_BLOCK, *PWPP_TRACE_CONTROL_BLOCK; /* size: 0x0028 */

