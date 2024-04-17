typedef struct _CONTEXT_HANDLE_ELEMENT
{
  /* 0x0000 */ struct _CONTEXT_HANDLE_ELEMENT* Next;
  /* 0x0008 */ struct
  {
    /* 0x0008 */ void* pad[2];
    /* 0x0018 */ void* userContext;
  } /* size: 0x0018 */* pContext;
  /* 0x0010 */ struct NDR_CONTEXT_HANDLE_ARG_DESC* pCtxtDesc;
  /* 0x0018 */ unsigned char* Key;
} CONTEXT_HANDLE_ELEMENT, *PCONTEXT_HANDLE_ELEMENT; /* size: 0x0020 */

