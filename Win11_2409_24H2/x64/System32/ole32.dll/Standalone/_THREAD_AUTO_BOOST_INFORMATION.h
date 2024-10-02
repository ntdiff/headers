typedef struct _THREAD_AUTO_BOOST_INFORMATION
{
  /* 0x0000 */ void* EntryIdentifier;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ long __PADDING__[1];
} THREAD_AUTO_BOOST_INFORMATION, *PTHREAD_AUTO_BOOST_INFORMATION; /* size: 0x0010 */

