struct tagNMHDR
{
  /* 0x0000 */ struct HWND__* hwndFrom;
  /* 0x0008 */ unsigned __int64 idFrom;
  /* 0x0010 */ unsigned int code;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

enum EC_SEARCHWEB_ENTRYPOINT
{
  EC_SEARCHWEB_ENTRYPOINT_EXTERNAL = 0,
  EC_SEARCHWEB_ENTRYPOINT_CONTEXTMENU = 1,
};

struct NMSEARCHWEB
{
  /* 0x0000 */ struct tagNMHDR hdr;
  /* 0x0018 */ enum EC_SEARCHWEB_ENTRYPOINT entrypoint;
  /* 0x001c */ int hasQueryText;
  /* 0x0020 */ int invokeSucceeded;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

