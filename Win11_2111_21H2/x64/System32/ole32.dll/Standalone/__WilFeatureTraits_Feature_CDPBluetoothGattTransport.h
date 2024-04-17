enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_CDPBluetoothGattTransport
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy39;
    /* 0x0000 */ const char ___dummy31;
    /* 0x0000 */ const char ___dummy32;
    /* 0x0000 */ const char ___dummy33;
    /* 0x0000 */ const char ___dummy34;
    /* 0x0000 */ const char ___dummy35;
    /* 0x0000 */ const char ___dummy36;
    /* 0x0000 */ const char ___dummy37;
    /* 0x0000 */ const char ___dummy38;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_CDPBluetoothGattTransport, *P_WilFeatureTraits_Feature_CDPBluetoothGattTransport; /* size: 0x0001 */

