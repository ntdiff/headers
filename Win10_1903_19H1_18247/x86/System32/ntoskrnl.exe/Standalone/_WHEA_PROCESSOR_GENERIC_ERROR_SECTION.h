typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ProcessorType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 InstructionSet : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Operation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Flags : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Level : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 CPUVersion : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CPUBrandString : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 ProcessorId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 TargetAddress : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 InstructionPointer : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 Reserved : 51; /* bit position: 13 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION
{
  /* 0x0000 */ union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
  /* 0x0008 */ unsigned char ProcessorType;
  /* 0x0009 */ unsigned char InstructionSet;
  /* 0x000a */ unsigned char ErrorType;
  /* 0x000b */ unsigned char Operation;
  /* 0x000c */ unsigned char Flags;
  /* 0x000d */ unsigned char Level;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned __int64 CPUVersion;
  /* 0x0018 */ unsigned char CPUBrandString[128];
  /* 0x0098 */ unsigned __int64 ProcessorId;
  /* 0x00a0 */ unsigned __int64 TargetAddress;
  /* 0x00a8 */ unsigned __int64 RequesterId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION; /* size: 0x00c0 */

