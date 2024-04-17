typedef struct _EFS_KEY_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long Entropy;
  /* 0x0008 */ unsigned int Algorithm;
  /* 0x000c */ unsigned long KeyLength;
} EFS_KEY_INFO, *PEFS_KEY_INFO; /* size: 0x0010 */

