enum EDP_CONTEXT_STATES
{
  EDP_CONTEXT_NONE = 0,
  EDP_CONTEXT_IS_EXEMPT = 1,
  EDP_CONTEXT_IS_ENLIGHTENED = 2,
  EDP_CONTEXT_IS_UNENLIGHTENED_ALLOWED = 4,
  EDP_CONTEXT_IS_PERMISSIVE = 8,
  EDP_CONTEXT_IS_COPY_EXEMPT = 16,
};

struct EDP_CONTEXT
{
  /* 0x0000 */ enum EDP_CONTEXT_STATES contextStates;
  /* 0x0004 */ unsigned long allowedEnterpriseIdCount;
  /* 0x0008 */ wchar_t* enterpriseIdForUIEnforcement;
  /* 0x000c */ wchar_t* allowedEnterpriseIds[1];
}; /* size: 0x0010 */

