typedef enum _SYSTEM_VA_TYPE
{
  SystemVaTypeAll = 0,
  SystemVaTypeNonPagedPool = 1,
  SystemVaTypePagedPool = 2,
  SystemVaTypeSystemCache = 3,
  SystemVaTypeSystemPtes = 4,
  SystemVaTypeSessionSpace = 5,
  SystemVaTypeMax = 6,
} SYSTEM_VA_TYPE, *PSYSTEM_VA_TYPE;

