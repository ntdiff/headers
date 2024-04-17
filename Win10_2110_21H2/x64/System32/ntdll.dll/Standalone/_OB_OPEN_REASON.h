typedef enum _OB_OPEN_REASON
{
  ObCreateHandle = 0,
  ObOpenHandle = 1,
  ObDuplicateHandle = 2,
  ObInheritHandle = 3,
  ObMaxOpenReason = 4,
} OB_OPEN_REASON, *POB_OPEN_REASON;

