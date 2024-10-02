typedef enum _EXP_POOL_CONTEXT_TYPE
{
  ExpPoolContextInvalid = 0,
  ExpPoolContextPrivate = 1,
  ExpPoolContextSecure = 2,
} EXP_POOL_CONTEXT_TYPE, *PEXP_POOL_CONTEXT_TYPE;

typedef struct _EXP_POOL_CONTEXT_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ enum _EXP_POOL_CONTEXT_TYPE ContextType;
} EXP_POOL_CONTEXT_HEADER, *PEXP_POOL_CONTEXT_HEADER; /* size: 0x0008 */

struct RTL_HP_ENV_HANDLE
{
  /* 0x0000 */ void* h[2];
}; /* size: 0x0010 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _EXP_POOL_CONTEXT
{
  /* 0x0000 */ struct _EXP_POOL_CONTEXT_HEADER Header;
  /* 0x0008 */ struct RTL_HP_ENV_HANDLE EnvHandle;
  /* 0x0018 */ struct _EX_RUNDOWN_REF Rundown;
  /* 0x0020 */ struct _LIST_ENTRY PoolLink;
  /* 0x0030 */ unsigned __int64 Tag;
  /* 0x0038 */ struct _UNICODE_STRING Name;
  /* 0x0048 */ unsigned long NodeCount;
  /* 0x0050 */ struct _SEGMENT_HEAP* Node[1];
} EXP_POOL_CONTEXT, *PEXP_POOL_CONTEXT; /* size: 0x0058 */

