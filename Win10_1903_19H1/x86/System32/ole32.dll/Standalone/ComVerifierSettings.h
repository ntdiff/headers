class ComVerifierSettings
{
  union
  {
    /* 0x0000 */ BOOL s_fPgAllocUseSystemHeap;
    /* 0x0000 */ BOOL s_fPgAllocHeapIsPrivate;
    /* 0x0000 */ unsigned long s_dwAggressiveMTATesting;
    /* 0x0000 */ class ComVerifierSettings s_singleton;
    /* 0x0000 */ struct ComVerifierSettings::ComVerifierSettingsState* _pSettingsState;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

