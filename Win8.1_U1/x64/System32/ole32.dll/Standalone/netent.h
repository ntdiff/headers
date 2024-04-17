struct netent
{
  /* 0x0000 */ char* n_name;
  /* 0x0008 */ char** n_aliases;
  /* 0x0010 */ short n_addrtype;
  /* 0x0014 */ unsigned long n_net;
}; /* size: 0x0018 */

