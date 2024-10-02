typedef struct _MI_BEST_LARGE_PAGE_CANDIDATES_CONTEXT
{
  /* 0x0000 */ unsigned long BestCandidateCountMax;
  /* 0x0004 */ unsigned long BestCandidateCount;
  /* 0x0008 */ unsigned long BestCandidatesTried;
  /* 0x000c */ unsigned long CandidateUsed;
  /* 0x0010 */ unsigned __int64 NextLargePage;
  /* 0x0018 */ unsigned __int64 BestCandidatesBasePage[8];
} MI_BEST_LARGE_PAGE_CANDIDATES_CONTEXT, *PMI_BEST_LARGE_PAGE_CANDIDATES_CONTEXT; /* size: 0x0058 */

