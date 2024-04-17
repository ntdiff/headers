struct tagQACONTAINER
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct IOleClientSite* pClientSite;
  /* 0x0008 */ struct IAdviseSinkEx* pAdviseSink;
  /* 0x000c */ struct IPropertyNotifySink* pPropertyNotifySink;
  /* 0x0010 */ struct IUnknown* pUnkEventSink;
  /* 0x0014 */ unsigned long dwAmbientFlags;
  /* 0x0018 */ unsigned long colorFore;
  /* 0x001c */ unsigned long colorBack;
  /* 0x0020 */ struct IFont* pFont;
  /* 0x0024 */ struct IOleUndoManager* pUndoMgr;
  /* 0x0028 */ unsigned long dwAppearance;
  /* 0x002c */ long lcid;
  /* 0x0030 */ struct HPALETTE__* hpal;
  /* 0x0034 */ struct IBindHost* pBindHost;
  /* 0x0038 */ struct IOleControlSite* pOleControlSite;
  /* 0x003c */ struct IServiceProvider* pServiceProvider;
}; /* size: 0x0040 */

