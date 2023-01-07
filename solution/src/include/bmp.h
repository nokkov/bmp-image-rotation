#include  <stdint.h>

const uint16_t BF_TYPE = 0x4D42;
const uint32_t RESERVED = 0;
const uint32_t SIZE_HEADER = 40;
const uint16_t COLOR_PLANES = 1;
const uint16_t BITS_PER_PIXEL = 24;
const uint32_t COMPRESSION = 0;
const uint32_t BI_SIZE_IMAGE = 0;
const uint32_t BI_X_PELS_PER_METER = 0;
const uint32_t BI_Y_PELS_PER_METER = 0;
const uint32_t BI_CLR_USED = 0;
const uint32_t BI_CLR_IMP = 0;

typedef struct __attribute__((packed)) bmp_header  {
    uint16_t bfType;
    uint32_t bfileSize;
    uint32_t bfReserved;
    uint32_t bOffBits;
    uint32_t biSize;
    uint32_t biWidth;
    uint32_t biHeight;
    uint16_t biPlanes;
    uint16_t biBitCount;
    uint32_t biCompression;
    uint32_t biSizeImage;
    uint32_t biXPelsPerMeter;
    uint32_t biYPelsPerMeter;
    uint32_t biClrUsed;
    uint32_t biClrImportant;
} bmp_header;
