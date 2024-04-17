typedef struct _FILE_PIPE_CREATE_SYMLINK_INPUT
{
  /* 0x0000 */ unsigned short NameOffset;
  /* 0x0002 */ unsigned short NameLength;
  /* 0x0004 */ unsigned short SubstituteNameOffset;
  /* 0x0006 */ unsigned short SubstituteNameLength;
  /* 0x0008 */ unsigned long Flags;
} FILE_PIPE_CREATE_SYMLINK_INPUT, *PFILE_PIPE_CREATE_SYMLINK_INPUT; /* size: 0x000c */

