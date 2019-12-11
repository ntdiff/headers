enum PAUSE_OR_RESTART
{
  DatapathPaused = 0,
  DatapathRunning = 1,
};

class Rtl::KArray<void *>
{
  /* 0x0004 */ unsigned long m_bufferSize;
  /* 0x0008 */ unsigned long m_numElements;
  /* 0x000c */ void** _p;
}; /* size: 0x0010 */

class Ndis::BindState
{
  /* 0x0004 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ BOOL AllowBindDespiteMandatory;
  /* 0x0009 */ BOOL PretendBindingActive;
  /* 0x000a */ BOOL NeedsPauseAction;
  /* 0x000c */ void* m_AdditionalContext;
  /* 0x0010 */ int m_LastErrorCode;
  /* 0x0014 */ unsigned long m_bindSources;
  /* 0x0018 */ unsigned long m_unbindReasons;
  /* 0x001c */ unsigned long m_pauseReasons;
  /* 0x0020 */ enum PAUSE_OR_RESTART m_actualPauseState;
  /* 0x0024 */ class Rtl::KArray<void *> m_bindContext;
}; /* size: 0x0034 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

struct NDIS_BIND_LINK_BASE
{
  /* 0x0000 */ class Ndis::BindState BindState;
  /* 0x0034 */ struct _LIST_ENTRY DriverLinkage;
}; /* size: 0x003c */

