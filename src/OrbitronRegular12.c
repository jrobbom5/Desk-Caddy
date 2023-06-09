/*******************************************************************************
 * Size: 12 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ORBITRONREGULAR12
#define ORBITRONREGULAR12 1
#endif

#if ORBITRONREGULAR12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x66, 0x66, 0x66, 0x0, 0x60,

    /* U+0022 "\"" */
    0x66, 0x15,

    /* U+0023 "#" */
    0x1, 0x81, 0x80, 0x30, 0x24, 0x3f, 0xff, 0xd0,
    0x60, 0x60, 0x9, 0x9, 0x0, 0xc0, 0xc0, 0xbf,
    0xff, 0xc2, 0x41, 0x80, 0x30, 0x30, 0x0,

    /* U+0024 "$" */
    0x0, 0x90, 0x3, 0xff, 0xf8, 0x90, 0x90, 0xc9,
    0x9, 0x0, 0x90, 0x90, 0x3, 0xff, 0xf8, 0x0,
    0x90, 0xc0, 0x9, 0xc, 0x50, 0x90, 0xc3, 0xff,
    0xf8, 0x0, 0x90, 0x0, 0x4, 0x0,

    /* U+0025 "%" */
    0x2a, 0x0, 0x14, 0x50, 0x80, 0x70, 0x50, 0x81,
    0xc0, 0x2a, 0xb, 0x0, 0x0, 0x28, 0x0, 0x0,
    0xe1, 0xa4, 0x3, 0x42, 0x8, 0xd, 0x2, 0x8,
    0x10, 0x1, 0xa8,

    /* U+0026 "&" */
    0x1f, 0xff, 0x40, 0xc0, 0x3, 0x3, 0x0, 0x0,
    0xa, 0x0, 0x0, 0x37, 0x40, 0x1, 0x81, 0xd2,
    0x46, 0x0, 0xbd, 0x18, 0x0, 0x3d, 0x3f, 0xff,
    0xc8,

    /* U+0027 "'" */
    0x61,

    /* U+0028 "(" */
    0x35, 0x86, 0x18, 0x61, 0x86, 0x18, 0x34,

    /* U+0029 ")" */
    0x70, 0x92, 0x49, 0x24, 0x92, 0x49, 0x70,

    /* U+002A "*" */
    0x9, 0x5, 0xa8, 0x2f, 0x81, 0xf0, 0x21, 0x40,

    /* U+002B "+" */
    0x8, 0x3, 0xf, 0xfc, 0x30, 0xc, 0x0,

    /* U+002C "," */
    0x66, 0x0,

    /* U+002D "-" */
    0x7f, 0xd0,

    /* U+002E "." */
    0x60,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0xc0, 0x9, 0x0, 0x60, 0x6,
    0x0, 0x30, 0x3, 0x0, 0x24, 0x0, 0x40, 0x0,

    /* U+0030 "0" */
    0x3f, 0xff, 0xc6, 0x0, 0x1d, 0x60, 0x7, 0xd6,
    0x2, 0xc9, 0x60, 0xb0, 0x96, 0x38, 0x9, 0x7e,
    0x0, 0x97, 0x40, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0031 "1" */
    0xe, 0x3a, 0xa6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6,

    /* U+0032 "2" */
    0x3f, 0xff, 0xc2, 0x0, 0x9, 0x0, 0x0, 0x90,
    0x0, 0x9, 0x2f, 0xff, 0xc6, 0x0, 0x0, 0x60,
    0x0, 0x6, 0x0, 0x0, 0x7f, 0xff, 0xd0,

    /* U+0033 "3" */
    0x3f, 0xff, 0x46, 0x0, 0xc, 0x0, 0x0, 0xc0,
    0x0, 0xc, 0xb, 0xff, 0xc0, 0x0, 0x9, 0x0,
    0x0, 0x91, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0034 "4" */
    0x0, 0x2c, 0x0, 0x2f, 0x0, 0x2c, 0xc0, 0x2c,
    0x30, 0x2c, 0xc, 0x2c, 0x3, 0xf, 0xff, 0xf4,
    0x0, 0x30, 0x0, 0xc, 0x0,

    /* U+0035 "5" */
    0x7f, 0xff, 0xd6, 0x0, 0x0, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x7f, 0xff, 0xc0, 0x0, 0x9, 0x0,
    0x0, 0x92, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0036 "6" */
    0x3f, 0xff, 0x6, 0x0, 0x0, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x7f, 0xff, 0xc6, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0037 "7" */
    0xff, 0xf8, 0x0, 0xc, 0x0, 0x9, 0x0, 0x9,
    0x0, 0x9, 0x0, 0x9, 0x0, 0x9, 0x0, 0x9,
    0x0, 0x9,

    /* U+0038 "8" */
    0x3f, 0xff, 0xc6, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x3f, 0xff, 0xc6, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0039 "9" */
    0x3f, 0xff, 0xc6, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x3f, 0xff, 0xd0, 0x0, 0x9, 0x0,
    0x0, 0x90, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+003A ":" */
    0x60, 0x0, 0x0, 0x60,

    /* U+003B ";" */
    0x60, 0x0, 0x0, 0x66, 0x0,

    /* U+003C "<" */
    0x0, 0x82, 0xd7, 0x83, 0x40, 0x78, 0x1, 0xe0,
    0x4,

    /* U+003D "=" */
    0x7f, 0xfc, 0x0, 0x7, 0xff, 0xc0,

    /* U+003E ">" */
    0x50, 0x2, 0xd0, 0x7, 0x80, 0xe, 0x7, 0x83,
    0xc0, 0x10, 0x0,

    /* U+003F "?" */
    0xbf, 0xfd, 0x0, 0x0, 0xc0, 0x0, 0x30, 0x0,
    0xc, 0x0, 0x3, 0x2, 0xff, 0x40, 0x80, 0x0,
    0x0, 0x0, 0xc, 0x0, 0x0,

    /* U+0040 "@" */
    0x3f, 0xff, 0xc6, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x1a, 0x49, 0x62, 0x8, 0x96, 0x20, 0x89, 0x61,
    0xbf, 0xd6, 0x0, 0x0, 0x3f, 0xff, 0xd0,

    /* U+0041 "A" */
    0x3f, 0xff, 0xc6, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x97, 0xff, 0xfd, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x60, 0x0, 0x90,

    /* U+0042 "B" */
    0x7f, 0xff, 0x46, 0x0, 0xc, 0x60, 0x0, 0xc6,
    0x0, 0xc, 0x7f, 0xff, 0xc6, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x7f, 0xff, 0xc0,

    /* U+0043 "C" */
    0x3f, 0xff, 0xd6, 0x0, 0x0, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x60, 0x0, 0x6, 0x0, 0x0, 0x60,
    0x0, 0x6, 0x0, 0x0, 0x3f, 0xff, 0xd0,

    /* U+0044 "D" */
    0x7f, 0xff, 0xc6, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x96, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x7f, 0xff, 0xc0,

    /* U+0045 "E" */
    0x7f, 0xff, 0x98, 0x0, 0x6, 0x0, 0x1, 0x80,
    0x0, 0x7f, 0xfc, 0x18, 0x0, 0x6, 0x0, 0x1,
    0x80, 0x0, 0x7f, 0xff, 0x80,

    /* U+0046 "F" */
    0x7f, 0xff, 0x98, 0x0, 0x6, 0x0, 0x1, 0x80,
    0x0, 0x7f, 0xfc, 0x18, 0x0, 0x6, 0x0, 0x1,
    0x80, 0x0, 0x60, 0x0, 0x0,

    /* U+0047 "G" */
    0x3f, 0xff, 0xc6, 0x0, 0x8, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x60, 0xf, 0xd6, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0048 "H" */
    0x60, 0x0, 0x66, 0x0, 0x6, 0x60, 0x0, 0x66,
    0x0, 0x6, 0x7f, 0xff, 0xe6, 0x0, 0x6, 0x60,
    0x0, 0x66, 0x0, 0x6, 0x60, 0x0, 0x60,

    /* U+0049 "I" */
    0x33, 0x33, 0x33, 0x33, 0x30,

    /* U+004A "J" */
    0x0, 0x1, 0x80, 0x0, 0x60, 0x0, 0x18, 0x0,
    0x6, 0x0, 0x1, 0x80, 0x0, 0x60, 0x0, 0x1b,
    0x0, 0x6, 0x7f, 0xff, 0x40,

    /* U+004B "K" */
    0x60, 0x2, 0x98, 0x2, 0x86, 0x1, 0xc1, 0x80,
    0xc0, 0x7f, 0xd0, 0x18, 0xc, 0x6, 0x1, 0xc1,
    0x80, 0x28, 0x60, 0x2, 0x80,

    /* U+004C "L" */
    0x60, 0x0, 0x6, 0x0, 0x0, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x60, 0x0, 0x6, 0x0, 0x0, 0x60,
    0x0, 0x6, 0x0, 0x0, 0x7f, 0xff, 0xd0,

    /* U+004D "M" */
    0x74, 0x0, 0x39, 0xf0, 0x3, 0xa6, 0x70, 0x35,
    0x98, 0x72, 0x86, 0x60, 0xbc, 0x19, 0x80, 0x80,
    0x66, 0x0, 0x1, 0x98, 0x0, 0x6, 0x60, 0x0,
    0x18,

    /* U+004E "N" */
    0x74, 0x0, 0x97, 0xc0, 0x9, 0x67, 0x0, 0x96,
    0x1c, 0x9, 0x60, 0xa0, 0x96, 0x3, 0x49, 0x60,
    0xd, 0x96, 0x0, 0x7d, 0x60, 0x1, 0xd0,

    /* U+004F "O" */
    0x3f, 0xff, 0x86, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x96, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0050 "P" */
    0x7f, 0xff, 0x86, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x97, 0xff, 0xf8, 0x60,
    0x0, 0x6, 0x0, 0x0, 0x60, 0x0, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xff, 0x81, 0x80, 0x2, 0x46, 0x0, 0x9,
    0x18, 0x0, 0x24, 0x60, 0x0, 0x91, 0x80, 0x2,
    0x46, 0x0, 0x9, 0x18, 0x0, 0x34, 0x3f, 0xff,
    0xf4,

    /* U+0052 "R" */
    0x7f, 0xff, 0x86, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x97, 0xff, 0xf8, 0x60,
    0x1c, 0x6, 0x0, 0x70, 0x60, 0x1, 0xc0,

    /* U+0053 "S" */
    0x3f, 0xff, 0x86, 0x0, 0x8, 0x60, 0x0, 0x6,
    0x0, 0x0, 0x3f, 0xff, 0x80, 0x0, 0xc, 0x0,
    0x0, 0x96, 0x0, 0xc, 0x3f, 0xff, 0x80,

    /* U+0054 "T" */
    0xff, 0xff, 0xc0, 0x30, 0x0, 0xc, 0x0, 0x3,
    0x0, 0x0, 0xc0, 0x0, 0x30, 0x0, 0xc, 0x0,
    0x3, 0x0, 0x0, 0xc0, 0x0,

    /* U+0055 "U" */
    0x60, 0x0, 0x96, 0x0, 0x9, 0x60, 0x0, 0x96,
    0x0, 0x9, 0x60, 0x0, 0x96, 0x0, 0x9, 0x60,
    0x0, 0x96, 0x0, 0x9, 0x3f, 0xff, 0xc0,

    /* U+0056 "V" */
    0x70, 0x0, 0xd, 0x24, 0x0, 0x18, 0xc, 0x0,
    0x30, 0x9, 0x0, 0xa0, 0x3, 0x0, 0xc0, 0x2,
    0x82, 0x40, 0x0, 0xc3, 0x0, 0x0, 0x69, 0x0,
    0x0, 0x3c, 0x0,

    /* U+0057 "W" */
    0x60, 0xb, 0x0, 0x63, 0x0, 0xf0, 0xd, 0x24,
    0x19, 0x80, 0xc1, 0x82, 0x4c, 0x18, 0xc, 0x30,
    0xd3, 0x0, 0x96, 0x6, 0x30, 0x6, 0xd0, 0x3a,
    0x0, 0x3c, 0x2, 0xc0, 0x2, 0x80, 0x1c, 0x0,

    /* U+0058 "X" */
    0x30, 0x2, 0x81, 0xc0, 0x70, 0x7, 0xc, 0x0,
    0x2b, 0x40, 0x0, 0xe0, 0x0, 0x2b, 0x40, 0x7,
    0xc, 0x1, 0xc0, 0x70, 0x30, 0x2, 0x80,

    /* U+0059 "Y" */
    0x70, 0x0, 0xc2, 0x80, 0x30, 0xd, 0xa, 0x0,
    0x31, 0xc0, 0x1, 0xf0, 0x0, 0xd, 0x0, 0x0,
    0x90, 0x0, 0x9, 0x0, 0x0, 0x90, 0x0,

    /* U+005A "Z" */
    0x7f, 0xff, 0xd0, 0x0, 0x1c, 0x0, 0xb, 0x0,
    0x2, 0xc0, 0x0, 0xe0, 0x0, 0x38, 0x0, 0xd,
    0x0, 0x3, 0x40, 0x0, 0x7f, 0xff, 0xc0,

    /* U+005B "[" */
    0x75, 0x86, 0x18, 0x61, 0x86, 0x18, 0x74,

    /* U+005C "\\" */
    0x0, 0x3, 0x0, 0x3, 0x0, 0x6, 0x0, 0xa,
    0x0, 0x9, 0x0, 0xc, 0x0, 0xc, 0x0, 0x10,

    /* U+005D "]" */
    0x74, 0x92, 0x49, 0x24, 0x92, 0x49, 0x74,

    /* U+005F "_" */
    0x7f, 0xff, 0xd0,

    /* U+0060 "`" */
    0x45,

    /* U+0061 "a" */
    0x7f, 0xfd, 0x0, 0x6, 0x0, 0x6, 0x7f, 0xfe,
    0x60, 0x6, 0x60, 0x6, 0x3f, 0xfe,

    /* U+0062 "b" */
    0x60, 0x0, 0x60, 0x0, 0x7f, 0xfd, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x7f, 0xfd,

    /* U+0063 "c" */
    0x3f, 0xfe, 0x60, 0x0, 0x60, 0x0, 0x60, 0x0,
    0x60, 0x0, 0x60, 0x0, 0x3f, 0xfe,

    /* U+0064 "d" */
    0x0, 0x9, 0x0, 0x9, 0x7f, 0xfd, 0x90, 0x9,
    0x90, 0x9, 0x90, 0x9, 0x90, 0x9, 0x90, 0x9,
    0x7f, 0xfd,

    /* U+0065 "e" */
    0x3f, 0xfd, 0x60, 0x6, 0x60, 0x6, 0x7f, 0xfe,
    0x60, 0x0, 0x60, 0x0, 0x3f, 0xfe,

    /* U+0066 "f" */
    0x3f, 0x98, 0x7, 0xf9, 0x80, 0x60, 0x18, 0x6,
    0x1, 0x80, 0x60, 0x0,

    /* U+0067 "g" */
    0x3f, 0xfc, 0x60, 0x6, 0x90, 0x6, 0x90, 0x6,
    0x90, 0x6, 0x60, 0x6, 0x3f, 0xfe, 0x0, 0x6,
    0x0, 0x6, 0xf, 0xfc,

    /* U+0068 "h" */
    0x60, 0x0, 0x60, 0x0, 0x7f, 0xfd, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x60, 0x6,

    /* U+0069 "i" */
    0x60, 0x66, 0x66, 0x66, 0x60,

    /* U+006A "j" */
    0x0, 0xc0, 0x0, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,
    0xc7, 0xf8,

    /* U+006B "k" */
    0x60, 0x0, 0x60, 0x0, 0x60, 0xc, 0x60, 0x34,
    0x60, 0xd0, 0x7f, 0x80, 0x60, 0xd0, 0x60, 0x34,
    0x60, 0xc,

    /* U+006C "l" */
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x3c,

    /* U+006D "m" */
    0x7f, 0xff, 0xf8, 0x60, 0x28, 0x9, 0x60, 0x24,
    0x9, 0x60, 0x24, 0x9, 0x60, 0x24, 0x9, 0x60,
    0x24, 0x9, 0x60, 0x24, 0x9,

    /* U+006E "n" */
    0x7f, 0xfd, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x60, 0x6,

    /* U+006F "o" */
    0x3f, 0xfd, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x3f, 0xfd,

    /* U+0070 "p" */
    0x7f, 0xfd, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x7f, 0xfd, 0x60, 0x0,
    0x60, 0x0, 0x60, 0x0,

    /* U+0071 "q" */
    0x7f, 0xfd, 0x90, 0x9, 0xc0, 0x9, 0xc0, 0x9,
    0xc0, 0x9, 0x90, 0x9, 0x7f, 0xfd, 0x0, 0x9,
    0x0, 0x9, 0x0, 0x9,

    /* U+0072 "r" */
    0x3f, 0xf6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x0,

    /* U+0073 "s" */
    0x3f, 0xfc, 0x60, 0x1, 0x60, 0x0, 0x3f, 0xfc,
    0x0, 0x6, 0x10, 0x6, 0x3f, 0xfc,

    /* U+0074 "t" */
    0x60, 0x18, 0x7, 0xf9, 0x80, 0x60, 0x18, 0x6,
    0x1, 0x80, 0x3f, 0x80,

    /* U+0075 "u" */
    0x60, 0x6, 0x60, 0x6, 0x60, 0x6, 0x60, 0x6,
    0x60, 0x6, 0x60, 0x6, 0x3f, 0xfd,

    /* U+0076 "v" */
    0x60, 0x1, 0xc3, 0x0, 0x34, 0x1c, 0x6, 0x0,
    0xd0, 0xc0, 0x7, 0x28, 0x0, 0x27, 0x0, 0x0,
    0xe0, 0x0,

    /* U+0077 "w" */
    0x60, 0x1d, 0x2, 0x4c, 0xe, 0xc0, 0xc2, 0x43,
    0x34, 0x60, 0x32, 0x86, 0x30, 0xd, 0xc0, 0xdc,
    0x1, 0xe0, 0x2d, 0x0, 0x30, 0x3, 0x0,

    /* U+0078 "x" */
    0x34, 0xd, 0xc, 0x34, 0x7, 0xe0, 0x3, 0xc0,
    0x7, 0xa0, 0x1c, 0x34, 0x34, 0xd,

    /* U+0079 "y" */
    0x90, 0x6, 0x90, 0x6, 0x90, 0x6, 0x90, 0x6,
    0x90, 0x6, 0x60, 0x6, 0x3f, 0xfe, 0x0, 0x6,
    0x0, 0x6, 0xf, 0xfc,

    /* U+007A "z" */
    0x7f, 0xfe, 0x0, 0xd, 0x0, 0x74, 0x2, 0xc0,
    0xe, 0x0, 0x34, 0x0, 0x7f, 0xfe,

    /* U+007B "{" */
    0x28, 0xc3, 0x1c, 0x81, 0x83, 0xc, 0x28,

    /* U+007C "|" */
    0x16, 0x66, 0x66, 0x66, 0x66, 0x66,

    /* U+007D "}" */
    0x70, 0x92, 0x4a, 0xc, 0x62, 0x49, 0x70,

    /* U+007E "~" */
    0x50, 0x1, 0x40
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 42, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 71, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 153, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 151, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 60, .adv_w = 185, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 180, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 113, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 94, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 135, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 142, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 99, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 146, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 100, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 41, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 37, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 381, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 122, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 396, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 130, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 163, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 41, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 150, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 150, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 178, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 152, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 170, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 193, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 226, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1045, .adv_w = 100, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 159, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1071, .adv_w = 60, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1072, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1104, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 78, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1182, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 40, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 46, .box_w = 6, .box_h = 12, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1223, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 58, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1250, .adv_w = 188, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 134, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1285, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1299, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1319, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1339, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1364, .adv_w = 79, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 152, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1408, .adv_w = 206, .box_w = 13, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1445, .adv_w = 132, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1465, .adv_w = 134, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1479, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 41, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1492, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1499, .adv_w = 78, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 62, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 95, .range_length = 32, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    32, 86,
    34, 56,
    34, 58,
    35, 55,
    35, 58,
    37, 55,
    37, 59,
    38, 46,
    38, 48,
    39, 15,
    39, 43,
    39, 51,
    39, 53,
    39, 89,
    40, 56,
    44, 34,
    44, 41,
    45, 55,
    45, 56,
    45, 58,
    46, 67,
    48, 55,
    48, 56,
    48, 57,
    49, 34,
    49, 43,
    49, 68,
    49, 86,
    51, 55,
    51, 56,
    52, 47,
    52, 56,
    52, 58,
    53, 79,
    53, 83,
    53, 85,
    53, 87,
    53, 89,
    53, 90,
    55, 34,
    55, 48,
    55, 52,
    55, 79,
    55, 83,
    56, 34,
    56, 48,
    56, 65,
    56, 69,
    56, 73,
    56, 79,
    56, 85,
    57, 35,
    58, 52,
    58, 65,
    58, 69,
    58, 73,
    58, 79,
    58, 80,
    58, 83,
    58, 85,
    59, 58,
    65, 66,
    65, 67,
    65, 76,
    65, 77,
    65, 78,
    65, 82,
    65, 83,
    65, 86,
    65, 87,
    65, 88,
    65, 90,
    66, 68,
    67, 69,
    67, 72,
    67, 75,
    67, 84,
    67, 85,
    67, 90,
    68, 69,
    68, 79,
    68, 85,
    69, 67,
    69, 69,
    69, 76,
    69, 82,
    69, 86,
    69, 87,
    69, 88,
    70, 13,
    70, 84,
    70, 85,
    71, 65,
    71, 67,
    71, 69,
    71, 79,
    71, 82,
    71, 83,
    71, 85,
    71, 87,
    72, 65,
    72, 70,
    72, 73,
    73, 65,
    73, 67,
    73, 70,
    73, 78,
    73, 80,
    73, 81,
    73, 86,
    73, 88,
    74, 69,
    75, 69,
    76, 65,
    76, 68,
    76, 69,
    76, 77,
    76, 79,
    76, 86,
    76, 87,
    77, 75,
    77, 77,
    77, 87,
    78, 66,
    78, 67,
    78, 79,
    78, 80,
    78, 88,
    79, 65,
    79, 76,
    79, 78,
    79, 79,
    79, 82,
    79, 83,
    79, 84,
    79, 85,
    79, 86,
    79, 87,
    79, 88,
    80, 68,
    80, 73,
    80, 83,
    81, 85,
    82, 13,
    82, 15,
    82, 79,
    83, 67,
    83, 69,
    83, 75,
    83, 78,
    83, 85,
    83, 86,
    83, 88,
    83, 90,
    84, 66,
    84, 68,
    84, 72,
    84, 73,
    84, 90,
    85, 66,
    85, 67,
    85, 68,
    85, 69,
    85, 70,
    85, 77,
    85, 78,
    85, 80,
    85, 83,
    85, 84,
    85, 88,
    85, 90,
    86, 69,
    86, 79,
    86, 83,
    87, 69,
    87, 79,
    87, 82,
    87, 83,
    88, 69,
    89, 65,
    89, 67,
    89, 69,
    89, 76,
    89, 78,
    89, 79,
    90, 65,
    90, 69,
    90, 76,
    90, 84,
    90, 90
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    0, -6, -2, -9, -6, -6, -5, -6,
    -6, -25, -46, 1, 2, -4, -5, -6,
    -6, -44, -25, -34, -2, -5, -5, -7,
    2, -36, 2, 0, -4, -4, -4, -5,
    -2, -24, -23, -19, -16, -17, -20, -7,
    -6, -4, -6, -8, -5, -4, -3, -7,
    -2, -5, -4, -7, -7, -19, -23, -4,
    -23, -19, -22, -19, -2, -5, -2, -2,
    -4, -3, -1, -4, -4, -6, -3, -5,
    6, -5, -3, -4, -5, -4, -4, -4,
    -4, -4, -4, -3, -4, -1, -4, -6,
    -3, -35, 1, 2, -3, -3, -3, -4,
    -3, -4, -5, -4, 1, 2, 1, -7,
    -3, -9, -3, -5, -3, -1, -8, -4,
    -1, -2, 1, -3, -2, -2, -11, -12,
    -2, -2, -5, -4, -4, -3, -2, -5,
    -2, -4, -3, -4, -2, -4, -4, -4,
    -2, -7, -7, 5, 3, 2, -5, -47,
    -4, -1, -4, -3, -3, -4, -4, -4,
    -7, -4, 1, 4, 1, 1, 1, -3,
    -4, 2, -3, -2, -4, 1, -3, -3,
    -3, -3, -3, -6, -6, -5, -6, -4,
    -4, -3, -9, -4, -4, -4, 2, -3,
    -4, -5, -5, -4, -4, -4
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 190,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t OrbitronRegular12 = {
#else
lv_font_t OrbitronRegular12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ORBITRONREGULAR12*/

