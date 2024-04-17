typedef enum _PRIORITY_HINT
{
  IoPriorityHintVeryLow = 0,
  IoPriorityHintLow = 1,
  IoPriorityHintNormal = 2,
  MaximumIoPriorityHintType = 3,
} PRIORITY_HINT, *PPRIORITY_HINT;

typedef struct _FILE_IO_PRIORITY_HINT_INFO
{
  /* 0x0000 */ enum _PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFO, *PFILE_IO_PRIORITY_HINT_INFO; /* size: 0x0004 */

