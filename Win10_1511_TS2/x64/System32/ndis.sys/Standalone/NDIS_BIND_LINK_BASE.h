enum PAUSE_OR_RESTART
{
  DatapathPaused = 0,
  DatapathRunning = 1,
};

class Rtl::KArray<void *>
{
  /* 0x0004 */ unsigned long m_bufferSize;
  /* 0x0008 */ unsigned long m_numElements;
  /* 0x0010 */ void** _p;
}; /* size: 0x0018 */

class Ndis::BindState
{
  /* 0x0008 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0010 */ BOOL AllowBindDespiteMandatory;
  /* 0x0011 */ BOOL PretendBindingActive;
  /* 0x0012 */ BOOL NeedsPauseAction;
  /* 0x0018 */ void* m_AdditionalContext;
  /* 0x0020 */ int m_LastErrorCode;
  /* 0x0024 */ unsigned long m_bindSources;
  /* 0x0028 */ unsigned long m_unbindReasons;
  /* 0x002c */ unsigned long m_pauseReasons;
  /* 0x0030 */ enum PAUSE_OR_RESTART m_actualPauseState;
  /* 0x0038 */ class Rtl::KArray<void *> m_bindContext;
}; /* size: 0x0050 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

struct NDIS_BIND_LINK_BASE
{
  /* 0x0000 */ class Ndis::BindState BindState;
  /* 0x0050 */ struct _LIST_ENTRY DriverLinkage;
}; /* size: 0x0060 */

