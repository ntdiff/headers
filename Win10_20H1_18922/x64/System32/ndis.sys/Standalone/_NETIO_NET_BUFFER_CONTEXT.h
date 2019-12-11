typedef struct _NETIO_NET_BUFFER_CONTEXT
{
  /* 0x0000 */ unsigned long OriginalDataOffset;
  /* 0x0004 */ unsigned long OriginalDataLength;
  /* 0x0008 */ unsigned long TruncatedLength;
  union
  {
    /* 0x000c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned long EcnField : 2; /* bit position: 0 */
      /* 0x000c */ unsigned long EspTrailerSpaceAllocated : 1; /* bit position: 2 */
      /* 0x000c */ unsigned long Converted : 1; /* bit position: 3 */
      /* 0x000c */ unsigned long Restored : 1; /* bit position: 4 */
      /* 0x000c */ unsigned long EcnForceNotEct : 1; /* bit position: 5 */
      /* 0x000c */ unsigned long NdPriority : 1; /* bit position: 6 */
      /* 0x000c */ unsigned long IpsnpiForwardInjection : 1; /* bit position: 7 */
      /* 0x000c */ unsigned long IpsnpiForwardInjectionCopy : 1; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0010 */ void* Scratch[2];
} NETIO_NET_BUFFER_CONTEXT, *PNETIO_NET_BUFFER_CONTEXT; /* size: 0x0020 */

