struct hostent
{
  /* 0x0000 */ char* h_name;
  /* 0x0008 */ char** h_aliases;
  /* 0x0010 */ short h_addrtype;
  /* 0x0012 */ short h_length;
  /* 0x0018 */ char** h_addr_list;
}; /* size: 0x0020 */

