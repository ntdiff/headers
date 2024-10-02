typedef enum __std_win_error
{
  _Success = 0,
  _Invalid_function = 1,
  _File_not_found = 2,
  _Path_not_found = 3,
  _Access_denied = 5,
  _Not_enough_memory = 8,
  _No_more_files = 18,
  _Sharing_violation = 32,
  _Not_supported = 50,
  _Error_bad_netpath = 53,
  _File_exists = 80,
  _Invalid_parameter = 87,
  _Insufficient_buffer = 122,
  _Invalid_name = 123,
  _Directory_not_empty = 145,
  _Already_exists = 183,
  _Filename_exceeds_range = 206,
  _Directory_name_is_invalid = 267,
  _Reparse_tag_invalid = 4393,
  _Max = 0xffffffff,
} _std_win_error, *P_std_win_error;

