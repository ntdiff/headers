typedef union _FIELD_VALUE
{
  union
  {
    /* 0x0000 */ unsigned char FieldByteValue;
    /* 0x0000 */ unsigned short FieldShortValue;
    /* 0x0000 */ unsigned long FieldLongValue;
    /* 0x0000 */ unsigned __int64 FieldLong64Value;
    /* 0x0000 */ unsigned char FieldByteArrayValue[16];
  }; /* size: 0x0010 */
} FIELD_VALUE, *PFIELD_VALUE; /* size: 0x0010 */

