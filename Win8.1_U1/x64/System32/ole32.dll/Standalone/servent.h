struct servent
{
  /* 0x0000 */ char* s_name;
  /* 0x0008 */ char** s_aliases;
  /* 0x0010 */ char* s_proto;
  /* 0x0018 */ short s_port;
  /* 0x001a */ char __PADDING__[6];
}; /* size: 0x0020 */

