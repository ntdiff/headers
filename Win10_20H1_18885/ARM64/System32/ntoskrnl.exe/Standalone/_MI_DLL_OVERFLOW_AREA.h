typedef struct _MI_DLL_OVERFLOW_AREA
{
  /* 0x0000 */ void* RangeStart;
  /* 0x0008 */ void* NextVa;
  /* 0x0010 */ void* RangeStartAbove2gb;
  /* 0x0018 */ void* NextVaAbove2gb;
} MI_DLL_OVERFLOW_AREA, *PMI_DLL_OVERFLOW_AREA; /* size: 0x0020 */

