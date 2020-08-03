typedef union _GITS_TYPER_REGISTER
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Physical : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Virtual : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 CCT : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IMP_DEF : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 ITT_entry_size : 4; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 ID_Bits : 5; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Devbits : 5; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 SEIS : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned __int64 PTA : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned __int64 Reserved23_20 : 4; /* bit position: 20 */
      /* 0x0000 */ unsigned __int64 HCC : 8; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 CIDbits : 4; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 CIL : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 VMOVP : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 Reserved63_38 : 26; /* bit position: 38 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} GITS_TYPER_REGISTER, *PGITS_TYPER_REGISTER; /* size: 0x0008 */

