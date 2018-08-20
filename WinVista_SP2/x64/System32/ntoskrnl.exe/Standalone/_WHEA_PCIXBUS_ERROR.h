typedef union _WHEA_PCIXBUS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 BusId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 BusAddress : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 BusData : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BusCommand : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CompleterId : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_ERROR_VALIDBITS, *PWHEA_PCIXBUS_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_ERROR_STATUS
{
  union
  {
    /* 0x0000 */ unsigned __int64 ErrorStatus;
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
  }; /* size: 0x0008 */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef union _WHEA_PCIXBUS_ID
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char BusNumber;
      /* 0x0001 */ unsigned char BusSegment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID; /* size: 0x0002 */

typedef union _WHEA_PCIXBUS_COMMAND
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Command : 56; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PCIXCommand : 1; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND; /* size: 0x0008 */

typedef struct _WHEA_PCIXBUS_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ union _WHEA_PCIXBUS_ID BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ union _WHEA_PCIXBUS_COMMAND BusCommand;
  /* 0x0030 */ unsigned __int64 RequesterId;
  /* 0x0038 */ unsigned __int64 CompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIXBUS_ERROR, *PWHEA_PCIXBUS_ERROR; /* size: 0x0048 */

