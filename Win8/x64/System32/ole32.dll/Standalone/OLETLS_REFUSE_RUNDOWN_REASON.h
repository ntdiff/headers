enum OLETLS_REFUSE_RUNDOWN_REASON
{
  DontRefuse = 0,
  RefuseDueToInMarshalingDuringSameProcessCall = 1,
  RefuseDueToOutMarshalingDuringSameProcessCall = 2,
  RefuseDueToInMarshalingDuringCrossProcessCall = 3,
  RefuseDueToOutMarshalingDuringCrossProcessCall = 4,
  RefuseDueToSameProcessDirectMarshaling = 5,
};

