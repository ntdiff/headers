typedef enum _KCONTINUE_TYPE
{
  KCONTINUE_UNWIND = 0,
  KCONTINUE_RESUME = 1,
  KCONTINUE_LONGJUMP = 2,
  KCONTINUE_SET = 3,
  KCONTINUE_LAST = 4,
} KCONTINUE_TYPE, *PKCONTINUE_TYPE;

typedef struct _KCONTINUE_ARGUMENT
{
  /* 0x0000 */ enum _KCONTINUE_TYPE ContinueType;
  /* 0x0004 */ unsigned long ContinueFlags;
  /* 0x0008 */ unsigned __int64 Reserved[2];
} KCONTINUE_ARGUMENT, *PKCONTINUE_ARGUMENT; /* size: 0x0018 */

