enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_LockExpMgr_AssignedAccess
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy1221;
    /* 0x0000 */ const char ___dummy1217;
    /* 0x0000 */ const char ___dummy1218;
    /* 0x0000 */ const char ___dummy1219;
    /* 0x0000 */ const char ___dummy1220;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_LockExpMgr_AssignedAccess, *P_WilFeatureTraits_Feature_LockExpMgr_AssignedAccess; /* size: 0x0001 */

