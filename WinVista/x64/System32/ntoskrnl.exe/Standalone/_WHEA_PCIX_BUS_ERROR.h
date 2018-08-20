typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 ErrorStatusValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ErrorTypeValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 BusIdValid : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 BusAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 BusDataValid : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 CommandValid : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 RequestorIdValid : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 CompleterIdValid : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 TargetIdValid : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
  }; /* bitfield */
} WHEA_PCIX_BUS_VALIDATION_BITS, *PWHEA_PCIX_BUS_VALIDATION_BITS; /* size: 0x0008 */

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

typedef struct _WHEA_PCIX_BUS_ERROR
{
  /* 0x0000 */ struct _WHEA_PCIX_BUS_VALIDATION_BITS ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ unsigned short BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ unsigned __int64 BusCommand;
  /* 0x0030 */ unsigned __int64 BusRequestorId;
  /* 0x0038 */ unsigned __int64 BusCompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIX_BUS_ERROR, *PWHEA_PCIX_BUS_ERROR; /* size: 0x0048 */

