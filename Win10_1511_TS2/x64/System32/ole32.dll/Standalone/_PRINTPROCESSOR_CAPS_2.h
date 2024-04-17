typedef struct _PRINTPROCESSOR_CAPS_2
{
  /* 0x0000 */ unsigned long dwLevel;
  /* 0x0004 */ unsigned long dwNupOptions;
  /* 0x0008 */ unsigned long dwPageOrderFlags;
  /* 0x000c */ unsigned long dwNumberOfCopies;
  /* 0x0010 */ unsigned long dwDuplexHandlingCaps;
  /* 0x0014 */ unsigned long dwNupDirectionCaps;
  /* 0x0018 */ unsigned long dwNupBorderCaps;
  /* 0x001c */ unsigned long dwBookletHandlingCaps;
  /* 0x0020 */ unsigned long dwScalingCaps;
} PRINTPROCESSOR_CAPS_2, *PPRINTPROCESSOR_CAPS_2; /* size: 0x0024 */

