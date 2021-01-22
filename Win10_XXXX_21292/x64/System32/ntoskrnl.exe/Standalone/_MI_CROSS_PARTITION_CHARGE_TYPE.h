typedef enum _MI_CROSS_PARTITION_CHARGE_TYPE
{
  MiCrossPartitionSectionResAvailCharge = 0,
  MiCrossPartitionSectionCommitCharge = 1,
  MiCrossPartitionPageCombineResAvailCharge = 2,
  MiCrossPartitionPageCombineCommitCharge = 3,
  MiCrossPartitionLargePageResAvailCharge = 4,
  MiCrossPartitionLargePageCommitCharge = 5,
  MiCrossPartitionPageCloneResAvailCharge = 6,
  MiCrossPartitionAggregateResAvailCharge = 7,
  MiCrossPartitionAggregateCommitCharge = 8,
  MiCrossPartitionMaximumCharge = 9,
} MI_CROSS_PARTITION_CHARGE_TYPE, *PMI_CROSS_PARTITION_CHARGE_TYPE;

