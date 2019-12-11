typedef union _WHEA_PCIXDEVICE_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 IdInfo : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MemoryNumber : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IoNumber : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 RegisterDataPairs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXDEVICE_ERROR_VALIDBITS, *PWHEA_PCIXDEVICE_ERROR_VALIDBITS; /* size: 0x0008 */

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

typedef struct _WHEA_PCIXDEVICE_ID
{
  /* 0x0000 */ unsigned short VendorId;
  /* 0x0002 */ unsigned short DeviceId;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long BusNumber : 8; /* bit position: 8 */
    /* 0x0008 */ unsigned long SegmentNumber : 8; /* bit position: 16 */
    /* 0x0008 */ unsigned long Reserved1 : 8; /* bit position: 24 */
  }; /* bitfield */
  /* 0x000c */ unsigned long Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID; /* size: 0x0010 */

struct WHEA_PCIXDEVICE_REGISTER_PAIR
{
  /* 0x0000 */ unsigned __int64 Register;
  /* 0x0008 */ unsigned __int64 Data;
}; /* size: 0x0010 */

typedef struct _WHEA_PCIXDEVICE_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ struct _WHEA_PCIXDEVICE_ID IdInfo;
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[4];
} WHEA_PCIXDEVICE_ERROR, *PWHEA_PCIXDEVICE_ERROR; /* size: 0x0068 */

