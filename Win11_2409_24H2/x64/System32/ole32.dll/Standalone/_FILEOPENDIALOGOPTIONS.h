typedef enum _FILEOPENDIALOGOPTIONS
{
  FOS_OVERWRITEPROMPT = 2,
  FOS_STRICTFILETYPES = 4,
  FOS_NOCHANGEDIR = 8,
  FOS_PICKFOLDERS = 32,
  FOS_FORCEFILESYSTEM = 64,
  FOS_ALLNONSTORAGEITEMS = 128,
  FOS_NOVALIDATE = 256,
  FOS_ALLOWMULTISELECT = 512,
  FOS_PATHMUSTEXIST = 2048,
  FOS_FILEMUSTEXIST = 4096,
  FOS_CREATEPROMPT = 8192,
  FOS_SHAREAWARE = 16384,
  FOS_NOREADONLYRETURN = 0xffff8000,
  FOS_NOTESTFILECREATE = 0x10000,
  FOS_HIDEMRUPLACES = 0x20000,
  FOS_HIDEPINNEDPLACES = 0x40000,
  FOS_NODEREFERENCELINKS = 0x100000,
  FOS_OKBUTTONNEEDSINTERACTION = 0x200000,
  FOS_DONTADDTORECENT = 0x2000000,
  FOS_FORCESHOWHIDDEN = 0x10000000,
  FOS_DEFAULTNOMINIMODE = 0x20000000,
  FOS_FORCEPREVIEWPANEON = 0x40000000,
  FOS_SUPPORTSTREAMABLEITEMS = -2147483648,
} FILEOPENDIALOGOPTIONS, *PFILEOPENDIALOGOPTIONS;

