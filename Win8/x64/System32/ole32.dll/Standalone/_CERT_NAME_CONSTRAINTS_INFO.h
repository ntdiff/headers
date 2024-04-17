typedef struct _CERT_NAME_CONSTRAINTS_INFO
{
  /* 0x0000 */ unsigned long cPermittedSubtree;
  /* 0x0008 */ struct _CERT_GENERAL_SUBTREE* rgPermittedSubtree;
  /* 0x0010 */ unsigned long cExcludedSubtree;
  /* 0x0018 */ struct _CERT_GENERAL_SUBTREE* rgExcludedSubtree;
} CERT_NAME_CONSTRAINTS_INFO, *PCERT_NAME_CONSTRAINTS_INFO; /* size: 0x0020 */

