typedef struct _NDR64_TRANSMIT_AS_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char Flags;
  /* 0x0002 */ unsigned short RoutineIndex;
  /* 0x0004 */ unsigned short TransmittedTypeWireAlignment;
  /* 0x0006 */ unsigned short MemoryAlignment;
  /* 0x0008 */ unsigned int PresentedTypeMemorySize;
  /* 0x000c */ unsigned int TransmittedTypeBufferSize;
  /* 0x0010 */ const void* TransmittedType;
} NDR64_TRANSMIT_AS_FORMAT, *PNDR64_TRANSMIT_AS_FORMAT; /* size: 0x0018 */

