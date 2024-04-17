typedef struct _CRYPTPROTECT_PROMPTSTRUCT
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwPromptFlags;
  /* 0x0008 */ struct HWND__* hwndApp;
  /* 0x000c */ const wchar_t* szPrompt;
} CRYPTPROTECT_PROMPTSTRUCT, *PCRYPTPROTECT_PROMPTSTRUCT; /* size: 0x0010 */

