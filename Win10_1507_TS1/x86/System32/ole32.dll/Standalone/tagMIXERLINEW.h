struct tagMIXERLINEW
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwDestination;
  /* 0x0008 */ unsigned long dwSource;
  /* 0x000c */ unsigned long dwLineID;
  /* 0x0010 */ unsigned long fdwLine;
  /* 0x0014 */ unsigned long dwUser;
  /* 0x0018 */ unsigned long dwComponentType;
  /* 0x001c */ unsigned long cChannels;
  /* 0x0020 */ unsigned long cConnections;
  /* 0x0024 */ unsigned long cControls;
  /* 0x0028 */ wchar_t szShortName[16];
  /* 0x0048 */ wchar_t szName[64];
  struct
  {
    /* 0x00c8 */ unsigned long dwType;
    /* 0x00cc */ unsigned long dwDeviceID;
    /* 0x00d0 */ unsigned short wMid;
    /* 0x00d2 */ unsigned short wPid;
    /* 0x00d4 */ unsigned int vDriverVersion;
    /* 0x00d8 */ wchar_t szPname[32];
  } /* size: 0x0050 */ Target;
}; /* size: 0x0118 */

