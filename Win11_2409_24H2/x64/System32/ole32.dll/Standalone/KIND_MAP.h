enum KIND_FLAGS
{
  KF_DEFAULT = 0,
  KF_PICTURE = 1,
  KF_MUSIC = 2,
  KF_VIDEO = 4,
  KF_MOVIE = 8,
  KF_RECORDEDTV = 16,
  KF_DOCUMENT = 32,
  KF_FOLDER = 64,
  KF_MULTIMEDIA_MASK = 31,
  KF_VIDEO_MASK = 28,
};

struct KIND_MAP
{
  /* 0x0000 */ const wchar_t* pszKind;
  /* 0x0008 */ enum KIND_FLAGS kindFlag;
  /* 0x000c */ long __PADDING__[1];
}; /* size: 0x0010 */

