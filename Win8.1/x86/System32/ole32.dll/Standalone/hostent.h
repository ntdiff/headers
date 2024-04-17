struct hostent
{
  /* 0x0000 */ char* h_name;
  /* 0x0004 */ char** h_aliases;
  /* 0x0008 */ short h_addrtype;
  /* 0x000a */ short h_length;
  /* 0x000c */ char** h_addr_list;
}; /* size: 0x0010 */

