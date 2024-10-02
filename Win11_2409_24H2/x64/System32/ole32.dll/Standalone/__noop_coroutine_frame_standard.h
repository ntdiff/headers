typedef struct __noop_coroutine_frame_standard
{
  /* 0x0000 */ void* resume;
  /* 0x0008 */ void* destroy;
  /* 0x0010 */ char promise;
  /* 0x0011 */ char __PADDING__[7];
} _noop_coroutine_frame_standard, *P_noop_coroutine_frame_standard; /* size: 0x0018 */

