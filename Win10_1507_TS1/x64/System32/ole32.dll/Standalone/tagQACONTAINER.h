struct tagQACONTAINER
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct IOleClientSite* pClientSite;
  /* 0x0010 */ struct IAdviseSinkEx* pAdviseSink;
  /* 0x0018 */ struct IPropertyNotifySink* pPropertyNotifySink;
  /* 0x0020 */ struct IUnknown* pUnkEventSink;
  /* 0x0028 */ unsigned long dwAmbientFlags;
  /* 0x002c */ unsigned long colorFore;
  /* 0x0030 */ unsigned long colorBack;
  /* 0x0038 */ struct IFont* pFont;
  /* 0x0040 */ struct IOleUndoManager* pUndoMgr;
  /* 0x0048 */ unsigned long dwAppearance;
  /* 0x004c */ long lcid;
  /* 0x0050 */ struct HPALETTE__* hpal;
  /* 0x0058 */ struct IBindHost* pBindHost;
  /* 0x0060 */ struct IOleControlSite* pOleControlSite;
  /* 0x0068 */ struct IServiceProvider* pServiceProvider;
}; /* size: 0x0070 */

