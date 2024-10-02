typedef enum _MI_CROSS_PARTITION_CHARGE_TYPE
{
  MiCrossPartitionSectionResAvailCharge = 0,
  MiCrossPartitionSectionCommitCharge = 1,
  MiCrossPartitionLargePageResAvailCharge = 2,
  MiCrossPartitionLargePageCommitCharge = 3,
  MiCrossPartitionSmallAweResAvailCharge = 4,
  MiCrossPartitionSmallAweCommitCharge = 5,
  MiCrossPartitionPageCloneResAvailCharge = 6,
  MiCrossPartitionAggregateResAvailCharge = 7,
  MiCrossPartitionAggregateCommitCharge = 8,
  MiCrossPartitionMaximumCharge = 9,
} MI_CROSS_PARTITION_CHARGE_TYPE, *PMI_CROSS_PARTITION_CHARGE_TYPE;

