typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 IdInfoValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 MemoryNumberValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoNumberValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 RegisterDataPairValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
  }; /* bitfield */
} WHEA_PCIX_DEV_VALIDATION_BITS, *PWHEA_PCIX_DEV_VALIDATION_BITS; /* size: 0x0008 */

typedef struct _WHEA_ERROR_STATUS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Reserved1 : 8; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorType : 8; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Address : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Control : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned __int64 Data : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned __int64 Responder : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned __int64 Requester : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned __int64 FirstError : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned __int64 Overflow : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 Reserved2 : 41; /* bit position: 23 */
  }; /* bitfield */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef struct _WHEA_PCIX_DEVICE_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_DEV_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned char IdInfo[16];
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ unsigned char RegisterDataPairs[64];
} WHEA_PCIX_DEVICE_ERROR, *PWHEA_PCIX_DEVICE_ERROR; /* size: 0x0068 */

