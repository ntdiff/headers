struct protoent
{
  /* 0x0000 */ char* p_name;
  /* 0x0004 */ char** p_aliases;
  /* 0x0008 */ short p_proto;
  /* 0x000a */ char __PADDING__[2];
}; /* size: 0x000c */

