typedef enum _MI_ALTERNATE_LOCK_VA_TYPE
{
  AlternateLockVaTypeSystemPtes = 0,
  AlternateLockVaTypeNonPagedPool = 1,
  AlternateLockVaTypeUser = 2,
  AlternateLockVaTypeSystem = 3,
  AlternateLockVaTypeMaximum = 4,
} MI_ALTERNATE_LOCK_VA_TYPE, *PMI_ALTERNATE_LOCK_VA_TYPE;

