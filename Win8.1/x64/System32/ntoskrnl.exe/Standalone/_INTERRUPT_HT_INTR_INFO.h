typedef struct _INTERRUPT_HT_INTR_INFO
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long Mask : 1; /* bit position: 0 */
          /* 0x0000 */ unsigned long Polarity : 1; /* bit position: 1 */
          /* 0x0000 */ unsigned long MessageType : 3; /* bit position: 2 */
          /* 0x0000 */ unsigned long RequestEOI : 1; /* bit position: 5 */
          /* 0x0000 */ unsigned long DestinationMode : 1; /* bit position: 6 */
          /* 0x0000 */ unsigned long MessageType3 : 1; /* bit position: 7 */
          /* 0x0000 */ unsigned long Destination : 8; /* bit position: 8 */
          /* 0x0000 */ unsigned long Vector : 8; /* bit position: 16 */
          /* 0x0000 */ unsigned long ExtendedAddress : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ LowPart;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long ExtendedDestination : 24; /* bit position: 0 */
          /* 0x0004 */ unsigned long Reserved : 6; /* bit position: 24 */
          /* 0x0004 */ unsigned long PassPW : 1; /* bit position: 30 */
          /* 0x0004 */ unsigned long WaitingForEOI : 1; /* bit position: 31 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0004 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighPart;
} INTERRUPT_HT_INTR_INFO, *PINTERRUPT_HT_INTR_INFO; /* size: 0x0008 */

