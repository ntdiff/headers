enum APPLICATION_VIEW_STATE
{
  AVS_FULLSCREEN_LANDSCAPE = 0,
  AVS_FILLED = 1,
  AVS_SNAPPED = 2,
  AVS_FULLSCREEN_PORTRAIT = 3,
};

enum APPLICATION_VIEW_ORIENTATION
{
  AVO_LANDSCAPE = 0,
  AVO_PORTRAIT = 1,
};

enum ADJACENT_DISPLAY_EDGES
{
  ADE_NONE = 0,
  ADE_LEFT = 1,
  ADE_RIGHT = 2,
};

enum USER_INTERACTION_MODE
{
  UIM_MOUSE = 0,
  UIM_TOUCH = 1,
};

enum VIEW_PRESENTATION_MODE
{
  VPM_DESKTOP = 0,
  VPM_HOLOGRAPHIC = 1,
};

enum APPLICATION_VIEW_MODE
{
  AVM_DEFAULT = 0,
  AVM_COMPACT_OVERLAY = 1,
};

enum APPLICATION_VIEW_MODE_FLAGS
{
  AVMF_DEFAULT = 1,
  AVMF_COMPACT_OVERLAY = 2,
};

enum WindowTransparencyMode
{
  WTM_TransparentWhenActive = 0,
  WTM_AlwaysOpaque = 1,
  WTM_AlwaysTransparent = 2,
};

struct APPLICATION_VIEW_DATA
{
  /* 0x0000 */ enum APPLICATION_VIEW_STATE viewState;
  /* 0x0004 */ enum APPLICATION_VIEW_ORIENTATION viewOrientation;
  /* 0x0008 */ enum ADJACENT_DISPLAY_EDGES displayEdges;
  /* 0x000c */ int fIsOnLockScreen;
  /* 0x0010 */ int fIsFullScreenMode;
  /* 0x0014 */ enum USER_INTERACTION_MODE userInteractionMode;
  /* 0x0018 */ enum VIEW_PRESENTATION_MODE presentationMode;
  /* 0x001c */ enum APPLICATION_VIEW_MODE viewMode;
  /* 0x0020 */ enum APPLICATION_VIEW_MODE_FLAGS allowedViewModes;
  /* 0x0024 */ enum WindowTransparencyMode windowTransparencyMode;
  /* 0x0028 */ int canOpenInNewTab;
}; /* size: 0x002c */

