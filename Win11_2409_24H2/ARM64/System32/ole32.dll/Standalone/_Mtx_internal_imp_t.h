typedef struct _Stl_critical_section
{
  /* 0x0000 */ void* _Unused;
  /* 0x0008 */ void* _M_srw_lock;
} Stl_critical_section, *PStl_critical_section; /* size: 0x0010 */

union std::_Align_type<double,16>
{
  union
  {
    /* 0x0000 */ double _Val;
    /* 0x0000 */ char _Pad[16];
  }; /* size: 0x0010 */
}; /* size: 0x0010 */

typedef struct _Mtx_internal_imp_t
{
  union
  {
    /* 0x0000 */ const unsigned __int64 _Critical_section_size;
    /* 0x0000 */ const unsigned __int64 _Critical_section_align;
    /* 0x0000 */ int _Type;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ struct _Stl_critical_section _Critical_section;
    /* 0x0008 */ union std::_Align_type<double,16> _Cs_storage;
  }; /* size: 0x0010 */
  /* 0x0018 */ long _Thread_id;
  /* 0x001c */ int _Count;
} Mtx_internal_imp_t, *PMtx_internal_imp_t; /* size: 0x0020 */

