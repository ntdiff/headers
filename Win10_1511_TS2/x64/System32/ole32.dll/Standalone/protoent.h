struct protoent
{
  /* 0x0000 */ char* p_name;
  /* 0x0008 */ char** p_aliases;
  /* 0x0010 */ short p_proto;
  /* 0x0012 */ char __PADDING__[6];
}; /* size: 0x0018 */

