typedef struct _PRIVATE_CACHE_MAP_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long DontUse : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadAheadActive : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ReadAheadEnabled : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 18 */
    /* 0x0000 */ unsigned long PipelineReadAheads : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long Available : 10; /* bit position: 22 */
  }; /* bitfield */
} PRIVATE_CACHE_MAP_FLAGS, *PPRIVATE_CACHE_MAP_FLAGS; /* size: 0x0004 */

