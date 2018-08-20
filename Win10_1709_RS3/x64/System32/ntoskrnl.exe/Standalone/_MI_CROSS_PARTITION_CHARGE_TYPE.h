typedef enum _MI_CROSS_PARTITION_CHARGE_TYPE
{
  MiCrossPartitionSectionResAvailCharge = 0,
  MiCrossPartitionSectionCommitCharge = 1,
  MiCrossPartitionPageCombineResAvailCharge = 2,
  MiCrossPartitionPageCombineCommitCharge = 3,
  MiCrossPartitionPageCloneResAvailCharge = 4,
  MiCrossPartitionMaximumCharge = 5,
} MI_CROSS_PARTITION_CHARGE_TYPE, *PMI_CROSS_PARTITION_CHARGE_TYPE;

