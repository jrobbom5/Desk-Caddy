/*******************************************************************************
 * Size: 10 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ORBITRONREGULAR10
#define ORBITRONREGULAR10 1
#endif

#if ORBITRONREGULAR10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x55, 0x55, 0x50, 0x50,

    /* U+0022 "\"" */
    0x5c, 0x10,

    /* U+0023 "#" */
    0x2, 0x8, 0x7f, 0xfe, 0xc, 0x14, 0x8, 0x30,
    0xbf, 0xfd, 0x30, 0x50, 0x20, 0x80,

    /* U+0024 "$" */
    0x0, 0x0, 0x1, 0x40, 0x7f, 0xfd, 0x81, 0x41,
    0x81, 0x40, 0x7f, 0xfd, 0x1, 0x42, 0x41, 0x42,
    0x7f, 0xfd, 0x1, 0x40,

    /* U+0025 "%" */
    0x0, 0x0, 0x6, 0x90, 0x4, 0x82, 0x7, 0x2,
    0x92, 0x80, 0x0, 0xa6, 0x80, 0x34, 0x85, 0x1d,
    0x8, 0x51, 0x0, 0xa8,

    /* U+0026 "&" */
    0x2f, 0xfc, 0x3, 0x0, 0x10, 0x30, 0x0, 0x6,
    0xa0, 0x0, 0x50, 0xa3, 0x5, 0x0, 0xb4, 0x3f,
    0xfd, 0x40,

    /* U+0027 "'" */
    0x50,

    /* U+0028 "(" */
    0x31, 0x45, 0x14, 0x51, 0x43, 0x0,

    /* U+0029 ")" */
    0x60, 0xc3, 0xc, 0x30, 0xc6, 0x0,

    /* U+002A "*" */
    0xc, 0x2b, 0x92, 0xd0, 0xd8, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x6, 0xb, 0xf0, 0x60, 0x18, 0x0,

    /* U+002C "," */
    0x54, 0x0,

    /* U+002D "-" */
    0x7f, 0x40,

    /* U+002E "." */
    0x50,

    /* U+002F "/" */
    0x0, 0x0, 0x8, 0x1, 0x40, 0x60, 0x8, 0x2,
    0x0, 0x90, 0x4, 0x0,

    /* U+0030 "0" */
    0x3f, 0xfd, 0x50, 0xf, 0x50, 0x73, 0x51, 0x83,
    0x5a, 0x3, 0x74, 0x3, 0x3f, 0xfe,

    /* U+0031 "1" */
    0x2c, 0x6c, 0xc, 0xc, 0xc, 0xc, 0xc,

    /* U+0032 "2" */
    0x3f, 0xfe, 0x0, 0x3, 0x0, 0x3, 0x3f, 0xfd,
    0x50, 0x0, 0x50, 0x0, 0x7f, 0xfe,

    /* U+0033 "3" */
    0x3f, 0xfc, 0x0, 0x5, 0x0, 0x5, 0xf, 0xfe,
    0x0, 0x3, 0x0, 0x3, 0x3f, 0xfd,

    /* U+0034 "4" */
    0x0, 0xb0, 0x3, 0x70, 0xc, 0x30, 0x60, 0x30,
    0xff, 0xfc, 0x0, 0x30, 0x0, 0x30,

    /* U+0035 "5" */
    0x7f, 0xfe, 0x50, 0x0, 0x50, 0x0, 0x7f, 0xfd,
    0x0, 0x3, 0x0, 0x3, 0x3f, 0xfe,

    /* U+0036 "6" */
    0x3f, 0xf4, 0x50, 0x0, 0x50, 0x0, 0x7f, 0xfd,
    0x50, 0x3, 0x50, 0x3, 0x3f, 0xfe,

    /* U+0037 "7" */
    0xff, 0xe0, 0x0, 0xc0, 0x3, 0x0, 0xc, 0x0,
    0x30, 0x0, 0xc0, 0x3, 0x0,

    /* U+0038 "8" */
    0x3f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x7a, 0xae,
    0x50, 0x3, 0x50, 0x3, 0x3f, 0xfe,

    /* U+0039 "9" */
    0x3f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x3f, 0xff,
    0x0, 0x3, 0x0, 0x3, 0x3f, 0xfd,

    /* U+003A ":" */
    0x50, 0x0, 0x5,

    /* U+003B ";" */
    0x50, 0x0, 0x4, 0x50,

    /* U+003C "<" */
    0x2, 0x7, 0x4e, 0x2, 0x80, 0x1d, 0x0, 0x40,

    /* U+003D "=" */
    0x7f, 0xe0, 0x0, 0x7f, 0xe0,

    /* U+003E ">" */
    0x50, 0xb, 0x0, 0x34, 0x1d, 0x28, 0x14, 0x0,

    /* U+003F "?" */
    0xbf, 0xf4, 0x0, 0x20, 0x0, 0x83, 0xfd, 0x14,
    0x0, 0x0, 0x1, 0x40, 0x0,

    /* U+0040 "@" */
    0x3f, 0xfd, 0x52, 0x93, 0x54, 0x23, 0x54, 0x23,
    0x52, 0xaa, 0x50, 0x0, 0x3f, 0xfe,

    /* U+0041 "A" */
    0x3f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x7f, 0xff,
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3,

    /* U+0042 "B" */
    0x7f, 0xfc, 0x50, 0x5, 0x50, 0x5, 0x7f, 0xfe,
    0x50, 0x3, 0x50, 0x3, 0x7f, 0xfd,

    /* U+0043 "C" */
    0x3f, 0xfe, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0,
    0x50, 0x0, 0x50, 0x0, 0x3f, 0xfe,

    /* U+0044 "D" */
    0x7f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3,
    0x50, 0x3, 0x50, 0x3, 0x7f, 0xfd,

    /* U+0045 "E" */
    0x7f, 0xfc, 0x50, 0x0, 0x50, 0x0, 0x7f, 0xf0,
    0x50, 0x0, 0x50, 0x0, 0x7f, 0xfc,

    /* U+0046 "F" */
    0x7f, 0xfc, 0x50, 0x0, 0x50, 0x0, 0x7f, 0xf0,
    0x50, 0x0, 0x50, 0x0, 0x50, 0x0,

    /* U+0047 "G" */
    0x3f, 0xfd, 0x50, 0x1, 0x50, 0x0, 0x50, 0x2e,
    0x50, 0x3, 0x50, 0x3, 0x3f, 0xfd,

    /* U+0048 "H" */
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x7f, 0xff,
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3,

    /* U+0049 "I" */
    0x55, 0x55, 0x55, 0x50,

    /* U+004A "J" */
    0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8,
    0x0, 0x8, 0x80, 0x8, 0xbf, 0xfc,

    /* U+004B "K" */
    0x50, 0xc, 0x50, 0x30, 0x50, 0xd0, 0x7f, 0x80,
    0x50, 0xd0, 0x50, 0x30, 0x50, 0xc,

    /* U+004C "L" */
    0x50, 0x0, 0x50, 0x0, 0x50, 0x0, 0x50, 0x0,
    0x50, 0x0, 0x50, 0x0, 0x7f, 0xfe,

    /* U+004D "M" */
    0x70, 0x2, 0xdb, 0x2, 0x75, 0x72, 0x8d, 0x47,
    0x83, 0x50, 0x40, 0xd4, 0x0, 0x35, 0x0, 0xc,

    /* U+004E "N" */
    0x70, 0x3, 0x6c, 0x3, 0x57, 0x3, 0x51, 0x83,
    0x50, 0xa3, 0x50, 0x27, 0x50, 0xb,

    /* U+004F "O" */
    0x3f, 0xfd, 0x50, 0x2, 0x50, 0x2, 0x50, 0x2,
    0x50, 0x2, 0x50, 0x2, 0x3f, 0xfd,

    /* U+0050 "P" */
    0x7f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x7f, 0xfd,
    0x50, 0x0, 0x50, 0x0, 0x50, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xfd, 0x14, 0x0, 0x85, 0x0, 0x21, 0x40,
    0x8, 0x50, 0x2, 0x14, 0x0, 0xc3, 0xff, 0xf8,

    /* U+0052 "R" */
    0x7f, 0xfd, 0x50, 0x3, 0x50, 0x3, 0x7f, 0xfd,
    0x50, 0x30, 0x50, 0x18, 0x50, 0x9,

    /* U+0053 "S" */
    0x3f, 0xfd, 0x50, 0x1, 0x50, 0x0, 0x3f, 0xfd,
    0x0, 0x2, 0x0, 0x2, 0x3f, 0xfd,

    /* U+0054 "T" */
    0xbf, 0xfd, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0,
    0x2, 0x0, 0x2, 0x0, 0x2, 0x0,

    /* U+0055 "U" */
    0x50, 0x2, 0x50, 0x2, 0x50, 0x2, 0x50, 0x2,
    0x50, 0x2, 0x50, 0x2, 0x3f, 0xfd,

    /* U+0056 "V" */
    0x60, 0x0, 0x92, 0x0, 0x8, 0xc, 0x3, 0x0,
    0x90, 0x60, 0x3, 0xc, 0x0, 0x1a, 0x40, 0x0,
    0xe0, 0x0,

    /* U+0057 "W" */
    0x50, 0x38, 0x9, 0x30, 0x2c, 0xc, 0x20, 0x99,
    0x18, 0x18, 0xc2, 0x20, 0xd, 0x83, 0x30, 0xb,
    0x1, 0xd0, 0x3, 0x0, 0xc0,

    /* U+0058 "X" */
    0x30, 0xc, 0x1c, 0x24, 0x6, 0x90, 0x2, 0x80,
    0x6, 0x90, 0x1c, 0x24, 0x30, 0xc,

    /* U+0059 "Y" */
    0x60, 0x9, 0x24, 0x18, 0xd, 0x30, 0x3, 0xc0,
    0x1, 0x40, 0x1, 0x40, 0x1, 0x40,

    /* U+005A "Z" */
    0x7f, 0xfe, 0x0, 0xd, 0x0, 0x70, 0x2, 0x80,
    0xa, 0x0, 0x34, 0x0, 0x7f, 0xfe,

    /* U+005B "[" */
    0x71, 0x45, 0x14, 0x51, 0x47, 0x0,

    /* U+005C "\\" */
    0x0, 0x8, 0x0, 0x20, 0x1, 0x40, 0x8, 0x0,
    0x20, 0x0, 0x80, 0x4,

    /* U+005D "]" */
    0x70, 0xc3, 0xc, 0x30, 0xc7, 0x0,

    /* U+005F "_" */
    0x7f, 0xfe,

    /* U+0060 "`" */
    0xc, 0x0,

    /* U+0061 "a" */
    0x7f, 0xf0, 0x0, 0x57, 0xff, 0x54, 0x5, 0x50,
    0x14, 0xff, 0xd0,

    /* U+0062 "b" */
    0x50, 0x1, 0x40, 0x7, 0xff, 0x14, 0x5, 0x50,
    0x15, 0x40, 0x55, 0x1, 0x5f, 0xfc,

    /* U+0063 "c" */
    0x3f, 0xf5, 0x40, 0x5, 0x0, 0x14, 0x0, 0x50,
    0x0, 0xff, 0xd0,

    /* U+0064 "d" */
    0x0, 0x20, 0x0, 0x87, 0xff, 0x30, 0x8, 0xc0,
    0x23, 0x0, 0x8c, 0x2, 0x1f, 0xfc,

    /* U+0065 "e" */
    0x3f, 0xf1, 0x40, 0x57, 0xff, 0x54, 0x0, 0x50,
    0x0, 0xff, 0xd0,

    /* U+0066 "f" */
    0x3e, 0x50, 0x7e, 0x50, 0x50, 0x50, 0x50, 0x50,

    /* U+0067 "g" */
    0x7f, 0xf2, 0x0, 0x98, 0x2, 0x60, 0x9, 0x80,
    0x25, 0xff, 0xd0, 0x2, 0x47, 0xfc,

    /* U+0068 "h" */
    0x50, 0x1, 0x40, 0x7, 0xff, 0x14, 0x5, 0x50,
    0x15, 0x40, 0x55, 0x1, 0x54, 0x5,

    /* U+0069 "i" */
    0x50, 0x55, 0x55, 0x55,

    /* U+006A "j" */
    0x2, 0x0, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0xfd,

    /* U+006B "k" */
    0x50, 0x1, 0x40, 0x5, 0x6, 0x14, 0x60, 0x7f,
    0x1, 0x49, 0x5, 0xc, 0x14, 0xc,

    /* U+006C "l" */
    0x51, 0x45, 0x14, 0x51, 0x45, 0xe,

    /* U+006D "m" */
    0x7f, 0xff, 0xc5, 0x5, 0x5, 0x50, 0x50, 0x55,
    0x5, 0x5, 0x50, 0x50, 0x55, 0x5, 0x5,

    /* U+006E "n" */
    0x7f, 0xf1, 0x40, 0x55, 0x1, 0x54, 0x5, 0x50,
    0x15, 0x40, 0x50,

    /* U+006F "o" */
    0x3f, 0xf1, 0x40, 0x55, 0x1, 0x54, 0x5, 0x50,
    0x14, 0xff, 0xc0,

    /* U+0070 "p" */
    0x7f, 0xf1, 0x40, 0x55, 0x1, 0x54, 0x5, 0x50,
    0x15, 0xff, 0xc5, 0x0, 0x14, 0x0,

    /* U+0071 "q" */
    0x7f, 0xf3, 0x0, 0x8c, 0x2, 0x30, 0x8, 0xc0,
    0x21, 0xff, 0xc0, 0x2, 0x0, 0x8,

    /* U+0072 "r" */
    0x3f, 0xd4, 0x5, 0x1, 0x40, 0x50, 0x14, 0x0,

    /* U+0073 "s" */
    0x7f, 0xf2, 0x40, 0x3, 0xff, 0x0, 0x5, 0x0,
    0x14, 0xff, 0xc0,

    /* U+0074 "t" */
    0x50, 0x50, 0x7e, 0x50, 0x50, 0x50, 0x50, 0x3e,

    /* U+0075 "u" */
    0x50, 0x15, 0x40, 0x55, 0x1, 0x54, 0x5, 0x50,
    0x14, 0xff, 0xc0,

    /* U+0076 "v" */
    0x90, 0x9, 0x30, 0xc, 0x14, 0x20, 0xc, 0x20,
    0x6, 0x80, 0x3, 0x80,

    /* U+0077 "w" */
    0x50, 0x70, 0x24, 0xc3, 0xa0, 0xc2, 0xc, 0xc6,
    0x6, 0x92, 0xa0, 0xf, 0x3, 0xc0, 0x28, 0x9,
    0x0,

    /* U+0078 "x" */
    0x30, 0x30, 0x73, 0x0, 0x74, 0x2, 0xd0, 0x18,
    0xc0, 0xc0, 0xc0,

    /* U+0079 "y" */
    0x80, 0x26, 0x0, 0x98, 0x2, 0x60, 0x9, 0x80,
    0x25, 0xff, 0xd0, 0x2, 0x47, 0xfc,

    /* U+007A "z" */
    0x7f, 0xf4, 0x1, 0xc0, 0x28, 0x2, 0x80, 0x34,
    0x1, 0xff, 0xd0,

    /* U+007B "{" */
    0x31, 0x86, 0x20, 0x61, 0x83, 0x0,

    /* U+007C "|" */
    0x55, 0x55, 0x55, 0x55, 0x55,

    /* U+007D "}" */
    0x60, 0xc3, 0x5, 0x30, 0xc6, 0x0,

    /* U+007E "~" */
    0x50, 0x5
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 44, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 60, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 126, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 155, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 150, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 79, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 98, .adv_w = 69, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 105, .adv_w = 31, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 107, .adv_w = 83, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 109, .adv_w = 34, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 83, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 117, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 131, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 106, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 34, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 31, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 261, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 102, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 274, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 134, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 123, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 116, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 136, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 34, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 125, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 125, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 148, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 127, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 141, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 121, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 132, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 189, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 130, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 131, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 83, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 132, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 704, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 706, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 65, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 109, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 789, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 33, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 38, .box_w = 4, .box_h = 10, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 817, .adv_w = 103, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 156, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 106, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 888, .adv_w = 106, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 902, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 110, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 66, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 126, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 171, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 994, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 34, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1016, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1022, .adv_w = 65, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
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
    0, -5, -2, -8, -5, -5, -4, -5,
    -5, -20, -38, 1, 2, -3, -4, -5,
    -5, -37, -21, -29, -2, -4, -4, -6,
    2, -30, 2, 0, -3, -3, -3, -4,
    -2, -20, -19, -16, -13, -15, -16, -6,
    -5, -3, -5, -6, -4, -4, -2, -6,
    -2, -4, -3, -6, -6, -16, -19, -3,
    -19, -16, -19, -16, -2, -4, -2, -2,
    -3, -2, -1, -3, -3, -5, -2, -4,
    5, -4, -2, -3, -4, -3, -3, -3,
    -4, -4, -3, -2, -3, -1, -3, -5,
    -3, -29, 1, 2, -2, -2, -2, -3,
    -2, -3, -4, -3, 1, 2, 1, -6,
    -2, -8, -2, -4, -2, -1, -7, -3,
    -1, -2, 1, -2, -2, -2, -9, -10,
    -2, -2, -4, -3, -3, -2, -2, -4,
    -2, -3, -2, -3, -2, -3, -4, -4,
    -2, -6, -6, 4, 2, 2, -4, -39,
    -3, -1, -3, -2, -2, -4, -3, -3,
    -6, -4, 1, 3, 1, 1, 1, -2,
    -3, 2, -2, -2, -3, 1, -2, -2,
    -2, -2, -2, -5, -5, -4, -5, -3,
    -3, -2, -8, -4, -3, -3, 2, -2,
    -4, -4, -4, -3, -3, -3
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
const lv_font_t OrbitronRegular10 = {
#else
lv_font_t OrbitronRegular10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ORBITRONREGULAR10*/

