typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_OID_REQUEST_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Completed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long FreeRequest : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long OidInTable : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long SignalEvent : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CoNdis : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long FromProtocol : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long FromFilter : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long Passthrough : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long LastRestoreFilter : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long OnlyDerefOpen : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long Reserved1 : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long MpSaveBuf : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long DownLevel : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned long Cloned : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long Mandatory : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long SentToMiniport : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long SentToFilter : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long ForReset : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long ForRestore : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long ForMpDirect : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long DirectRequest : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long RevisionChanged : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long SkipPreProc : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long SkipPostProc : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long SkipSourceCompletion : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long SourceCompletionOnly : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long Remainder : 5; /* bit position: 27 */
  }; /* bitfield */
} NDIS_OID_REQUEST_FLAGS, *PNDIS_OID_REQUEST_FLAGS; /* size: 0x0004 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _NDIS_OID_REQUEST_RESERVED
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY Entry;
    /* 0x0000 */ int Status;
  }; /* size: 0x0010 */
  /* 0x0010 */ struct _NDIS_OID_REQUEST_FLAGS Flags;
  /* 0x0014 */ unsigned long OidTableIndex;
  /* 0x0018 */ void* Request;
  /* 0x0020 */ void* SourceHandle;
  union
  {
    struct
    {
      /* 0x0028 */ struct _KEVENT Event;
      /* 0x0040 */ void* NdisVcHandle;
    }; /* size: 0x0020 */
    struct
    {
      /* 0x0028 */ void* PartyContext;
      /* 0x0030 */ void* CallMgrContext;
      /* 0x0038 */ void* VcContext;
      /* 0x0040 */ void* AfContext;
    } /* size: 0x0020 */ CoNdis;
  }; /* size: 0x0020 */
  union
  {
    /* 0x0048 */ unsigned __int64 StartCycle;
    struct
    {
      /* 0x0048 */ struct _NDIS_REQUEST_XLATION_CONTEXT* pOidXlationContext;
      /* 0x0050 */ unsigned long OriginalBufferLength;
    }; /* size: 0x000c */
    struct
    {
      /* 0x0048 */ unsigned long SavedOid;
      /* 0x0050 */ void* SavedInfoBuf;
      /* 0x0058 */ unsigned long SavedInfoBufLen;
      /* 0x005c */ unsigned long RequestBuffer;
    }; /* size: 0x0014 */
    struct
    {
      /* 0x0048 */ struct _NDIS_WOL_XLATION_CONTEXT* WolXlationContext;
      /* 0x0050 */ unsigned long WolPatternId;
      /* 0x0058 */ struct _NDIS_PACKET_PATTERN_ENTRY* SourcePacketEntry;
    } /* size: 0x0018 */ PMContext;
  }; /* size: 0x0018 */
} NDIS_OID_REQUEST_RESERVED, *PNDIS_OID_REQUEST_RESERVED; /* size: 0x0060 */

