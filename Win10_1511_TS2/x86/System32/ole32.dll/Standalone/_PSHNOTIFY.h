struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0004 */ unsigned int idFrom;
  /* 0x0008 */ unsigned int code;
}; /* size: 0x000c */

typedef struct _PSHNOTIFY
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x000c */ long lParam;
} PSHNOTIFY, *PPSHNOTIFY; /* size: 0x0010 */

