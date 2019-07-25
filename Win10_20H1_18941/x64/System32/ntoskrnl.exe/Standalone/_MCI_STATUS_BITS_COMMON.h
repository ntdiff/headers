typedef struct _MCI_STATUS_BITS_COMMON
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 McaErrorCode : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ModelErrorCode : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Reserved : 25; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 ContextCorrupt : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 AddressValid : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 MiscValid : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 ErrorEnabled : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 UncorrectedError : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 StatusOverFlow : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 63 */
  }; /* bitfield */
} MCI_STATUS_BITS_COMMON, *PMCI_STATUS_BITS_COMMON; /* size: 0x0008 */

