typedef struct _OUTPUT_DEBUG_STRING_INFO
{
  /* 0x0000 */ char* lpDebugStringData;
  /* 0x0008 */ unsigned short fUnicode;
  /* 0x000a */ unsigned short nDebugStringLength;
  /* 0x000c */ long __PADDING__[1];
} OUTPUT_DEBUG_STRING_INFO, *POUTPUT_DEBUG_STRING_INFO; /* size: 0x0010 */

