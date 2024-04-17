typedef struct _WPP_WIN2K_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned __int64 Logger;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long Level;
  /* 0x0010 */ const struct _GUID* ControlGuid;
} WPP_WIN2K_CONTROL_BLOCK, *PWPP_WIN2K_CONTROL_BLOCK; /* size: 0x0018 */

