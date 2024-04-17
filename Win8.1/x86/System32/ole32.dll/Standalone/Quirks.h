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
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

