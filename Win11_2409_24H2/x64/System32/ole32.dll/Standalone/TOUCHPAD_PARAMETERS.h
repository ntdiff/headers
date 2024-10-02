enum LEGACY_TOUCHPAD_FEATURES
{
  LEGACY_TOUCHPAD_FEATURE_NONE = 0,
  LEGACY_TOUCHPAD_FEATURE_ENABLE_DISABLE = 1,
  LEGACY_TOUCHPAD_FEATURE_REVERSE_SCROLL_DIRECTION = 4,
};

enum TOUCHPAD_SENSITIVITY_LEVEL
{
  TOUCHPAD_SENSITIVITY_LEVEL_MOST_SENSITIVE = 0,
  TOUCHPAD_SENSITIVITY_LEVEL_HIGH_SENSITIVITY = 1,
  TOUCHPAD_SENSITIVITY_LEVEL_MEDIUM_SENSITIVITY = 2,
  TOUCHPAD_SENSITIVITY_LEVEL_LOW_SENSITIVITY = 3,
  TOUCHPAD_SENSITIVITY_LEVEL_LEAST_SENSITIVE = 4,
};

struct TOUCHPAD_PARAMETERS
{
  /* 0x0000 */ unsigned int versionNumber;
  /* 0x0004 */ unsigned int maxSupportedContacts;
  /* 0x0008 */ enum LEGACY_TOUCHPAD_FEATURES legacyTouchpadFeatures;
  struct /* bitfield */
  {
    /* 0x000c */ int touchpadPresent : 1; /* bit position: 0 */
    /* 0x000c */ int legacyTouchpadPresent : 1; /* bit position: 1 */
    /* 0x000c */ int externalMousePresent : 1; /* bit position: 2 */
    /* 0x000c */ int touchpadEnabled : 1; /* bit position: 3 */
    /* 0x000c */ int touchpadActive : 1; /* bit position: 4 */
    /* 0x000c */ int feedbackSupported : 1; /* bit position: 5 */
    /* 0x000c */ int clickForceSupported : 1; /* bit position: 6 */
    /* 0x000c */ int Reserved1 : 25; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0010 */ int allowActiveWhenMousePresent : 1; /* bit position: 0 */
    /* 0x0010 */ int feedbackEnabled : 1; /* bit position: 1 */
    /* 0x0010 */ int tapEnabled : 1; /* bit position: 2 */
    /* 0x0010 */ int tapAndDragEnabled : 1; /* bit position: 3 */
    /* 0x0010 */ int twoFingerTapEnabled : 1; /* bit position: 4 */
    /* 0x0010 */ int rightClickZoneEnabled : 1; /* bit position: 5 */
    /* 0x0010 */ int mouseAccelSettingHonored : 1; /* bit position: 6 */
    /* 0x0010 */ int panEnabled : 1; /* bit position: 7 */
    /* 0x0010 */ int zoomEnabled : 1; /* bit position: 8 */
    /* 0x0010 */ int scrollDirectionReversed : 1; /* bit position: 9 */
    /* 0x0010 */ int Reserved2 : 22; /* bit position: 10 */
  }; /* bitfield */
  /* 0x0014 */ enum TOUCHPAD_SENSITIVITY_LEVEL sensitivityLevel;
  /* 0x0018 */ unsigned int cursorSpeed;
  /* 0x001c */ unsigned int feedbackIntensity;
  /* 0x0020 */ unsigned int clickForceSensitivity;
  /* 0x0024 */ unsigned int rightClickZoneWidth;
  /* 0x0028 */ unsigned int rightClickZoneHeight;
}; /* size: 0x002c */

