typedef struct __std_type_info_data
{
  /* 0x0000 */ const char* _UndecoratedName;
  /* 0x0004 */ const char _DecoratedName[1];
  /* 0x0005 */ char __PADDING__[3];
} _std_type_info_data, *P_std_type_info_data; /* size: 0x0008 */

class type_info
{
  /* 0x0004 */ struct __std_type_info_data _Data;
}; /* size: 0x000c */

