enum ConfigKnobFlag
{
  OnlyUpdateOnceAtBoot = 0,
  Uint32Datatype = 0,
  BooleanDatatype = 2,
  Uint64Datatype = 4,
  AllowDynamicUpdate = 32,
  MustBePowerOfTwo = 64,
};

enum ConfigKnobSource
{
  Unknown = 0,
  DefaultValue = 1,
  DefaultStore = 2,
  OverrideStore = 3,
  EphemeralOverride = 4,
};

struct NDIS_KNOB_INFORMATION
{
  /* 0x0000 */ unsigned __int64 CurrentValue;
  /* 0x0008 */ unsigned __int64 DefaultValue;
  /* 0x0010 */ unsigned __int64 MinimumValue;
  /* 0x0018 */ unsigned __int64 MaximumValue;
  /* 0x0020 */ enum ConfigKnobFlag Flags;
  /* 0x0024 */ enum ConfigKnobSource Source;
  /* 0x0028 */ long LastUpdateStatus;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

