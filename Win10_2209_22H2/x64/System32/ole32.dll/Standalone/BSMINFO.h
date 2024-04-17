typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct BSMINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0008 */ struct HDESK__* hdesk;
  /* 0x0010 */ struct HWND__* hwnd;
  /* 0x0018 */ struct _LUID luid;
}; /* size: 0x0020 */

