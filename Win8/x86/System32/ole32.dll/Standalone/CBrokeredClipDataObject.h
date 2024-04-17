class Microsoft::WRL::ComPtr<IDataObject>
{
  /* 0x0000 */ struct IDataObject* ptr_;
}; /* size: 0x0004 */

class CBrokeredClipDataObject
{
  union
  {
    /* 0x0000 */ unsigned short s_cfPreferredDropEffect;
    /* 0x0000 */ unsigned short s_cfPerformedDropEffect;
    /* 0x0000 */ unsigned short s_cfLogicalPerformedDropEffect;
    /* 0x0000 */ unsigned short s_cfPasteSucceeded;
  }; /* size: 0x0002 */
  /* 0x0008 */ long m_refs;
  /* 0x000c */ void* m_hOwnerToken;
  /* 0x0010 */ unsigned long m_dwSourceProcessId;
  /* 0x0014 */ BOOL m_fOwnerIsPackaged;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IDataObject> m_pDataObject;
}; /* size: 0x001c */

