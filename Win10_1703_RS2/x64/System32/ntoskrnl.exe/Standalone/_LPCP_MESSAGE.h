typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _PORT_MESSAGE
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ short DataLength;
        /* 0x0002 */ short TotalLength;
      } /* size: 0x0004 */ s1;
      /* 0x0000 */ unsigned long Length;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ short Type;
        /* 0x0006 */ short DataInfoOffset;
      } /* size: 0x0004 */ s2;
      /* 0x0004 */ unsigned long ZeroInit;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0008 */ struct _CLIENT_ID ClientId;
    /* 0x0008 */ double DoNotUseThisField;
  }; /* size: 0x0010 */
  /* 0x0018 */ unsigned long MessageId;
  union
  {
    /* 0x0020 */ unsigned __int64 ClientViewSize;
    struct
    {
      /* 0x0020 */ unsigned long CallbackId;
      /* 0x0024 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} PORT_MESSAGE, *PPORT_MESSAGE; /* size: 0x0028 */

typedef struct _LPCP_MESSAGE
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY Entry;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeEntry;
      /* 0x0008 */ unsigned long Reserved0;
    }; /* size: 0x000c */
  }; /* size: 0x0010 */
  /* 0x0010 */ void* SenderPort;
  /* 0x0018 */ struct _ETHREAD* RepliedToThread;
  /* 0x0020 */ void* PortContext;
  /* 0x0028 */ struct _PORT_MESSAGE Request;
} LPCP_MESSAGE, *PLPCP_MESSAGE; /* size: 0x0050 */

