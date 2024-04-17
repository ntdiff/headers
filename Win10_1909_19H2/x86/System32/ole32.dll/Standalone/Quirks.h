enum Quirks::QuirkStatus
{
  QuirkStatusUndetermined = 0,
  QuirkEnabled = 1,
  QuirkDisabled = 2,
};

class Quirks
{
  union
  {
    /* 0x0000 */ enum Quirks::QuirkStatus s_dropOrReorderInputInAsta;
    /* 0x0000 */ enum Quirks::QuirkStatus s_allowAstaToAstaCalls;
    /* 0x0000 */ enum Quirks::QuirkStatus s_disableThresholdAppLaunchPerfFeature;
    /* 0x0000 */ enum Quirks::QuirkStatus s_disableWinrtAsyncChannel;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

