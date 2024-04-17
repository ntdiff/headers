typedef enum _IOP_PRIORITY_HINT
{
  IopIoPriorityNotSet = 0,
  IopIoPriorityVeryLow = 1,
  IopIoPriorityLow = 2,
  IopIoPriorityNormal = 3,
  IopIoPriorityHigh = 4,
  IopIoPriorityCritical = 5,
  MaxIopIoPriorityTypes = 6,
} IOP_PRIORITY_HINT, *PIOP_PRIORITY_HINT;

typedef struct _IOP_FILE_OBJECT_EXTENSION
{
  /* 0x0000 */ unsigned long FoExtFlags;
  /* 0x0008 */ void* FoExtPerTypeExtension[10];
  /* 0x0058 */ enum _IOP_PRIORITY_HINT FoIoPriorityHint;
  /* 0x005c */ long __PADDING__[1];
} IOP_FILE_OBJECT_EXTENSION, *PIOP_FILE_OBJECT_EXTENSION; /* size: 0x0060 */

