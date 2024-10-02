enum ConfigKnobFlag
{
  OnlyUpdateOnceAtBoot = 0,
  Uint32Datatype = 0,
  BooleanDatatype = 2,
  Uint64Datatype = 4,
  AllowDynamicUpdate = 32,
  MustBePowerOfTwo = 64,
};

struct KnobDescriptor
{
  /* 0x0000 */ const wchar_t* Name;
  /* 0x0008 */ void* Value;
  /* 0x0010 */ unsigned __int64 DefaultValue;
  /* 0x0018 */ enum ConfigKnobFlag Flags;
  /* 0x0020 */ unsigned __int64 MinimumValue;
  /* 0x0028 */ unsigned __int64 MaximumValue;
}; /* size: 0x0030 */

