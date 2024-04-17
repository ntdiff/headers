typedef enum _TLG_AGGREGATE_OPTIONS
{
  TlgAggregateOptionFlushNone = 0,
  TlgAggregateOptionFlushNormal = 1,
  TlgAggregateOptionFlushHigh = 2,
  TlgAggregateOptionFlushInvalid = 3,
  TlgAggregateOptionFlushMask = 15,
  TlgAggregateOptionPaged = 0xffff8000,
} TLG_AGGREGATE_OPTIONS, *PTLG_AGGREGATE_OPTIONS;

