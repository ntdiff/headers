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

typedef struct _WHEA_MEMORY_ERROR
{
  /* 0x0000 */ unsigned __int64 ValidationBits;
  /* 0x0008 */ struct _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned __int64 PhysicalAddress;
  /* 0x0018 */ unsigned __int64 PhysicalAddressMask;
  /* 0x0020 */ unsigned short Node;
  /* 0x0022 */ unsigned short Card;
  /* 0x0024 */ unsigned short Module;
  /* 0x0026 */ unsigned short Bank;
  /* 0x0028 */ unsigned short Device;
  /* 0x002a */ unsigned short Row;
  /* 0x002c */ unsigned short Column;
  /* 0x002e */ unsigned short BitPosition;
  /* 0x0030 */ unsigned __int64 RequestorId;
  /* 0x0038 */ unsigned __int64 ResponderId;
  /* 0x0040 */ unsigned __int64 TargetId;
  /* 0x0048 */ unsigned char ErrorType;
  /* 0x0049 */ char __PADDING__[7];
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR; /* size: 0x0050 */

