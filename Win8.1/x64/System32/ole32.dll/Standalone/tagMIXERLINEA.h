struct tagMIXERLINEA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwDestination;
  /* 0x0008 */ unsigned long dwSource;
  /* 0x000c */ unsigned long dwLineID;
  /* 0x0010 */ unsigned long fdwLine;
  /* 0x0014 */ unsigned __int64 dwUser;
  /* 0x001c */ unsigned long dwComponentType;
  /* 0x0020 */ unsigned long cChannels;
  /* 0x0024 */ unsigned long cConnections;
  /* 0x0028 */ unsigned long cControls;
  /* 0x002c */ char szShortName[16];
  /* 0x003c */ char szName[64];
  struct
  {
    /* 0x007c */ unsigned long dwType;
    /* 0x0080 */ unsigned long dwDeviceID;
    /* 0x0084 */ unsigned short wMid;
    /* 0x0086 */ unsigned short wPid;
    /* 0x0088 */ unsigned int vDriverVersion;
    /* 0x008c */ char szPname[32];
  } /* size: 0x0030 */ Target;
}; /* size: 0x00ac */

