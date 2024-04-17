struct netent
{
  /* 0x0000 */ char* n_name;
  /* 0x0004 */ char** n_aliases;
  /* 0x0008 */ short n_addrtype;
  /* 0x000c */ unsigned long n_net;
}; /* size: 0x0010 */

