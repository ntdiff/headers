typedef struct _ACTIVATION_CONTEXT_BASIC_INFORMATION
{
  union
  {
    /* 0x0000 */ struct _ACTIVATION_CONTEXT* ActivationContext;
    /* 0x0000 */ void* hActCtx;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long Flags;
    /* 0x0004 */ unsigned long dwFlags;
  }; /* size: 0x0004 */
} ACTIVATION_CONTEXT_BASIC_INFORMATION, *PACTIVATION_CONTEXT_BASIC_INFORMATION; /* size: 0x0008 */

