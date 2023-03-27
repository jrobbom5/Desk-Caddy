/*******************************************************************************
 * Size: 20 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef REDROSESEMIBOLD20
#define REDROSESEMIBOLD20 1
#endif

#if REDROSESEMIBOLD20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x3d, 0x7e, 0x7d, 0x3d, 0x3c, 0x3c, 0x2c, 0x18,
    0x0, 0x0, 0x18, 0x3e, 0x3d,

    /* U+0022 "\"" */
    0x78, 0xf7, 0x8f, 0x34, 0xe2, 0x8,

    /* U+0023 "#" */
    0x0, 0x2e, 0x2e, 0x0, 0xf, 0xf, 0x0, 0x3,
    0x87, 0x80, 0x2, 0xd2, 0xd0, 0xf, 0xff, 0xff,
    0x6, 0xfe, 0xfe, 0x40, 0x3c, 0x3c, 0x0, 0xf,
    0xf, 0x0, 0x7f, 0xff, 0xf8, 0x1b, 0xeb, 0xe9,
    0x1, 0xe1, 0xe0, 0x0, 0xb4, 0xb0, 0x0, 0x7c,
    0x7c, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x0, 0x0, 0x2d, 0x0, 0x2, 0xff,
    0xe0, 0x1f, 0xff, 0xfd, 0x3f, 0x6d, 0x6d, 0x3e,
    0x1c, 0x4, 0x3f, 0x1c, 0x0, 0x2f, 0xff, 0xe0,
    0xb, 0xff, 0xfc, 0x0, 0x2d, 0x7e, 0x10, 0x1c,
    0x2f, 0x34, 0x1c, 0x2f, 0x3e, 0x6d, 0x7e, 0x3f,
    0xff, 0xfc, 0x6, 0xff, 0xd0, 0x0, 0x2d, 0x0,

    /* U+0025 "%" */
    0x2f, 0x80, 0x78, 0xb6, 0xd0, 0xb0, 0xf1, 0xe1,
    0xd0, 0xf1, 0xe3, 0x80, 0x7f, 0xcb, 0x0, 0x19,
    0x1d, 0x0, 0x0, 0x38, 0x0, 0x0, 0xb0, 0x0,
    0x1, 0xd3, 0xf8, 0x3, 0x8f, 0xbd, 0xb, 0xf,
    0x1e, 0x1d, 0xf, 0x6d, 0x3c, 0x3, 0xf8,

    /* U+0026 "&" */
    0x0, 0xbf, 0x80, 0x0, 0x2, 0xff, 0xe0, 0x0,
    0x3, 0xf2, 0xf0, 0x0, 0x3, 0xe2, 0xf0, 0x0,
    0x2, 0xf7, 0xd0, 0x0, 0x0, 0xff, 0x81, 0x54,
    0x7, 0xff, 0x43, 0xf0, 0x1f, 0xdf, 0xd3, 0xe0,
    0x3f, 0x2, 0xff, 0xc0, 0x3e, 0x0, 0xbf, 0x80,
    0x3f, 0x0, 0xbf, 0xc0, 0x2f, 0xff, 0xfb, 0xf0,
    0x7, 0xff, 0x43, 0xfc,

    /* U+0027 "'" */
    0x79, 0xe3, 0x48,

    /* U+0028 "(" */
    0x0, 0xa0, 0x38, 0xe, 0x2, 0xc0, 0x3c, 0x3,
    0x80, 0x78, 0x7, 0x80, 0x78, 0x7, 0x80, 0x38,
    0x3, 0xc0, 0x1c, 0x0, 0xe0, 0x3, 0x80, 0xa,

    /* U+0029 ")" */
    0x34, 0x0, 0xe0, 0x7, 0x40, 0x3c, 0x1, 0xd0,
    0x1e, 0x0, 0xe0, 0xf, 0x0, 0xf0, 0xe, 0x1,
    0xe0, 0x2d, 0x3, 0xc0, 0x74, 0xd, 0x3, 0x40,

    /* U+002A "*" */
    0x7, 0x80, 0xee, 0xc3, 0xff, 0x43, 0xf4, 0x2e,
    0xf0, 0x22, 0x0,

    /* U+002B "+" */
    0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x7f, 0xfd,
    0x7f, 0xfd, 0x3, 0xc0, 0x3, 0xc0,

    /* U+002C "," */
    0x24, 0xfc, 0xbd, 0xd, 0x78, 0x10,

    /* U+002D "-" */
    0x3f, 0xf8, 0xff, 0xe0, 0x0, 0x0,

    /* U+002E "." */
    0x67, 0xfb, 0x80,

    /* U+002F "/" */
    0x0, 0x1f, 0x0, 0xb, 0x80, 0x3, 0xc0, 0x1,
    0xf0, 0x0, 0xb8, 0x0, 0x3c, 0x0, 0x1f, 0x0,
    0xb, 0x40, 0x3, 0xc0, 0x1, 0xf0, 0x0, 0xb4,
    0x0, 0x3c, 0x0, 0x1f, 0x0, 0xb, 0x40, 0x3,
    0xc0, 0x0, 0x90, 0x0,

    /* U+0030 "0" */
    0x1, 0xff, 0x80, 0xb, 0xff, 0xf0, 0x1f, 0x81,
    0xf8, 0x3f, 0x0, 0xbc, 0x3e, 0x0, 0x7d, 0x3e,
    0x0, 0x7d, 0x3e, 0x0, 0x7e, 0x3e, 0x0, 0x7d,
    0x3e, 0x0, 0x7d, 0x3f, 0x0, 0xbc, 0x1f, 0x81,
    0xf8, 0xb, 0xff, 0xf0, 0x1, 0xff, 0x80,

    /* U+0031 "1" */
    0x1, 0x90, 0xff, 0x83, 0xfe, 0x0, 0xf8, 0x3,
    0xe0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xf0,

    /* U+0032 "2" */
    0xb, 0xff, 0x40, 0xff, 0xff, 0x43, 0xe4, 0x3f,
    0x8, 0x0, 0xbc, 0x0, 0x3, 0xe0, 0x0, 0x2f,
    0x40, 0x2, 0xf8, 0x0, 0x2f, 0xc0, 0x2, 0xfc,
    0x0, 0x1f, 0x80, 0x0, 0xf8, 0x1, 0x4f, 0xff,
    0xfd, 0x7f, 0xff, 0xf4,

    /* U+0033 "3" */
    0xb, 0xff, 0x40, 0xff, 0xff, 0x43, 0xe4, 0x7f,
    0x9, 0x0, 0xfc, 0x0, 0x3, 0xf0, 0x0, 0x1f,
    0x40, 0x2f, 0xf8, 0x0, 0xbf, 0xf8, 0x0, 0x2,
    0xf8, 0x0, 0x3, 0xe3, 0x90, 0x2f, 0x8f, 0xff,
    0xfc, 0x1b, 0xff, 0x80,

    /* U+0034 "4" */
    0x0, 0xb, 0xf8, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x2f, 0xf8, 0x0, 0x3, 0xef, 0x80, 0x0, 0xfd,
    0xf8, 0x0, 0x1f, 0x5f, 0x80, 0x3, 0xf1, 0xf8,
    0x0, 0xbc, 0x1f, 0x80, 0x1f, 0x81, 0xf8, 0x3,
    0xff, 0xff, 0xfd, 0xbf, 0xff, 0xff, 0xc0, 0x0,
    0x1f, 0x80, 0x0, 0x1, 0xf8, 0x0,

    /* U+0035 "5" */
    0x1f, 0xff, 0xf4, 0x1f, 0xff, 0xf8, 0x1f, 0x40,
    0x4, 0x1f, 0x40, 0x0, 0x1f, 0x40, 0x0, 0x1f,
    0xff, 0xe0, 0x1f, 0xff, 0xfc, 0x0, 0x0, 0xfd,
    0x0, 0x0, 0x7d, 0x10, 0x0, 0x7d, 0x3d, 0x1,
    0xfc, 0x3f, 0xff, 0xf8, 0x1b, 0xff, 0xd0,

    /* U+0036 "6" */
    0x0, 0xbf, 0xe4, 0x7, 0xff, 0xfc, 0x1f, 0xd0,
    0x6c, 0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3e,
    0x7f, 0xe0, 0x3f, 0xff, 0xfc, 0x3f, 0x80, 0xbd,
    0x3f, 0x0, 0x7d, 0x2f, 0x0, 0x7d, 0x1f, 0x81,
    0xfc, 0x7, 0xff, 0xf8, 0x1, 0xbf, 0xd0,

    /* U+0037 "7" */
    0x7f, 0xff, 0xfc, 0x7f, 0xff, 0xf4, 0x50, 0x2,
    0xf0, 0x0, 0x7, 0xd0, 0x0, 0xf, 0xc0, 0x0,
    0x1f, 0x80, 0x0, 0x2f, 0x40, 0x0, 0x3f, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0xfc, 0x0, 0x0, 0xfc,
    0x0, 0x2, 0xf8, 0x0, 0x3, 0xf8, 0x0,

    /* U+0038 "8" */
    0x2, 0xff, 0x80, 0xf, 0xff, 0xf0, 0x1f, 0x82,
    0xf4, 0x2f, 0x1, 0xf4, 0x1f, 0x82, 0xf4, 0xb,
    0xff, 0xe0, 0xf, 0xff, 0xf0, 0x3f, 0x96, 0xfc,
    0x7e, 0x0, 0xbc, 0x7d, 0x0, 0xbd, 0x3f, 0x41,
    0xfc, 0x2f, 0xff, 0xf4, 0x6, 0xff, 0x90,

    /* U+0039 "9" */
    0x6, 0xff, 0x80, 0x1f, 0xff, 0xf0, 0x3f, 0x41,
    0xfc, 0x3e, 0x0, 0xbc, 0x3e, 0x0, 0xbd, 0x3f,
    0x41, 0xfd, 0x2f, 0xff, 0xfe, 0x7, 0xfe, 0x7d,
    0x0, 0x0, 0x7d, 0x0, 0x0, 0xfc, 0x2d, 0x6,
    0xf8, 0x3f, 0xff, 0xf0, 0x1b, 0xff, 0x40,

    /* U+003A ":" */
    0x7c, 0xbd, 0x24, 0x0, 0x0, 0x0, 0x24, 0xbd,
    0x7c,

    /* U+003B ";" */
    0x3d, 0x7d, 0x18, 0x0, 0x0, 0x0, 0x18, 0x7e,
    0x3f, 0xb, 0x2d, 0x10,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x1d, 0x2, 0xfd, 0x3f, 0xd0,
    0x7c, 0x0, 0x7f, 0x40, 0xb, 0xf8, 0x0, 0x7d,
    0x0, 0x5,

    /* U+003D "=" */
    0x7f, 0xff, 0x1f, 0xff, 0xc0, 0x0, 0x1, 0xff,
    0xfc, 0x7f, 0xff, 0x0,

    /* U+003E ">" */
    0x0, 0x0, 0x74, 0x0, 0x7f, 0x80, 0x7, 0xfc,
    0x0, 0x3d, 0x1, 0xfd, 0x2f, 0xe0, 0x7d, 0x0,
    0x50, 0x0,

    /* U+003F "?" */
    0x2f, 0xf4, 0x3f, 0xfe, 0x30, 0x3f, 0x0, 0x3f,
    0x0, 0xbd, 0x3, 0xf4, 0x7, 0x80, 0x7, 0x0,
    0x2, 0x0, 0x0, 0x0, 0x6, 0x0, 0xf, 0xc0,
    0xf, 0x40,

    /* U+0040 "@" */
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0xb,
    0x95, 0x7e, 0x2, 0xd0, 0x0, 0xb4, 0x74, 0x0,
    0x2, 0xcb, 0x0, 0x0, 0x1d, 0xe0, 0xbe, 0xe0,
    0xde, 0x1e, 0x2d, 0xe, 0xe1, 0xe2, 0xd0, 0xdf,
    0xf, 0xea, 0x2c, 0xb0, 0x0, 0x3f, 0x43, 0xc0,
    0x0, 0x0, 0x1f, 0x40, 0x60, 0x0, 0x2f, 0xfe,
    0x0, 0x0, 0x4, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x3f, 0xd0, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x7, 0xef, 0x0, 0x0, 0x3e, 0x3d, 0x0, 0x1,
    0xf4, 0xf8, 0x0, 0xb, 0xc1, 0xf0, 0x0, 0x3e,
    0x3, 0xe0, 0x1, 0xf0, 0xf, 0xc0, 0xf, 0xff,
    0xff, 0x40, 0x7f, 0xff, 0xfe, 0x2, 0xf0, 0x0,
    0xbc, 0xf, 0xc0, 0x1, 0xf8, 0xbf, 0x0, 0x7,
    0xf0,

    /* U+0042 "B" */
    0xbf, 0xff, 0xe0, 0x2f, 0xff, 0xff, 0xb, 0xd0,
    0xb, 0xd2, 0xf4, 0x1, 0xf8, 0xbd, 0x0, 0x7d,
    0x2f, 0x40, 0x2f, 0xb, 0xff, 0xff, 0x42, 0xff,
    0xff, 0xfc, 0xbd, 0x0, 0x2f, 0x6f, 0x40, 0x7,
    0xeb, 0xd0, 0x2, 0xf6, 0xff, 0xff, 0xfc, 0xbf,
    0xff, 0xf8, 0x0,

    /* U+0043 "C" */
    0x0, 0x7f, 0xfe, 0x41, 0xff, 0xff, 0xe0, 0xfe,
    0x0, 0x6c, 0xbd, 0x0, 0x0, 0x3f, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0xb, 0xd0, 0x0,
    0x0, 0xfe, 0x40, 0x6c, 0x1f, 0xff, 0xff, 0x0,
    0xbf, 0xfe, 0x0,

    /* U+0044 "D" */
    0xbf, 0xff, 0xe0, 0x2f, 0xff, 0xff, 0x4b, 0xd0,
    0x1b, 0xf2, 0xf4, 0x0, 0x7e, 0xbd, 0x0, 0xf,
    0xef, 0x40, 0x3, 0xfb, 0xd0, 0x0, 0xfe, 0xf4,
    0x0, 0x3f, 0xbd, 0x0, 0xf, 0xef, 0x40, 0x7,
    0xeb, 0xd0, 0x1b, 0xf2, 0xff, 0xff, 0xf4, 0xbf,
    0xff, 0xe0, 0x0,

    /* U+0045 "E" */
    0xbf, 0xff, 0xfe, 0x2f, 0xff, 0xff, 0xcb, 0xd0,
    0x1, 0x62, 0xf4, 0x0, 0x0, 0xbd, 0x0, 0x0,
    0x2f, 0x40, 0x4, 0xb, 0xff, 0xfe, 0x2, 0xff,
    0xff, 0x80, 0xbd, 0x0, 0x0, 0x2f, 0x40, 0x0,
    0xb, 0xd0, 0x0, 0x12, 0xff, 0xff, 0xfc, 0xbf,
    0xff, 0xff, 0x0,

    /* U+0046 "F" */
    0xbf, 0xff, 0xfe, 0xbf, 0xff, 0xff, 0xbd, 0x0,
    0x16, 0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd,
    0x0, 0x10, 0xbf, 0xff, 0xe0, 0xbf, 0xff, 0xe0,
    0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0,
    0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x7f, 0xfe, 0x40, 0x7f, 0xff, 0xf8, 0xf,
    0xe0, 0x6, 0xc2, 0xf4, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3e, 0x2, 0xff,
    0xd3, 0xe0, 0x2f, 0xfd, 0x3f, 0x0, 0x7, 0xd2,
    0xf4, 0x0, 0x7d, 0x1f, 0xd0, 0x1f, 0xd0, 0x7f,
    0xff, 0xfd, 0x0, 0xbf, 0xe7, 0xd0,

    /* U+0048 "H" */
    0xbd, 0x0, 0xf, 0xcb, 0xd0, 0x0, 0xbc, 0xbd,
    0x0, 0xb, 0xcb, 0xd0, 0x0, 0xbc, 0xbd, 0x0,
    0xb, 0xcb, 0xd0, 0x0, 0xbc, 0xbf, 0xff, 0xff,
    0xcb, 0xff, 0xff, 0xfc, 0xbd, 0x0, 0xb, 0xcb,
    0xd0, 0x0, 0xbc, 0xbd, 0x0, 0xb, 0xcb, 0xd0,
    0x0, 0xbc, 0xbd, 0x0, 0xf, 0xc0,

    /* U+0049 "I" */
    0xbd, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,
    0xbc, 0xbc, 0xbc, 0xbc, 0xbd,

    /* U+004A "J" */
    0x0, 0x7, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e,
    0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf,
    0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0, 0x3,
    0xe0, 0x40, 0x1f, 0x87, 0x90, 0xfd, 0x2f, 0xff,
    0xf0, 0x1b, 0xfe, 0x0,

    /* U+004B "K" */
    0xbd, 0x0, 0xff, 0xb, 0xd0, 0xf, 0xd0, 0xbd,
    0x0, 0xf8, 0xb, 0xd0, 0x2f, 0x0, 0xbd, 0x7,
    0xd0, 0xb, 0xd1, 0xf4, 0x0, 0xbf, 0xfe, 0x0,
    0xb, 0xff, 0xfc, 0x0, 0xbd, 0x7, 0xf4, 0xb,
    0xd0, 0xf, 0xc0, 0xbd, 0x0, 0x3f, 0xb, 0xd0,
    0x2, 0xf8, 0xbd, 0x0, 0x1f, 0xd0,

    /* U+004C "L" */
    0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0,
    0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd,
    0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0,
    0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0,
    0x5, 0xbf, 0xff, 0xfd, 0xbf, 0xff, 0xfd,

    /* U+004D "M" */
    0xbf, 0x40, 0x0, 0xff, 0x6f, 0xf0, 0x0, 0x3f,
    0xcb, 0xfd, 0x0, 0x2f, 0xf2, 0xff, 0x80, 0xf,
    0xfc, 0xbe, 0xf0, 0x7, 0xef, 0x2f, 0x7e, 0x3,
    0xeb, 0xcb, 0xdb, 0xc1, 0xf2, 0xf2, 0xf4, 0xf4,
    0xfc, 0xbc, 0xbd, 0x2f, 0x7d, 0x2f, 0x2f, 0x43,
    0xff, 0xb, 0xcb, 0xd0, 0xff, 0x42, 0xf2, 0xf4,
    0x1f, 0xc0, 0xbc, 0xbd, 0x3, 0xe0, 0x2f, 0x40,

    /* U+004E "N" */
    0xbf, 0x0, 0x1f, 0xaf, 0xd0, 0x3, 0xeb, 0xfd,
    0x0, 0xfa, 0xff, 0xc0, 0x3e, 0xbe, 0xfc, 0xf,
    0xaf, 0x5f, 0x83, 0xeb, 0xd2, 0xf4, 0xfa, 0xf4,
    0x3f, 0xbe, 0xbd, 0x3, 0xff, 0xaf, 0x40, 0x7f,
    0xeb, 0xd0, 0xb, 0xfa, 0xf4, 0x0, 0xfe, 0xbd,
    0x0, 0x1f, 0x80,

    /* U+004F "O" */
    0x0, 0xbf, 0xf9, 0x0, 0x1f, 0xff, 0xfe, 0x0,
    0xfd, 0x1, 0xfd, 0xb, 0xd0, 0x0, 0xfc, 0x3f,
    0x0, 0x2, 0xf0, 0xf8, 0x0, 0x7, 0xd3, 0xe0,
    0x0, 0x1f, 0x4f, 0x80, 0x0, 0x7d, 0x3f, 0x0,
    0x2, 0xf0, 0xbd, 0x0, 0xf, 0xc0, 0xfd, 0x1,
    0xfd, 0x1, 0xff, 0xff, 0xe0, 0x0, 0xbf, 0xf9,
    0x0,

    /* U+0050 "P" */
    0xbf, 0xff, 0xd0, 0xbf, 0xff, 0xf8, 0xbd, 0x1,
    0xfc, 0xbd, 0x0, 0x7d, 0xbd, 0x0, 0x7d, 0xbd,
    0x0, 0xbd, 0xbd, 0x1, 0xfc, 0xbf, 0xff, 0xf8,
    0xbf, 0xff, 0xd0, 0xbd, 0x0, 0x0, 0xbd, 0x0,
    0x0, 0xbd, 0x0, 0x0, 0xbd, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0xbf, 0xf9, 0x0, 0x1f, 0xff, 0xfe, 0x0,
    0xfd, 0x1, 0xfd, 0xb, 0xd0, 0x0, 0xfc, 0x3f,
    0x0, 0x2, 0xf0, 0xf8, 0x0, 0x7, 0xd3, 0xe0,
    0x0, 0x1f, 0x4f, 0x80, 0x0, 0x7d, 0x3f, 0x0,
    0x2, 0xf0, 0xbd, 0x0, 0xf, 0xc0, 0xfd, 0x1,
    0xfd, 0x1, 0xff, 0xff, 0xe0, 0x0, 0xbf, 0xf9,
    0x0, 0x2, 0xc7, 0xe0, 0xb0, 0x5, 0xb, 0xe2,
    0xc0, 0x0, 0xb, 0xfd, 0x0, 0x0, 0x6, 0x90,

    /* U+0052 "R" */
    0xbf, 0xff, 0xd0, 0xb, 0xff, 0xff, 0x80, 0xbd,
    0x1, 0xfc, 0xb, 0xd0, 0x7, 0xd0, 0xbd, 0x0,
    0x7d, 0xb, 0xd0, 0xb, 0xd0, 0xbd, 0x1, 0xfc,
    0xb, 0xff, 0xff, 0x40, 0xbf, 0xff, 0xd0, 0xb,
    0xd0, 0x7f, 0x40, 0xbd, 0x0, 0xfd, 0xb, 0xd0,
    0x3, 0xf0, 0xbd, 0x0, 0x3f, 0xc0,

    /* U+0053 "S" */
    0x2, 0xff, 0xfa, 0x1, 0xff, 0xff, 0xf0, 0x3f,
    0x40, 0x1b, 0x43, 0xf0, 0x0, 0x0, 0x3f, 0x40,
    0x0, 0x1, 0xff, 0xe9, 0x0, 0x7, 0xff, 0xfe,
    0x0, 0x1, 0xaf, 0xfc, 0x0, 0x0, 0xf, 0xc0,
    0x0, 0x0, 0x7d, 0x3e, 0x40, 0x1f, 0xc3, 0xff,
    0xff, 0xf8, 0x1b, 0xff, 0xf9, 0x0,

    /* U+0054 "T" */
    0x7f, 0xff, 0xff, 0x8b, 0xff, 0xff, 0xfc, 0x50,
    0x3f, 0x0, 0x40, 0x2, 0xf0, 0x0, 0x0, 0x2f,
    0x0, 0x0, 0x2, 0xf0, 0x0, 0x0, 0x2f, 0x0,
    0x0, 0x2, 0xf0, 0x0, 0x0, 0x2f, 0x0, 0x0,
    0x2, 0xf0, 0x0, 0x0, 0x2f, 0x0, 0x0, 0x2,
    0xf0, 0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0055 "U" */
    0xbd, 0x0, 0x2f, 0x6f, 0x0, 0x7, 0xdb, 0xc0,
    0x1, 0xf6, 0xf0, 0x0, 0x7d, 0xbc, 0x0, 0x1f,
    0x6f, 0x0, 0x7, 0xdb, 0xc0, 0x1, 0xf6, 0xf0,
    0x0, 0x7d, 0xbd, 0x0, 0x2f, 0x1f, 0x80, 0xf,
    0xc3, 0xf8, 0xb, 0xe0, 0x3f, 0xff, 0xf0, 0x2,
    0xff, 0xd0, 0x0,

    /* U+0056 "V" */
    0x7f, 0x40, 0x3, 0xf8, 0x2f, 0x80, 0x3, 0xf0,
    0xf, 0xc0, 0x7, 0xe0, 0xf, 0xc0, 0xf, 0xc0,
    0x7, 0xe0, 0xf, 0x80, 0x3, 0xf0, 0x2f, 0x40,
    0x2, 0xf4, 0x3f, 0x0, 0x0, 0xf8, 0x7d, 0x0,
    0x0, 0xbc, 0xbc, 0x0, 0x0, 0x3d, 0xf8, 0x0,
    0x0, 0x3f, 0xf0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0xf, 0xe0, 0x0,

    /* U+0057 "W" */
    0x3f, 0x0, 0xf, 0xf0, 0x0, 0xfd, 0x2f, 0x40,
    0x1f, 0xf4, 0x1, 0xfc, 0x1f, 0xc0, 0x2f, 0xf8,
    0x2, 0xf4, 0xf, 0xc0, 0x3e, 0xbc, 0x3, 0xf0,
    0xb, 0xd0, 0x3d, 0x7c, 0x7, 0xe0, 0x3, 0xe0,
    0x7c, 0x3d, 0xb, 0xc0, 0x3, 0xf0, 0xbc, 0x3e,
    0xf, 0xc0, 0x1, 0xf4, 0xf8, 0x2f, 0x1f, 0x40,
    0x0, 0xf8, 0xf4, 0xf, 0x6f, 0x0, 0x0, 0xbe,
    0xf0, 0xf, 0xbe, 0x0, 0x0, 0x7f, 0xe0, 0xb,
    0xfd, 0x0, 0x0, 0x3f, 0xd0, 0x7, 0xfc, 0x0,
    0x0, 0x2f, 0xd0, 0x3, 0xf8, 0x0,

    /* U+0058 "X" */
    0x3f, 0xc0, 0xb, 0xf0, 0x3f, 0x40, 0x3f, 0x40,
    0x7f, 0x3, 0xf4, 0x0, 0xbe, 0x2f, 0x80, 0x0,
    0xfe, 0xfc, 0x0, 0x0, 0xff, 0xc0, 0x0, 0x1,
    0xfd, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0xfe,
    0xfc, 0x0, 0xb, 0xe2, 0xf8, 0x0, 0x7f, 0x3,
    0xf4, 0x7, 0xf0, 0x3, 0xf0, 0x3f, 0x80, 0xb,
    0xf0,

    /* U+0059 "Y" */
    0x7f, 0x40, 0xb, 0xf0, 0x7f, 0x0, 0x3f, 0x0,
    0xbe, 0x3, 0xf4, 0x0, 0xfc, 0x2f, 0x80, 0x0,
    0xfc, 0xfc, 0x0, 0x1, 0xff, 0xc0, 0x0, 0x2,
    0xfc, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf, 0xc0,
    0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xff, 0x43, 0xff, 0xff, 0xe0, 0x10,
    0x2, 0xfc, 0x0, 0x0, 0x3f, 0x40, 0x0, 0xf,
    0xe0, 0x0, 0x2, 0xfc, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0xf, 0xd0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x43, 0xff,
    0xff, 0xfc, 0xbf, 0xff, 0xff, 0xc0,

    /* U+005B "[" */
    0x7f, 0xe, 0x3, 0x80, 0xe0, 0x38, 0xe, 0x3,
    0x80, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x38,
    0xe, 0x3, 0x80, 0xfc, 0x0, 0x0,

    /* U+005C "\\" */
    0x3c, 0x0, 0xf, 0x40, 0x2, 0xe0, 0x0, 0x3c,
    0x0, 0xf, 0x40, 0x2, 0xe0, 0x0, 0x3c, 0x0,
    0xf, 0x40, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0xf,
    0x40, 0x1, 0xe0, 0x0, 0x3c, 0x0, 0xf, 0x40,
    0x1, 0xe0, 0x0, 0x24,

    /* U+005D "]" */
    0x7f, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xc0, 0xf1, 0xfc, 0x0, 0x0,

    /* U+005E "^" */
    0x3, 0xc0, 0xb, 0xd0, 0xd, 0xb0, 0x2c, 0x34,
    0x34, 0x2c,

    /* U+005F "_" */
    0x6a, 0xaa, 0xab, 0xff, 0xff,

    /* U+0060 "`" */
    0x3c, 0x7, 0x40, 0xb0, 0x9,

    /* U+0061 "a" */
    0xb, 0xff, 0x80, 0x2f, 0xff, 0xf0, 0x19, 0x1,
    0xf8, 0x0, 0x0, 0xbc, 0xb, 0xfe, 0xbc, 0x2f,
    0xff, 0xfc, 0x3e, 0x0, 0xfc, 0x3e, 0x0, 0xfc,
    0x3f, 0xff, 0xfc, 0xb, 0xfd, 0xbc,

    /* U+0062 "b" */
    0x3f, 0x0, 0x0, 0x2f, 0x0, 0x0, 0x2f, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x2f, 0xbf, 0xd0, 0x2f,
    0xff, 0xf4, 0x2f, 0x80, 0xfc, 0x2f, 0x0, 0x7d,
    0x2f, 0x0, 0x3d, 0x2f, 0x0, 0x3d, 0x2f, 0x0,
    0x7d, 0x2f, 0x80, 0xfc, 0x2f, 0xff, 0xf4, 0x3f,
    0xbf, 0xd0,

    /* U+0063 "c" */
    0x2, 0xff, 0xd0, 0x7f, 0xff, 0xc3, 0xf0, 0x6,
    0xf, 0x40, 0x0, 0x7c, 0x0, 0x1, 0xf0, 0x0,
    0x3, 0xd0, 0x0, 0xf, 0xd0, 0x8, 0x1f, 0xff,
    0xf4, 0xb, 0xff, 0x40,

    /* U+0064 "d" */
    0x0, 0x0, 0xfc, 0x0, 0x0, 0xfc, 0x0, 0x0,
    0xfc, 0x0, 0x0, 0xfc, 0x7, 0xfe, 0xfc, 0x1f,
    0xff, 0xfc, 0x3f, 0x2, 0xfc, 0x3d, 0x0, 0xfc,
    0x7c, 0x0, 0xfc, 0x7c, 0x0, 0xfc, 0x3d, 0x0,
    0xfc, 0x3f, 0x2, 0xfc, 0x1f, 0xff, 0xfc, 0x7,
    0xfd, 0xfc,

    /* U+0065 "e" */
    0x2, 0xff, 0x40, 0x3f, 0xff, 0x83, 0xf0, 0x2f,
    0xf, 0x80, 0x3d, 0x7f, 0xff, 0xf5, 0xfa, 0xaa,
    0x93, 0xd0, 0x0, 0xf, 0xc0, 0x8, 0x1f, 0xff,
    0xf0, 0xb, 0xff, 0x80,

    /* U+0066 "f" */
    0x7, 0xff, 0x43, 0xff, 0xe1, 0xf4, 0x18, 0x7c,
    0x0, 0xf, 0x0, 0x3f, 0xff, 0xcf, 0xff, 0xe0,
    0x3d, 0x0, 0xf, 0x40, 0x3, 0xd0, 0x0, 0xf4,
    0x0, 0x3d, 0x0, 0xf, 0x40, 0x3, 0xd0, 0x1,
    0xf8, 0x0,

    /* U+0067 "g" */
    0x7, 0xfe, 0xfc, 0x1f, 0xff, 0xfc, 0x3f, 0x2,
    0xfc, 0x3d, 0x0, 0xfc, 0x7c, 0x0, 0xfc, 0x7c,
    0x0, 0xfc, 0x3d, 0x0, 0xfc, 0x3f, 0x2, 0xfc,
    0x1f, 0xff, 0xfc, 0x7, 0xfd, 0xfc, 0x0, 0x0,
    0xf8, 0x20, 0x0, 0xf8, 0x3d, 0x2, 0xf4, 0x3f,
    0xff, 0xe0, 0x1b, 0xff, 0x40,

    /* U+0068 "h" */
    0x3f, 0x0, 0x0, 0x2f, 0x0, 0x0, 0x2f, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x2f, 0x2f, 0x80, 0x2f,
    0xff, 0xf0, 0x2f, 0x81, 0xf4, 0x2f, 0x0, 0xf8,
    0x2f, 0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x2f, 0x0,
    0xfc, 0x2f, 0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x3f,
    0x0, 0xfc,

    /* U+0069 "i" */
    0x2d, 0xf, 0xc2, 0xd0, 0x0, 0x3f, 0xb, 0xc2,
    0xf0, 0xbc, 0x2f, 0xb, 0xc2, 0xf0, 0xbc, 0x2f,
    0xf, 0xc0,

    /* U+006A "j" */
    0x0, 0xb4, 0x3, 0xf0, 0xb, 0x40, 0x0, 0x0,
    0xfc, 0x2, 0xf0, 0xb, 0xc0, 0x2f, 0x0, 0xbc,
    0x2, 0xf0, 0xb, 0xc0, 0x2f, 0x0, 0xbc, 0x2,
    0xf0, 0xb, 0xc0, 0x3f, 0x10, 0xf8, 0xff, 0xc3,
    0xfd, 0x0,

    /* U+006B "k" */
    0x3f, 0x0, 0x0, 0x2f, 0x0, 0x0, 0x2f, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x2f, 0x3, 0xf0, 0x2f,
    0x3, 0xe0, 0x2f, 0x7, 0xc0, 0x2f, 0xf, 0x40,
    0x2f, 0xfe, 0x0, 0x2f, 0xfe, 0x0, 0x2f, 0x1f,
    0xc0, 0x2f, 0x3, 0xf0, 0x2f, 0x1, 0xf4, 0x3f,
    0x0, 0xfc,

    /* U+006C "l" */
    0x4, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,
    0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,

    /* U+006D "m" */
    0x3f, 0x3f, 0x81, 0xfe, 0x2, 0xff, 0xff, 0xbf,
    0xf8, 0x2f, 0x82, 0xfd, 0xf, 0xc2, 0xf0, 0xf,
    0xc0, 0x7d, 0x2f, 0x0, 0xf8, 0x3, 0xd2, 0xf0,
    0xf, 0x80, 0x3d, 0x2f, 0x0, 0xf8, 0x3, 0xd2,
    0xf0, 0xf, 0x80, 0x3d, 0x2f, 0x0, 0xf8, 0x3,
    0xd3, 0xf0, 0xf, 0x80, 0x7d,

    /* U+006E "n" */
    0x3f, 0x2f, 0x80, 0x2f, 0xff, 0xf0, 0x2f, 0x81,
    0xf4, 0x2f, 0x0, 0xf8, 0x2f, 0x0, 0xfc, 0x2f,
    0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x2f, 0x0, 0xfc,
    0x2f, 0x0, 0xfc, 0x3f, 0x0, 0xfc,

    /* U+006F "o" */
    0x2, 0xff, 0x80, 0x7f, 0xff, 0xc3, 0xf0, 0x1f,
    0x4f, 0x40, 0x3f, 0x7c, 0x0, 0xbd, 0xf0, 0x2,
    0xf3, 0xd0, 0xf, 0xcf, 0xc0, 0x7e, 0x1f, 0xff,
    0xf0, 0xb, 0xfe, 0x0,

    /* U+0070 "p" */
    0x3f, 0xbf, 0xd0, 0x2f, 0xfb, 0xf4, 0x2f, 0x40,
    0xbc, 0x2f, 0x0, 0x7d, 0x2f, 0x0, 0x3d, 0x2f,
    0x0, 0x3d, 0x2f, 0x0, 0x7d, 0x2f, 0x80, 0xfc,
    0x2f, 0xff, 0xf4, 0x2f, 0xbf, 0xd0, 0x2f, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x2f, 0x0, 0x0, 0x2f,
    0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0071 "q" */
    0x7, 0xfe, 0xfc, 0x1f, 0xff, 0xfc, 0x3f, 0x2,
    0xfc, 0x3d, 0x0, 0xfc, 0x7c, 0x0, 0xfc, 0x7c,
    0x0, 0xfc, 0x3d, 0x0, 0xfc, 0x3f, 0x2, 0xfc,
    0x1f, 0xff, 0xfc, 0x7, 0xfd, 0xfc, 0x0, 0x0,
    0xfc, 0x0, 0x0, 0xfc, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0xfc, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x40,

    /* U+0072 "r" */
    0x3f, 0x7f, 0x82, 0xff, 0xfc, 0x2f, 0x87, 0xc2,
    0xf0, 0x4, 0x2f, 0x0, 0x2, 0xf0, 0x0, 0x2f,
    0x0, 0x2, 0xf0, 0x0, 0x2f, 0x0, 0x3, 0xf0,
    0x0,

    /* U+0073 "s" */
    0xb, 0xff, 0x90, 0xff, 0xff, 0xc3, 0xe0, 0x6,
    0xf, 0xd0, 0x0, 0x2f, 0xff, 0x80, 0x1b, 0xff,
    0xd0, 0x0, 0x1f, 0x89, 0x0, 0x3e, 0x3f, 0xff,
    0xf4, 0x6f, 0xfe, 0x40,

    /* U+0074 "t" */
    0x3, 0xc0, 0x1, 0xf0, 0x0, 0xfc, 0x2, 0xff,
    0xfc, 0xbf, 0xff, 0x3, 0xf0, 0x0, 0xfc, 0x0,
    0x3f, 0x0, 0xf, 0xc0, 0x3, 0xf0, 0x0, 0xfc,
    0x30, 0x2f, 0xfc, 0x3, 0xfd, 0x0,

    /* U+0075 "u" */
    0x3f, 0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x2f, 0x0,
    0xfc, 0x2f, 0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x2f,
    0x0, 0xfc, 0x2f, 0x0, 0xfc, 0x1f, 0x42, 0xfc,
    0xf, 0xff, 0xfc, 0x3, 0xf8, 0xfc,

    /* U+0076 "v" */
    0x2f, 0x40, 0x2f, 0x43, 0xe0, 0xf, 0xc0, 0xbc,
    0x7, 0xd0, 0xf, 0x42, 0xf0, 0x3, 0xe0, 0xf8,
    0x0, 0x7c, 0x7c, 0x0, 0xf, 0x6e, 0x0, 0x2,
    0xff, 0x40, 0x0, 0x7f, 0xc0, 0x0, 0xf, 0xf0,
    0x0,

    /* U+0077 "w" */
    0x2f, 0x80, 0x3f, 0x80, 0x3f, 0x3, 0xe0, 0x1f,
    0xf0, 0xf, 0x80, 0xbc, 0xb, 0xbc, 0x7, 0xc0,
    0xf, 0x43, 0xdf, 0x43, 0xf0, 0x3, 0xe0, 0xf2,
    0xe0, 0xf4, 0x0, 0x7c, 0x78, 0x7c, 0x7c, 0x0,
    0xf, 0x6d, 0xf, 0x7e, 0x0, 0x2, 0xff, 0x2,
    0xef, 0x0, 0x0, 0x7f, 0xc0, 0x7f, 0xc0, 0x0,
    0xf, 0xe0, 0xf, 0xe0, 0x0,

    /* U+0078 "x" */
    0x1f, 0xc0, 0x3f, 0x40, 0xbd, 0xb, 0xd0, 0x2,
    0xf0, 0xf4, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0xff, 0xf0,
    0x0, 0x2f, 0xf, 0x80, 0x7, 0xd0, 0x7d, 0x1,
    0xfc, 0x3, 0xf4,

    /* U+0079 "y" */
    0xf, 0xc0, 0x1f, 0x80, 0xbc, 0x2, 0xf0, 0x3,
    0xd0, 0x3f, 0x0, 0x3f, 0x7, 0xd0, 0x1, 0xf0,
    0xbc, 0x0, 0xf, 0x4f, 0x80, 0x0, 0xbd, 0xf0,
    0x0, 0x3, 0xfe, 0x0, 0x0, 0x3f, 0xd0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0xf, 0x40, 0x4, 0x2,
    0xf0, 0x0, 0x70, 0x7d, 0x0, 0xb, 0xff, 0x80,
    0x0, 0x7f, 0xd0, 0x0, 0x0,

    /* U+007A "z" */
    0xbf, 0xff, 0xe2, 0xff, 0xff, 0x0, 0x2, 0xf4,
    0x0, 0x1f, 0x80, 0x0, 0xfc, 0x0, 0xb, 0xd0,
    0x0, 0x7e, 0x0, 0x3, 0xf0, 0x0, 0x2f, 0xff,
    0xf1, 0xff, 0xff, 0xc0,

    /* U+007B "{" */
    0x7, 0xc0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0,
    0xf0, 0xe, 0x2, 0xc0, 0x2d, 0x0, 0xe0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x7c,

    /* U+007C "|" */
    0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb,
    0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xd0,

    /* U+007D "}" */
    0x3d, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0,
    0xf0, 0xb, 0x0, 0x38, 0x7, 0x80, 0xb0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x7, 0xd0,

    /* U+007E "~" */
    0x0, 0x0, 0x3f, 0x83, 0x61, 0xfd, 0x0, 0x10
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 101, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 105, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 19, .adv_w = 230, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 203, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 110, .adv_w = 218, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 258, .box_w = 16, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 204, .adv_w = 102, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 228, .adv_w = 102, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 252, .adv_w = 115, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 263, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 277, .adv_w = 87, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 283, .adv_w = 120, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 289, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 138, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 328, .adv_w = 197, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 116, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 181, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 220, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 197, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 197, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 184, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 191, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 197, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 80, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 87, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 724, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 742, .adv_w = 128, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 754, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 772, .adv_w = 168, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 248, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 851, .adv_w = 235, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 227, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 220, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 237, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 221, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1072, .adv_w = 214, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 236, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 250, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 92, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1216, .adv_w = 175, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1252, .adv_w = 239, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 208, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 299, .box_w = 17, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1393, .adv_w = 241, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1436, .adv_w = 243, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 210, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 247, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1588, .adv_w = 234, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1634, .adv_w = 226, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 213, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1726, .adv_w = 235, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1769, .adv_w = 245, .box_w = 16, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1821, .adv_w = 385, .box_w = 24, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1899, .adv_w = 240, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1948, .adv_w = 235, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1997, .adv_w = 216, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2043, .adv_w = 76, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2065, .adv_w = 138, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2101, .adv_w = 76, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2123, .adv_w = 122, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2133, .adv_w = 166, .box_w = 10, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2138, .adv_w = 69, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 12},
    {.bitmap_index = 2143, .adv_w = 195, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2173, .adv_w = 193, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2215, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 195, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2285, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2313, .adv_w = 133, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2347, .adv_w = 195, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2392, .adv_w = 191, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2434, .adv_w = 83, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2452, .adv_w = 81, .box_w = 7, .box_h = 19, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2486, .adv_w = 186, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2528, .adv_w = 86, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2543, .adv_w = 296, .box_w = 18, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2588, .adv_w = 191, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2618, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 193, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2691, .adv_w = 195, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2739, .adv_w = 154, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2764, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2792, .adv_w = 136, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2822, .adv_w = 191, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2852, .adv_w = 187, .box_w = 13, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2885, .adv_w = 313, .box_w = 21, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2938, .adv_w = 192, .box_w = 14, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2973, .adv_w = 177, .box_w = 14, .box_h = 15, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 3026, .adv_w = 172, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3054, .adv_w = 95, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3078, .adv_w = 76, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3092, .adv_w = 95, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3116, .adv_w = 135, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    21, 18,
    21, 24,
    24, 13,
    24, 15,
    24, 21,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 87,
    34, 88,
    34, 90,
    37, 34,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 75,
    37, 90,
    39, 13,
    39, 15,
    39, 27,
    39, 28,
    39, 34,
    39, 36,
    39, 40,
    39, 48,
    39, 50,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 53,
    44, 54,
    44, 55,
    44, 56,
    44, 58,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    48, 34,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 75,
    48, 90,
    49, 13,
    49, 15,
    49, 27,
    49, 28,
    49, 34,
    49, 66,
    50, 34,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 75,
    50, 90,
    51, 36,
    51, 40,
    51, 48,
    51, 50,
    51, 53,
    51, 54,
    51, 58,
    51, 66,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    51, 86,
    51, 90,
    53, 13,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 43,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 80,
    53, 82,
    53, 84,
    53, 86,
    54, 34,
    55, 13,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 84,
    55, 91,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 84,
    56, 91,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    58, 13,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 80,
    58, 81,
    58, 82,
    58, 84,
    58, 86,
    59, 58,
    66, 87,
    66, 88,
    67, 53,
    67, 57,
    67, 87,
    67, 88,
    67, 89,
    67, 90,
    70, 53,
    70, 57,
    70, 87,
    70, 88,
    70, 89,
    70, 90,
    71, 11,
    71, 66,
    71, 67,
    71, 68,
    71, 69,
    71, 70,
    71, 71,
    71, 72,
    71, 73,
    71, 74,
    71, 76,
    71, 77,
    71, 80,
    71, 82,
    71, 84,
    72, 90,
    73, 87,
    73, 88,
    75, 90,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    78, 87,
    78, 88,
    79, 87,
    79, 88,
    80, 53,
    80, 57,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    81, 53,
    81, 57,
    81, 87,
    81, 88,
    81, 89,
    81, 90,
    82, 90,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 72,
    83, 80,
    83, 82,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 66,
    88, 68,
    88, 69,
    88, 70,
    88, 72,
    88, 80,
    88, 82,
    89, 66,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 13,
    90, 15,
    90, 68,
    90, 69,
    90, 70,
    90, 72,
    90, 80,
    90, 82,
    91, 90
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -12, -26, -18, -18, -25, -18, -18, -18,
    -18, -36, -15, -32, -32, -45, -26, -26,
    -19, -18, -14, -14, -12, -21, 12, 12,
    -19, -19, -9, -9, -32, -5, -5, -5,
    -5, -16, -17, -17, -15, -17, -17, -17,
    -17, -17, -17, -17, -13, -12, -18, -18,
    -18, -11, -15, -15, -15, -15, -15, -15,
    -17, -25, -25, -12, -12, -12, -12, -51,
    -36, -36, -58, -18, -14, -14, -12, -21,
    12, 12, -32, -32, -5, -5, -23, -6,
    -18, -14, -14, -12, -21, 12, 12, -17,
    -17, -17, -17, -16, -11, -13, -9, -17,
    -17, -17, -17, -17, -17, -15, -16, -22,
    -22, -9, -9, -36, -44, -26, -19, -19,
    -19, -19, -19, -19, -13, -13, -15, -28,
    -28, -15, -15, -34, -14, -14, -31, -14,
    -14, -19, -18, -18, -18, -18, -18, -18,
    -19, -6, -28, -28, -15, -15, -34, -14,
    -14, -31, -14, -14, -19, -18, -18, -18,
    -18, -18, -18, -19, -6, -12, -12, -12,
    -12, -9, -13, -13, -13, -13, -13, -13,
    -28, -28, -18, -18, -38, -21, -21, -37,
    -21, -21, -26, -32, -32, -32, -32, -32,
    -18, -32, -18, -16, -12, -10, -10, -20,
    -13, -10, -10, -12, -2, -20, -13, -10,
    -10, -12, -2, 17, -13, -13, -12, -12,
    -12, -19, -12, -13, -9, -13, -13, -12,
    -12, -6, 4, -10, -10, 10, -11, -11,
    -11, -11, -11, -11, -10, -10, -10, -10,
    -20, -13, -10, -10, -12, -2, -20, -13,
    -10, -10, -12, -2, 11, -10, -10, -10,
    -10, -10, -10, -10, -19, -19, -4, -10,
    -10, -10, -10, -10, -10, -19, -19, -4,
    -10, -10, -10, -10, -10, -10, -6, -12,
    -12, -12, -12, -12, -12, -19, -19, -10,
    -10, -10, -10, -10, -10, -9
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 286,
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
    .cmap_num = 1,
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
const lv_font_t RedRoseSemiBold20 = {
#else
lv_font_t RedRoseSemiBold20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if REDROSESEMIBOLD20*/

