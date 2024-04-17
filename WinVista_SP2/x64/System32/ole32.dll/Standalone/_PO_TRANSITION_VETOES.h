typedef struct _PO_TRANSITION_VETO_REASON
{
  /* 0x0000 */ unsigned long ResourceId;
  /* 0x0004 */ unsigned long ModuleNameOffset;
} PO_TRANSITION_VETO_REASON, *PPO_TRANSITION_VETO_REASON; /* size: 0x0008 */

typedef struct _PO_TRANSITION_VETO_WINDOW
{
  /* 0x0000 */ void* Handle;
} PO_TRANSITION_VETO_WINDOW, *PPO_TRANSITION_VETO_WINDOW; /* size: 0x0008 */

typedef struct _PO_TRANSITION_VETO_SERVICE
{
  /* 0x0000 */ unsigned long ServiceNameOffset;
} PO_TRANSITION_VETO_SERVICE, *PPO_TRANSITION_VETO_SERVICE; /* size: 0x0004 */

typedef struct _PO_TRANSITION_VETO
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ struct _PO_TRANSITION_VETO_REASON Reason;
  /* 0x000c */ unsigned long ProcessId;
  union
  {
    /* 0x0010 */ struct _PO_TRANSITION_VETO_WINDOW Window;
    struct
    {
      /* 0x0010 */ struct _PO_TRANSITION_VETO_SERVICE Service;
      /* 0x0014 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} PO_TRANSITION_VETO, *PPO_TRANSITION_VETO; /* size: 0x0018 */

typedef struct _PO_TRANSITION_VETOES
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0008 */ struct _PO_TRANSITION_VETO Vetoes[1];
} PO_TRANSITION_VETOES, *PPO_TRANSITION_VETOES; /* size: 0x0020 */

