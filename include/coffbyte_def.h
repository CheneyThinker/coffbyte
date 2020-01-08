#pragma once

#ifndef COFFBYTE_DEF_H
#define COFFBYTE_DEF_H

#include <stdio.h>
#include <string.h>

typedef char  byte;
typedef short word;
typedef int   dword;
typedef long  ddword;

#define LITTLE_ENDIAN

#ifdef LITTLE_ENDIAN
  #define swap_word(origin) ((origin << 8 & 0XFF00) | (origin >> 8 & 0X00FF))
  #define swap_dword(origin) ((origin << 24 & 0XFF000000) | (origin <<  8 & 0X00FF0000) | (origin >> 24 & 0X000000FF) | (origin >>  8 & 0X0000FF00))
  #define swap_ddword(origin) ((origin << 56 & 0XFF00000000000000) | (origin << 48 & 0X00FF000000000000) | (origin << 24 & 0X0000FF0000000000) | (origin <<  8 & 0X000000FF00000000) | (origin >> 56 & 0X00000000000000FF) | (origin >> 48 & 0X000000000000FF00) | (origin >> 24 & 0X0000000000FF0000) | (origin >> 8 & 0X000000000FF000000))
#else
  #define swap_word(origin) origin
  #define swap_dword(origin) origin
  #define swap_ddword(origin) origin
#endif

/*
typedef union _ENDIAN {
  char  byte;
  short dword;
} ENDIAN;
ENDIAN endian;
endian.dword = 0x1234;
if (endian.byte == 0x12) {//BIG_ENDIAN
} else if (endian.byte == 0x34) {//LITTLE_ENDIAN
}
*/

#endif
