//#pragma bank 3
#include <gb/gb.h>
#include "gfx/gfx_types.h"

const rle_data_t const room_0_0_map = {252, {
0xE1,0x00,0x01,0x02,0x00,0x03,0x04,0x05,0xD8,0x00,0x06,0x07,0x06,0x08,0x06,0x08,
0x05,0xD6,0x00,0x04,0x06,0x09,0x08,0x06,0xC2,0x08,0x07,0x05,0x02,0xD3,0x00,0x0A,
0x08,0xC2,0x06,0x07,0x06,0x09,0xC3,0x06,0x08,0xD2,0x00,0x0B,0x0C,0x07,0x09,0x08,
0x06,0x08,0x07,0x08,0x07,0x08,0x0D,0xD2,0x00,0x0E,0x0F,0x08,0x06,0x07,0x06,0x08,
0xC2,0x06,0x08,0x10,0xD3,0x00,0x11,0x12,0x0A,0x08,0x06,0x08,0x06,0x08,0x13,0x14,
0x15,0x07,0x16,0xC5,0x00,0x17,0x18,0x19,0xC2,0x1A,0x1B,0xC6,0x00,0x1C,0x1D,0xC2,
0x00,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x08,0x25,0xC5,0x00,0x26,0xC2,0x27,0x28,
0x27,0x29,0xC6,0x00,0x2A,0x2B,0x0A,0x07,0x16,0x2C,0x2D,0x2E,0x2F,0x30,0xD4,0x00,
0x31,0x32,0x0C,0x08,0x25,0x33,0x34,0x35,0x36,0xD5,0x00,0x37,0x38,0xC3,0x00,0x39,
0x3A,0x3B,0xD6,0x00,0x3C,0x3D,0xC3,0x00,0x3E,0x3F,0x40,0xD6,0x00,0x41,0x42,0x43,
0x00,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0xC6,0x00,0x4C,0x4D,0x4E,0xC9,0x00,
0x4F,0x50,0x51,0x52,0x53,0x54,0x53,0x54,0x53,0x52,0x55,0x56,0xC6,0x00,0x57,0x58,
0x59,0x5A,0xC8,0x00,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x1C,0x61,0x62,0x63,0x0E,0x0F,
0x64,0x65,0x66,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x1D,0xC4,0x00,0x64,0x65,0x66,
0x6C,0x6D,0x6E,0x0B,0x00,0x6F,0x2A,0x2B,0x70,0x71,0x11,0x12,0x5E,0x5F,0x62,0x63,
0x0B,0x72,0x73,0x74,0x75,0x76,0x77,0xC4,0x00,0x78,0xC2,0x54
}};
const rle_data_t const room_0_0_coll = {91, {
0xFF,0x00,0xDB,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,
0xC2,0x01,0xDC,0x00,0xC2,0x01,0xD0,0x00,0xC6,0x05,0xC6,0x00,0xC2,0x01,0xD0,0x00,
0xC6,0x05,0xC6,0x00,0xC2,0x01,0xC6,0x00,0x02,0x01,0xD4,0x00,0xC2,0x01,0xDC,0x00,
0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC3,0x01,0xD0,0x00,0xC2,0x02,0xC9,0x00,
0xC3,0x01,0xCF,0x00,0x02,0xC2,0x01,0x02,0xC8,0x00,0xCB,0x01,0x02,0xC5,0x00,0x02,
0xC4,0x01,0x02,0xC7,0x00,0xD7,0x01,0xC4,0x00,0xC3,0x01
}};
const tile_data_t const room_0_0_tiles = {121, {
0x00,
0x02,0x00,0x00,0x00,0x00,0x06,0x1D,0x82,0x70,
0x02,0x00,0x00,0x00,0x00,0x30,0x60,0x4C,0x1A,
0x02,0x00,0x00,0x00,0x00,0x03,0x10,0x2E,0x19,
0x02,0x03,0x0E,0x41,0xB8,0x64,0x51,0x01,0xCE,
0x02,0x28,0x00,0x68,0xB0,0x92,0x0D,0xEA,0x40,
0x02,0x91,0x04,0x30,0x6E,0x59,0x94,0x2C,0xD1,
0x02,0x64,0xCB,0x9D,0x08,0x66,0xCD,0x8A,0x35,
0x02,0x32,0xA0,0x06,0x8D,0x4B,0x92,0xA5,0x52,
0x02,0x51,0x86,0x49,0x33,0x68,0x59,0x32,0x27,
0x02,0x05,0x03,0x02,0x18,0x16,0x0C,0x08,0x03,
0x03,0xF8,0xFC,0xD6,0xA1,0x55,0x81,0x51,0x82,
0x02,0x16,0x0C,0x09,0x03,0x0A,0x04,0x01,0x00,
0x02,0x97,0x3A,0x11,0xCC,0x9B,0x15,0x68,0x48,
0x03,0xF0,0xFE,0xED,0xBE,0xD5,0xA8,0x17,0xEA,
0x03,0x00,0x00,0x80,0xE0,0x50,0x88,0x24,0x82,
0x02,0xA1,0x50,0x00,0xD0,0x60,0x20,0x18,0xD0,
0x03,0x44,0x88,0x42,0x80,0x00,0x00,0x00,0xFF,
0x03,0x51,0x81,0x01,0x01,0x02,0x04,0x38,0xC0,
0x02,0x98,0x37,0xAC,0x4A,0x16,0x08,0x01,0x00,
0x02,0x4E,0x04,0xB3,0x66,0x45,0x9A,0x52,0x40,
0x02,0x80,0x40,0x20,0xC0,0x41,0x00,0x02,0x00,
0x02,0x90,0x68,0x9C,0x04,0x68,0x96,0x42,0x98,
0x01,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x1F,
0x01,0x00,0x1D,0x3F,0x3F,0x17,0x2F,0xDB,0xB5,
0x01,0x18,0x7C,0xFE,0xFE,0x7C,0xFB,0xF5,0xEF,
0x01,0x00,0xB8,0xFC,0xFC,0xE8,0xF4,0xDB,0xAD,
0x01,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF8,
0x03,0x00,0xFE,0xFF,0xEA,0xFD,0xEA,0x5D,0xE2,
0x03,0x00,0xC0,0x60,0xB0,0x58,0xA8,0x54,0x8C,
0x04,0x00,0xD0,0x05,0x95,0x0F,0x0F,0x07,0x07,0x01,0x01,0x06,0x06,0x08,0x08,0x00,0x20,
0x04,0x28,0x2A,0xAC,0xAC,0x8E,0x8E,0xF6,0xF6,0xFD,0xFD,0x1E,0x1E,0x1D,0x1D,0x0E,0x0E,
0x04,0x00,0x26,0x00,0x54,0x83,0x93,0xEB,0xEB,0x6B,0x6B,0xB7,0xB7,0x57,0x57,0xCE,0xCE,
0x04,0x2C,0xAC,0x15,0x95,0x19,0x19,0x34,0x34,0x68,0x68,0x68,0x68,0x50,0x50,0x5D,0x5D,
0x03,0xF0,0xE0,0x80,0x00,0x00,0x20,0xC0,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x04,0x00,0x06,0x00,0x03,0x00,0x06,0x00,0x01,0x00,0x00,0x08,0x09,0x70,0x73,0xC0,0xC0,
0x02,0x64,0x28,0x8C,0x14,0x60,0x20,0x00,0x00,
0x01,0x1F,0x1F,0x6B,0xF5,0xEF,0x7D,0xAA,0x40,
0x01,0xFB,0xB7,0xFA,0xD5,0xEB,0x55,0xAE,0x44,
0x01,0xFD,0xFF,0x6D,0xFB,0xAE,0x55,0xAA,0x41,
0x01,0xF8,0xF8,0xD6,0xAF,0xF7,0xBE,0x55,0x02,
0x03,0x47,0xAC,0xD5,0xA2,0x51,0x24,0x51,0x04,
0x03,0x42,0x92,0x06,0x42,0x22,0x02,0x02,0x02,
0x03,0x01,0x06,0x0F,0x0E,0x27,0x11,0x12,0x0B,
0x03,0xEC,0xCC,0x65,0x69,0x62,0x71,0x7D,0x0E,
0x03,0x74,0x88,0x64,0x78,0xCC,0x46,0xB2,0x94,
0x03,0x00,0x00,0x00,0x41,0x23,0x2E,0x35,0x68,
0x03,0x07,0x1A,0x74,0xA0,0x40,0xB8,0x06,0x00,
0x03,0x40,0x12,0x40,0x20,0x00,0x01,0xC2,0x3C,
0x03,0x04,0x04,0x08,0x30,0xC0,0x00,0x00,0x00,
0x03,0x1D,0x1D,0x39,0x33,0x3B,0x3B,0x35,0x1B,
0x03,0x86,0xB3,0x93,0xC6,0xE5,0xF2,0xE8,0x70,
0x03,0xC4,0xA9,0xD7,0xE2,0x75,0x62,0x74,0x38,
0x03,0xD0,0xA0,0x40,0x80,0x00,0x00,0x00,0x00,
0x03,0x01,0x0F,0x3F,0xFB,0xFF,0xEA,0xFD,0xEA,
0x03,0xC0,0xF0,0xF8,0xAC,0xF2,0xA9,0xD3,0xA9,
0x03,0x0E,0x03,0x05,0x16,0x16,0x33,0x2B,0x39,
0x03,0xF8,0xF9,0x73,0xF3,0xB7,0x67,0x97,0xE5,
0x03,0x37,0x31,0xA2,0x94,0xCC,0x90,0xC4,0xE0,
0x03,0x5D,0xFA,0x55,0xAA,0x71,0x2A,0xC4,0x80,
0x03,0x11,0xB5,0x71,0x21,0x51,0x82,0x42,0x02,
0x03,0x3C,0x3A,0x3D,0x77,0x7F,0x75,0x77,0xF3,
0x03,0xD2,0x79,0x35,0x9C,0xDE,0xDC,0xFA,0xAE,
0x03,0xA4,0xE4,0x4A,0xC6,0xCA,0x46,0xE6,0x6B,
0x03,0xC8,0x94,0x08,0x00,0x40,0x01,0x0E,0xF7,
0x03,0x04,0x04,0x09,0x12,0x62,0x82,0x01,0xFC,
0x03,0x60,0xF0,0xB8,0x5C,0x2C,0x54,0x08,0xF0,
0x03,0x01,0x01,0x03,0x1F,0x3C,0x70,0x61,0xE3,
0x03,0xEF,0xD7,0x97,0x93,0x2F,0x3F,0xFC,0xC3,
0x03,0x7D,0x7E,0x9E,0xAC,0x9C,0x39,0xB8,0x30,
0x03,0xF6,0xF9,0xBA,0xBD,0xCE,0x57,0x5B,0xB1,
0x03,0xC0,0xE0,0x70,0x98,0x38,0x14,0xC2,0xB3,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x02,0x38,0x6C,0x54,0x64,0x12,0x7B,0xC5,0xBD,
0x02,0x70,0xC8,0xB4,0xEC,0xC4,0xC0,0x80,0xBC,
0x03,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,
0x03,0x00,0x00,0x00,0x7F,0xFF,0xFA,0xEF,0xFA,
0x03,0x00,0x00,0x00,0xC0,0x70,0xA8,0x74,0xAA,
0x03,0x1F,0x3F,0x7E,0xFF,0xF7,0xDE,0xF7,0xBA,
0x03,0xF7,0xAA,0xF7,0xAA,0xDD,0xA2,0x54,0xFA,
0x03,0x00,0x80,0x40,0xA0,0x10,0xA8,0x48,0x04,
0x04,0x00,0x01,0x08,0x09,0x4C,0x4C,0xD4,0xD4,0xBA,0xBA,0xD5,0xD5,0xF9,0xF9,0x36,0x36,
0x03,0x70,0xFD,0xF7,0x75,0xE3,0xA0,0x15,0x76,
0x03,0x38,0xDF,0xDF,0x7B,0x52,0x8C,0xD6,0x54,
0x02,0x7D,0xE3,0x0D,0x0B,0x0B,0x16,0x35,0x00,
0x02,0x66,0xFA,0x66,0x80,0xC0,0x80,0x40,0x00,
0x03,0x1F,0x1D,0x3F,0x3B,0x37,0x2A,0x35,0x2E,
0x03,0x7D,0xEA,0x75,0xAF,0x5D,0xFA,0x77,0xEA,
0x03,0xD1,0x2A,0x44,0xA0,0x0A,0x44,0x00,0xA8,
0x03,0x00,0x80,0x80,0x40,0x40,0x40,0x40,0x80,
0x03,0x75,0xAF,0x57,0xEE,0x47,0x9A,0xD5,0x6A,
0x03,0xD0,0xA4,0x70,0xAA,0x51,0x08,0x40,0x24,
0x03,0xA4,0x44,0x04,0x88,0x08,0x08,0x10,0x10,
0x03,0x0F,0x3E,0x77,0xFA,0xD4,0x60,0x34,0x0F,
0x03,0xE0,0xB8,0x56,0x89,0x41,0x02,0x1C,0xE0,
0x03,0x00,0x00,0x01,0x03,0x07,0x1F,0x3F,0x3B,
0x03,0x00,0x00,0x00,0xC0,0x60,0xB0,0x58,0x0C,
0x03,0x00,0x01,0x07,0x0F,0x1F,0x3F,0x7D,0x7B,
0x03,0x3F,0xFF,0xFD,0xEA,0xFD,0xAA,0xF7,0xAA,
0x02,0x09,0x05,0x05,0x03,0x00,0x0B,0x05,0x0A,
0x02,0x01,0x05,0x44,0x4C,0xF4,0x15,0xAC,0xD7,
0x02,0x00,0x20,0xA0,0xA5,0x52,0x56,0xB9,0x56,
0x03,0x00,0x3F,0x7D,0xFE,0xD5,0xEE,0x55,0xFA,
0x03,0x14,0x19,0x8D,0xC6,0x65,0xA2,0x51,0x30,
0x03,0x75,0xA0,0x54,0xA2,0x10,0xE4,0x40,0x92,
0x03,0x10,0x80,0x01,0x41,0x02,0x02,0x04,0x08,
0x03,0x80,0x8F,0x1F,0x3F,0x75,0x7B,0xD5,0xFE,
0x03,0x51,0x2E,0x14,0x09,0x04,0x03,0x00,0x00,
0x03,0x00,0x40,0x00,0x20,0x81,0x06,0xF8,0x00,
0x03,0x20,0x23,0x47,0x8E,0x1F,0x3A,0x77,0x7A,
0x03,0x7F,0xFA,0xFD,0xB2,0xE5,0xAC,0x55,0x62,
0x03,0xD5,0xA0,0x83,0x46,0x21,0x18,0x07,0x00,
0x03,0x77,0xAE,0x5D,0x2A,0x4D,0x20,0x00,0xFF,
0x03,0x55,0xE8,0x55,0x38,0x0D,0x06,0x01,0x00,
0x03,0x48,0x18,0x44,0x04,0x04,0x04,0x88,0x70,
0x03,0x48,0x30,0x0F,0x00,0x00,0x1F,0x3E,0x75,
0x03,0x10,0x60,0x80,0x00,0x00,0x80,0xC0,0x60,
0x03,0x55,0x3A,0x15,0x0E,0x03,0x01,0x00,0x00,
0x03,0x52,0x06,0x51,0x01,0x41,0x81,0x62,0x1C,
0x03,0x00,0x10,0x32,0x2B,0x5D,0xAB,0x9F,0x6C
}};

const rle_data_t const room_1_0_map = {106, {
0xFF,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0xD8,0x00,0x07,0x08,0x09,0x0A,0x0B,0x0C,
0xFF,0x00,0xC8,0x00,0x0D,0x0E,0x0F,0x10,0xD8,0x00,0x01,0x02,0x11,0x12,0x13,0x14,
0x05,0x06,0xD6,0x00,0x07,0x08,0x15,0x16,0x17,0x18,0x19,0x0C,0xFF,0x00,0xFF,0x00,
0xC9,0x00,0x1A,0x1B,0x1C,0xD9,0x00,0x1D,0x1C,0x1E,0x1F,0x20,0xD4,0x00,0x21,0x22,
0x1A,0x1B,0x23,0x24,0x25,0x26,0x27,0x28,0xD0,0x00,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,
0x2F,0x30,0x20,0x31,0x32,0x33,0x34,0x35,0xD0,0x00,0x36,0x37,0x38,0x39,0x36,0x37,
0x3A,0x3B,0x3C,0x3D,0xC2,0x3E,0x27,0x28,0xD0,0x00
}};
const rle_data_t const room_1_0_coll = {48, {
0xFF,0x00,0xC6,0x05,0xD8,0x00,0xC6,0x05,0xFF,0x00,0xE4,0x00,0xC8,0x05,0xD6,0x00,
0xC8,0x05,0xFF,0x00,0xFF,0x00,0xC9,0x00,0x02,0xC2,0x01,0xD9,0x00,0x02,0xC4,0x01,
0xD6,0x00,0x02,0xC7,0x01,0xD5,0x00,0x02,0xC8,0x01,0xD0,0x00,0xCE,0x01,0xD0,0x00
}};
const tile_data_t const room_1_0_tiles = {63, {
0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x1F,
0x01,0x00,0x1D,0x3F,0x3F,0x17,0x2F,0xDB,0xB5,
0x01,0x18,0x7C,0xFE,0xFE,0x7C,0xFB,0xF5,0xEF,
0x01,0x06,0x6F,0xFD,0xFE,0xBF,0x5F,0xFF,0xFE,
0x01,0x00,0xB8,0xFC,0xFC,0xE8,0xF4,0xDB,0xAD,
0x01,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF8,
0x01,0x1F,0x1F,0x6B,0xF5,0xEF,0x7D,0xAA,0x40,
0x01,0xFF,0xFF,0xF7,0xFF,0x6E,0xB5,0x4A,0xA1,
0x01,0xF5,0xFF,0xEF,0x55,0xAA,0x57,0xAB,0x05,
0x01,0xFD,0xFF,0x6D,0xFB,0xAE,0x55,0xAA,0x41,
0x01,0xFB,0xB7,0xFA,0xD5,0xEB,0x55,0xAE,0x44,
0x01,0xF8,0xF8,0xD6,0xAF,0xF7,0xBE,0x55,0x02,
0x01,0x00,0x00,0x00,0x03,0x0F,0x07,0x2E,0x7D,
0x01,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x60,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xF6,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x3E,
0x01,0x7F,0xBD,0x7E,0xFF,0xEF,0xD5,0xAB,0xDF,
0x01,0xF1,0xF3,0xCF,0xF7,0xFB,0xF5,0x6E,0xFB,
0x01,0xBF,0x7F,0xFD,0xFA,0xFF,0x7F,0xBF,0xFF,
0x01,0x7F,0x7F,0x3E,0xDF,0xAF,0xF7,0xAF,0xFF,
0x01,0xDF,0xED,0x5F,0xAB,0xD7,0xAA,0x75,0x22,
0x01,0xDA,0xFD,0xB6,0xDF,0x75,0xAA,0x55,0x82,
0x01,0xDF,0xBF,0xF7,0xAA,0x55,0xEA,0xD5,0xA0,
0x01,0x7F,0xED,0x77,0xAE,0x55,0xEA,0x55,0x0A,
0x01,0xFF,0xFF,0xEF,0xFF,0x76,0xAD,0x52,0x85,
0x03,0x01,0x07,0x0F,0x1F,0x3F,0x7D,0x77,0xFD,
0x03,0xFF,0xFD,0xEA,0xBD,0xEA,0xF7,0xA8,0xD5,
0x03,0xC0,0xE0,0x50,0xE8,0x58,0xA4,0x04,0xA2,
0x03,0x01,0x03,0x07,0x0F,0x1F,0x3A,0x3D,0x6E,
0x03,0x7F,0xFA,0xFD,0xB2,0xE5,0xAC,0x55,0x62,
0x03,0x47,0xAC,0xD5,0xA2,0x51,0x24,0x51,0x04,
0x03,0x81,0x2B,0x53,0xA2,0x01,0x11,0x29,0x81,
0x02,0x00,0x00,0x00,0x00,0x00,0x08,0x14,0x02,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,
0x03,0x00,0xC0,0xA0,0xD0,0xA8,0x44,0xAA,0x12,
0x03,0x75,0x6B,0x5D,0x2A,0x34,0x1A,0x08,0x07,
0x03,0xC2,0xA2,0x02,0x82,0x04,0x09,0x13,0xE4,
0x03,0x55,0x22,0x14,0x09,0xC4,0xE1,0x70,0xB8,
0x03,0x44,0x88,0x42,0x80,0x00,0x00,0x00,0xFF,
0x03,0x51,0x81,0x01,0x01,0x02,0x04,0x38,0xC0,
0x02,0x21,0x22,0xA4,0x25,0x49,0x59,0x55,0xAE,
0x02,0x01,0x05,0x44,0x5C,0x24,0x25,0xDC,0xD7,
0x02,0x00,0x20,0xA0,0xA5,0x52,0x56,0xB9,0x56,
0x02,0x29,0x25,0xA5,0x23,0x40,0x5B,0x55,0xAA,
0x02,0x02,0x05,0x45,0x4D,0xF5,0x14,0xAC,0xD6,
0x04,0x00,0x10,0x03,0x13,0x07,0x27,0x0E,0x2E,0x17,0x5F,0x3A,0x3A,0x77,0x77,0x7A,0x7A,
0x03,0xEE,0xFF,0xFB,0xBB,0xD5,0xAB,0xDD,0xEE,
0x03,0xBE,0xF6,0xFD,0xAA,0xDC,0xE9,0x74,0xBE,
0x03,0x00,0x01,0x07,0x0F,0x1F,0x3F,0x7D,0x7B,
0x03,0x3F,0xFF,0xFF,0xEB,0xFD,0xAA,0xF7,0xAA,
0x03,0x7F,0xFF,0xFD,0xEA,0xFD,0xAA,0xF7,0xAA,
0x03,0xF0,0xFE,0xED,0xBE,0xD5,0xA8,0x17,0xEA,
0x03,0x00,0x00,0x80,0xE0,0x50,0x88,0x24,0x82,
0x03,0x38,0xDF,0xDF,0x7B,0x52,0x8C,0xD6,0x54,
0x03,0x38,0x63,0xCB,0xAF,0xE7,0x81,0x2A,0xEC,
0x03,0x30,0x7E,0xFE,0xCF,0xA5,0x68,0xAB,0x9A,
0x03,0x70,0xFD,0xF7,0x75,0xE3,0xA0,0x15,0x76,
0x03,0xFD,0x77,0x7D,0xD5,0xBB,0x51,0x66,0x35,
0x03,0xD5,0xA8,0xF7,0xDC,0xAA,0xD4,0x82,0x50,
0x03,0x12,0xAA,0x44,0x01,0xA2,0x42,0x02,0x04,
0x03,0xD5,0xA0,0x83,0x46,0x21,0x18,0x07,0x00,
0x03,0x77,0xAE,0x5D,0x2A,0x4D,0x20,0x00,0xFF
}};

const rle_data_t const room_2_0_map = {424, {
0xC2,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0xC2,0x00,0x01,0x02,0x03,0x04,0x05,0xC9,
0x00,0x07,0x08,0x09,0x0A,0xC2,0x00,0x0B,0x0C,0x01,0x0D,0x0E,0x0F,0x10,0x11,0xC2,
0x00,0x01,0x0D,0x0E,0x0F,0x12,0x13,0x14,0xC7,0x00,0x15,0x16,0x17,0x18,0xC2,0x00,
0x19,0x1A,0x01,0x1B,0x1C,0x1D,0x05,0x0B,0x0C,0x00,0x01,0x1B,0x1C,0x1D,0x1E,0x1A,
0x1F,0xC2,0x00,0x20,0x21,0xC3,0x00,0x22,0x23,0x24,0x00,0x25,0x26,0x27,0x28,0x29,
0x2A,0x2B,0x2C,0x05,0x19,0x1A,0x2D,0x01,0x2A,0x2B,0x2C,0x05,0x2E,0xC4,0x00,0x2F,
0x30,0xC2,0x00,0x31,0x32,0x33,0x34,0x35,0xC3,0x00,0x01,0x02,0x03,0x04,0x05,0x27,
0x2E,0x28,0x29,0x02,0x03,0x04,0x05,0xC4,0x00,0x0B,0x0C,0x36,0x37,0x38,0x07,0x08,
0x39,0x3A,0xC4,0x00,0x01,0x0D,0x0E,0x0F,0x05,0xC3,0x00,0x01,0x0D,0x0E,0x0F,0x05,
0xC4,0x00,0x19,0x1A,0x3B,0x3C,0x3D,0x3E,0x16,0x3F,0xC4,0x00,0x40,0x41,0x42,0x41,
0x42,0x41,0x42,0x41,0x43,0x01,0x1B,0x1C,0x1D,0x05,0xC4,0x00,0x27,0x2E,0xC2,0x00,
0x44,0x45,0x23,0x3F,0xC4,0x00,0x46,0x42,0x41,0x42,0x41,0x42,0x41,0x42,0x47,0x01,
0x2A,0x2B,0x2C,0x05,0xC9,0x00,0x22,0x32,0x33,0xC4,0x00,0x48,0x41,0x42,0x41,0x42,
0x41,0x42,0x41,0x49,0x01,0x02,0x03,0x04,0x4A,0x4B,0x4C,0x4D,0x4E,0xC3,0x00,0x4F,
0x13,0x50,0x08,0x51,0xC5,0x00,0x52,0x53,0x52,0x53,0x52,0x53,0x52,0x00,0x01,0x0D,
0x0E,0x0F,0x54,0x55,0x56,0x1A,0x57,0xC3,0x00,0x58,0x1A,0x59,0x16,0x3F,0xC5,0x00,
0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x5A,0x00,0x01,0x1B,0x1C,0x1D,0x05,0xC2,0x00,0x60,
0xC5,0x00,0x61,0x62,0x23,0x3F,0x00,0x4D,0x4E,0xC2,0x00,0x63,0x64,0x65,0x66,0x67,
0x68,0x63,0x69,0x6A,0x69,0x6A,0x69,0x6A,0x69,0x6A,0x69,0x6A,0xC5,0x00,0x31,0x32,
0x3F,0x06,0x1A,0x57,0xC2,0x00,0x52,0x53,0x52,0x53,0x67,0x6B,0x52,0x6C,0x6D,0x6C,
0x6D,0x6C,0x6D,0x6C,0x6D,0x6C,0x6D,0x69,0x6A,0xC3,0x00,0x07,0x08,0x10,0x11,0x60,
0x6E,0x00,0xD2,0x6F,0x6C,0x6D,0x69,0x6A,0x00,0x15,0x16,0x3F,0xC5,0x00,0x01,0x1B,
0x1C,0x1D,0x05,0xC3,0x00,0x01,0x1B,0x1C,0x1D,0x05,0x00,0x70,0x71,0x00,0xC2,0x6F,
0x6C,0x6D,0x69,0x6A,0x23,0x3F,0xC5,0x00,0x01,0x2A,0x2B,0x2C,0x05,0xC3,0x00,0x01,
0x2A,0x2B,0x2C,0x05,0x00,0x72,0x73,0xC3,0x00,0xC2,0x6F,0x6C,0x6D,0x32,0x33,0xC5,
0x00,0x01,0x02,0x03,0x04,0x12,0x1A,0x14,0x00,0x01,0x02,0x03,0x04,0x05,0x00,0x72,
0x73,0xC5,0x00,0xC3,0x6F,0x51,0xC3,0x00
}};
const rle_data_t const room_2_0_coll = {41, {
0xFF,0x00,0xFF,0x00,0xF7,0x00,0x02,0xC7,0x01,0x02,0xFF,0x00,0xC2,0x00,0xC2,0x02,
0xDB,0x00,0x02,0x01,0xFF,0x00,0xEA,0x00,0xD1,0x01,0x02,0xDE,0x00,0x01,0x02,0xDE,
0x00,0x01,0x02,0xDE,0x00,0xC3,0x01,0xC4,0x00
}};
const tile_data_t const room_2_0_tiles = {116, {
0x00,
0x03,0x08,0x01,0x08,0x01,0x08,0x01,0x08,0x01,
0x03,0x3A,0x46,0x2A,0x16,0x22,0x17,0x32,0x57,
0x03,0xFA,0x5F,0xFA,0x5F,0xFA,0x4F,0xEA,0x4F,
0x03,0x66,0x54,0x6A,0x54,0x66,0x54,0xE6,0x54,
0x03,0x80,0x10,0x80,0x10,0x80,0x10,0x80,0x10,
0x03,0x00,0x00,0x00,0x10,0xA0,0x40,0x40,0x98,
0x03,0x01,0x0A,0x01,0x0A,0x01,0x0A,0x01,0x0A,
0x03,0x5F,0xEA,0x4F,0xEA,0x4F,0xEA,0x5F,0xFA,
0x04,0x50,0x50,0x80,0x80,0x50,0x56,0xC0,0xC5,0x50,0x50,0x40,0x43,0x50,0x54,0x00,0x00,
0x02,0x00,0x00,0x00,0x00,0x00,0x40,0xA0,0x00,
0x02,0x00,0x00,0x00,0x00,0x02,0x04,0x0B,0x1C,
0x02,0x00,0x00,0x00,0x40,0x6C,0xB6,0x41,0xAC,
0x03,0x3A,0x47,0x2A,0x27,0x2A,0x27,0x32,0x57,
0x03,0xEA,0x4F,0xFA,0x5F,0xFA,0x4F,0xEA,0x4F,
0x03,0xEA,0x54,0x62,0x54,0xEE,0x54,0xEA,0x54,
0x03,0x81,0x13,0x85,0x12,0x84,0x10,0x80,0x10,
0x03,0x70,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x04,0x80,0x80,0x10,0x10,0x80,0x82,0x10,0x10,0x80,0x80,0x10,0x13,0x80,0x80,0x10,0x12,
0x02,0x93,0x06,0x74,0xC1,0xA2,0x0C,0x92,0x67,
0x02,0x00,0x80,0x00,0xA0,0x50,0x00,0xD0,0x60,
0x03,0x00,0x0A,0x02,0x0A,0x02,0x0A,0x01,0x0A,
0x03,0x53,0xFA,0x5F,0xFA,0x5F,0xEA,0x4F,0xFA,
0x04,0x50,0x55,0x80,0x86,0x50,0x52,0x80,0x84,0x50,0x53,0x40,0x45,0x50,0x50,0x40,0x46,
0x02,0xA0,0xC0,0x40,0x30,0xA0,0x00,0x80,0x40,
0x02,0x10,0x0B,0x34,0x21,0x0C,0x13,0x0A,0x18,
0x02,0xB0,0x4C,0x12,0xCB,0x34,0xA6,0x8D,0x40,
0x03,0x22,0x17,0x2A,0x17,0x2A,0x57,0x22,0x57,
0x03,0xFA,0x5F,0xEA,0x4F,0xEA,0x4F,0xEA,0x5F,
0x03,0x66,0x54,0x66,0x54,0xEA,0x54,0xE6,0x54,
0x04,0x80,0x80,0x10,0x10,0x80,0x82,0x10,0x10,0x80,0x83,0x10,0x10,0x80,0x82,0x10,0x12,
0x02,0x20,0x18,0xD0,0x80,0x40,0x20,0xC0,0x40,
0x03,0x00,0x06,0x01,0x00,0x00,0x00,0x00,0x1F,
0x03,0x00,0x00,0x00,0x80,0x40,0x40,0x20,0x90,
0x03,0x01,0x0A,0x02,0x0A,0x01,0x0A,0x01,0x0A,
0x03,0x5B,0xFA,0x5B,0xFA,0x5F,0xFA,0x4F,0xEA,
0x04,0x50,0x55,0x80,0x82,0x50,0x54,0x80,0x84,0x50,0x50,0x40,0x40,0x50,0x50,0x40,0x40,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,
0x03,0x00,0x00,0x00,0x00,0x08,0x70,0xC0,0x00,
0x02,0x14,0x03,0x02,0x00,0x00,0x00,0x00,0x00,
0x04,0x0B,0x8B,0x05,0x05,0x02,0x02,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x08,0x81,0xE8,0x41,0xA8,0x41,0x28,0x01,
0x03,0x22,0x57,0x32,0x56,0x32,0x57,0x32,0x16,
0x03,0xFA,0x5F,0xFA,0x5F,0xEA,0x4F,0xEA,0x5F,
0x03,0x62,0x5C,0xEA,0x54,0xE2,0x54,0x66,0x54,
0x04,0x00,0x80,0x00,0x00,0x00,0xC0,0x02,0x82,0x04,0xC4,0x14,0x14,0x0C,0x0C,0x16,0x16,
0x02,0x03,0x34,0x44,0x00,0x00,0x00,0x00,0x00,
0x03,0x70,0x1C,0x06,0x03,0x01,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x70,
0x03,0x02,0x0A,0x02,0x0A,0x03,0x0A,0x01,0x0A,
0x03,0x4F,0xEA,0x5F,0xFA,0x5B,0xFA,0x5F,0xFA,
0x03,0x50,0x80,0x50,0x80,0x50,0x40,0x50,0x80,
0x03,0x00,0x00,0x41,0x23,0x2E,0x35,0x68,0xD0,
0x03,0x1A,0x74,0xA0,0x40,0xB8,0x06,0x00,0x00,
0x03,0x38,0xAC,0x46,0x2B,0x13,0x08,0x04,0x02,
0x03,0x00,0x00,0x00,0x00,0x80,0xE0,0x70,0x38,
0x03,0x00,0x00,0x00,0x00,0x42,0x24,0x18,0x10,
0x03,0x51,0x87,0x52,0xC5,0x52,0x44,0x50,0x00,
0x03,0xA0,0x40,0x80,0x00,0x00,0x00,0x00,0x00,
0x03,0xC1,0x30,0x08,0x1F,0x60,0x80,0x00,0x00,
0x03,0x1C,0x8E,0x47,0xA2,0x71,0x08,0x04,0x02,
0x03,0x10,0x20,0xA0,0xE0,0xF0,0xBC,0x57,0x0B,
0x03,0x00,0x0A,0x02,0x0A,0x02,0x0A,0x01,0xEA,
0x03,0x50,0x80,0x50,0x80,0x50,0x40,0x50,0x40,
0x01,0x01,0x03,0x02,0x05,0x05,0x0A,0x0B,0x1A,
0x01,0xEE,0xD1,0xED,0x55,0x55,0x55,0x77,0xBB,
0x01,0xDC,0x6A,0x2B,0xAF,0xAD,0xAD,0x6B,0x7B,
0x01,0x80,0xC0,0x40,0xA0,0xA0,0x50,0xD0,0x58,
0x03,0x07,0xA2,0x11,0x08,0x05,0x00,0x00,0x00,
0x03,0xC1,0xEA,0x42,0xAA,0x01,0xAA,0x41,0x0A,
0x01,0x12,0x1A,0x35,0x35,0x25,0x2D,0x25,0x55,
0x01,0x48,0x58,0xAC,0xAC,0xA4,0xB4,0xA4,0xAA,
0x01,0x55,0x6D,0x6D,0x25,0xAD,0xED,0xAB,0xAB,
0x01,0xAA,0xB6,0xB6,0xA4,0xB5,0xB7,0xD5,0xD5,
0x03,0x80,0x10,0x80,0x10,0x80,0x10,0x80,0x11,
0x03,0x00,0x00,0x00,0x20,0x41,0x47,0x9A,0x70,
0x04,0x04,0x04,0x08,0x08,0x30,0x30,0x40,0x40,0x80,0x80,0x00,0x00,0xF0,0xF1,0x0C,0x0D,
0x02,0x00,0x00,0x04,0x26,0x4B,0xB4,0xCA,0x07,
0x02,0x00,0x00,0x00,0xC0,0x60,0x10,0xC0,0x28,
0x02,0x00,0x00,0x00,0x00,0x02,0x05,0x00,0x05,
0x04,0x01,0x61,0x0A,0x8A,0x01,0x01,0x0A,0x2A,0x01,0x81,0x0A,0x8A,0x01,0x61,0x0A,0x8A,
0x03,0x50,0x80,0x50,0xC0,0x50,0x40,0x50,0x00,
0x03,0x7A,0x55,0x72,0x55,0x70,0x55,0x78,0x55,
0x03,0x46,0x55,0x70,0x55,0x78,0x55,0x7A,0x55,
0x03,0x83,0x15,0x82,0x14,0x80,0x10,0x80,0x10,
0x03,0xA0,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x00,0x03,0x02,0x00,0x01,0x00,0x01,0x01,
0x02,0x80,0x6C,0x98,0x6C,0x10,0x80,0xD0,0x38,
0x02,0x03,0x02,0x0C,0x05,0x00,0x01,0x02,0x01,
0x04,0x00,0x20,0x0A,0x8A,0x02,0x82,0x0A,0x2A,0x02,0x02,0x0A,0x6A,0x01,0x81,0x0A,0x2A,
0x03,0x7C,0x55,0x6C,0x45,0x6E,0x41,0x6A,0x51,
0x01,0x00,0x2A,0x7F,0x55,0x00,0x60,0x60,0x6D,
0x01,0x00,0xAA,0xFE,0x54,0x00,0x06,0x06,0x06,
0x03,0x66,0x55,0x66,0x55,0x66,0x55,0x46,0x55,
0x01,0x00,0x7E,0x7F,0x2A,0x00,0x70,0x60,0x30,
0x01,0x00,0xFF,0xFF,0xAA,0x00,0x07,0x06,0x0F,
0x02,0x33,0x24,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x51,0x2C,0x25,0x01,0x00,0x00,0x00,0x00,
0x04,0x01,0x21,0x0A,0x8A,0x02,0x42,0x0A,0x0A,0x01,0x01,0x0A,0x0A,0x01,0x01,0x0A,0x0A,
0x03,0x7A,0x55,0x6C,0x45,0x6C,0x45,0x6E,0x55,
0x01,0x62,0x62,0x67,0x67,0x60,0x7F,0x6F,0x00,
0x01,0x06,0x06,0x06,0x06,0x06,0xF6,0xE6,0x00,
0x03,0x3A,0x55,0x7E,0x55,0x7E,0x55,0x76,0x55,
0x01,0x60,0x70,0x60,0x70,0x60,0x70,0x60,0x70,
0x01,0x06,0x07,0x06,0x07,0x06,0x03,0x06,0x07,
0x01,0xFF,0xAA,0x55,0x02,0x00,0xC1,0x63,0xA6,
0x01,0xFF,0xAA,0x55,0x00,0x04,0x94,0x4C,0x94,
0x01,0x06,0x07,0x06,0x07,0x06,0x0F,0x06,0x07,
0x01,0x4D,0x1A,0x34,0x69,0xD1,0xA2,0x41,0x80,
0x01,0x1C,0x14,0x0C,0x14,0x8C,0xD4,0x4C,0x94,
0x02,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x38,0x54,0xAA,0xD2,0x82,0x44,0x38,0x00,
0x01,0x01,0x03,0x07,0x06,0x06,0x06,0x07,0x03,
0x01,0xF0,0xF8,0x18,0xE8,0xA0,0xE0,0x00,0x80,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80
}};

const rle_data_t const room_3_0_map = {18, {
0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
0xC6,0x00
}};
const rle_data_t const room_3_0_coll = {18, {
0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
0xC6,0x00
}};
const tile_data_t const room_3_0_tiles = {1, { 0x00 }};

const rle_data_t const room_5_0_map = {293, {
0xC9,0x00,0x01,0x02,0x03,0x04,0x05,0xCD,0x00,0x06,0x07,0x08,0xC8,0x00,0x09,0x0A,
0x0B,0x0C,0x0D,0x05,0xCD,0x00,0x06,0x0E,0x0F,0xC2,0x00,0x10,0x11,0x12,0x13,0xC2,
0x00,0x14,0x15,0x16,0x17,0x18,0x05,0x19,0xCC,0x00,0x06,0x1A,0x1B,0xC2,0x00,0x1C,
0x1D,0x1E,0x1F,0x20,0xC2,0x00,0x01,0x21,0x22,0x23,0x24,0x25,0xCC,0x00,0x06,0x26,
0x17,0xC2,0x00,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x01,0x02,0x03,0x04,0x2E,0x12,
0xCC,0x00,0x06,0x07,0x08,0xC3,0x00,0x10,0x11,0x12,0x2F,0x30,0x31,0x01,0x0B,0x0C,
0x0D,0x32,0x1E,0xCC,0x00,0x06,0x0E,0x0F,0xC3,0x00,0x1C,0x1D,0x1E,0x00,0x33,0x34,
0x35,0x16,0x17,0x18,0x36,0x29,0xC8,0x00,0x37,0xC3,0x38,0x39,0x1A,0x1B,0xC3,0x00,
0x27,0x28,0x29,0xC3,0x00,0x01,0x21,0x22,0x23,0x05,0x00,0x3A,0x3B,0xC6,0x00,0x3C,
0x3D,0x3E,0x3F,0x40,0x26,0x17,0xC9,0x00,0x01,0x02,0x03,0x04,0x41,0x42,0x43,0xC7,
0x00,0x44,0xC3,0x45,0x46,0x07,0x08,0xC6,0x00,0x47,0x48,0x49,0x01,0x0B,0x0C,0x0D,
0x4A,0x4B,0xC4,0x00,0xC9,0x4C,0x4D,0x0F,0xC6,0x00,0x4E,0x4F,0x50,0x01,0x16,0x17,
0x18,0x05,0xCC,0x00,0x51,0x52,0x53,0x1B,0xC6,0x00,0x54,0x55,0x56,0x01,0x21,0x22,
0x23,0x05,0xCC,0x00,0x57,0x58,0x59,0x17,0xC6,0x00,0xC9,0x4C,0xCC,0x00,0x06,0x07,
0x08,0xC9,0x00,0x01,0x0B,0x0C,0x0D,0x05,0xCD,0x00,0x06,0x0E,0x0F,0xC4,0x00,0x5A,
0x5B,0x5C,0x5B,0x5D,0x01,0x16,0x17,0x18,0x05,0x00,0x5A,0x5B,0x5C,0x5B,0x5E,0xC7,
0x00,0x06,0x1A,0x1B,0xC4,0x00,0x5F,0x00,0x5F,0x00,0x5F,0x01,0x21,0x22,0x23,0x05,
0x00,0x5F,0x00,0x5F,0x00,0x60,0x61,0x62,0xC5,0x00,0x39,0x26,0x17,0x00,0xD4,0x4C,
0x63,0xC6,0x00,0x07,0x08}};
const rle_data_t const room_5_0_coll = {86, {
0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,
0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xD7,0x00,0xC5,0x04,0xC2,0x01,0xD7,0x00,
0xC5,0x04,0xC2,0x01,0xD7,0x00,0xC5,0x04,0xC2,0x01,0xD3,0x00,0x02,0xCA,0x01,0xDC,
0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xC6,0x00,0x02,0xC7,0x01,0x02,0xCD,0x00,0xC2,
0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0xDC,0x00,0xC2,0x01,0x00,0x02,0xD2,
0x01,0x02,0xC7,0x00,0xC2,0x01}};
const tile_data_t const room_5_0_tiles = {100, {
0x00,
0x03,0x08,0x01,0x08,0x01,0x08,0x01,0x08,0x01,
0x03,0x3A,0x46,0x2A,0x16,0x22,0x17,0x32,0x57,
0x03,0xFA,0x5F,0xFA,0x5F,0xFA,0x4F,0xEA,0x4F,
0x03,0x66,0x54,0x6A,0x54,0x66,0x54,0xE6,0x54,
0x03,0x80,0x10,0x80,0x10,0x80,0x10,0x80,0x10,
0x03,0x10,0x10,0x18,0x54,0x44,0x54,0x38,0x10,
0x03,0x0A,0x01,0x0A,0x03,0x0A,0x02,0x0A,0x02,
0x03,0xFA,0x5F,0xFA,0x5B,0xFA,0x5F,0xEA,0x4F,
0x02,0x00,0x00,0x00,0x00,0x02,0x05,0x00,0x05,
0x04,0x08,0x08,0x01,0x61,0x08,0xA8,0x01,0x01,0x08,0xC8,0x01,0x21,0x08,0x08,0x01,0xA1,
0x03,0x3A,0x47,0x2A,0x27,0x2A,0x27,0x32,0x57,
0x03,0xEA,0x4F,0xFA,0x5F,0xFA,0x4F,0xEA,0x4F,
0x03,0xEA,0x54,0x62,0x54,0xEE,0x54,0xEA,0x54,
0x03,0x0A,0x01,0x0A,0x01,0x0A,0x02,0x0A,0x01,
0x03,0xEA,0x4F,0xFA,0x5F,0xFA,0x5B,0xFA,0x5B,
0x02,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x09,
0x02,0x00,0x00,0x00,0x08,0x2A,0x13,0xC8,0x4C,
0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0xA8,0x01,0xD9,
0x03,0x00,0x00,0x00,0x00,0x80,0x40,0x40,0x20,
0x02,0x03,0x02,0x0C,0x05,0x00,0x01,0x02,0x01,
0x04,0x08,0x68,0x01,0x41,0x08,0x28,0x01,0xC1,0x08,0xA8,0x01,0x01,0x08,0x68,0x01,0xA1,
0x03,0x22,0x17,0x2A,0x17,0x2A,0x57,0x22,0x57,
0x03,0xFA,0x5F,0xEA,0x4F,0xEA,0x4F,0xEA,0x5F,
0x03,0x66,0x54,0x66,0x54,0xEA,0x54,0xE6,0x54,
0x03,0x00,0x00,0x00,0x00,0x10,0xA0,0x40,0x40,
0x03,0x0A,0x01,0x0A,0x02,0x0A,0x02,0x0A,0x00,
0x03,0xFA,0x4F,0xEA,0x5F,0xFA,0x5F,0xFA,0x53,
0x02,0x15,0x06,0x13,0x18,0x2D,0x06,0x11,0x19,
0x02,0x96,0xE0,0x09,0x4C,0x16,0x1A,0x4C,0x92,
0x02,0x64,0x88,0xD0,0xBA,0x43,0x24,0xEC,0x5A,
0x03,0x90,0x70,0x1C,0x06,0x03,0x01,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,
0x03,0x22,0x57,0x32,0x56,0x32,0x57,0x32,0x16,
0x03,0xFA,0x5F,0xFA,0x5F,0xEA,0x4F,0xEA,0x5F,
0x03,0x62,0x5C,0xEA,0x54,0xE2,0x54,0x66,0x54,
0x03,0x80,0x11,0x83,0x15,0x82,0x14,0x80,0x10,
0x03,0x98,0x70,0x80,0x00,0x00,0x00,0x00,0x00,
0x03,0x0A,0x01,0x0A,0x01,0x0A,0x01,0x0A,0x01,
0x02,0x2C,0x30,0x05,0x06,0x0B,0x04,0x00,0x00,
0x02,0xE1,0x14,0x18,0x4E,0x80,0x12,0xEB,0x31,
0x02,0x80,0x4A,0x34,0x80,0xD0,0x60,0x00,0x80,
0x03,0x00,0x06,0x01,0x00,0x00,0x00,0x00,0x00,
0x03,0x70,0x38,0xAC,0x46,0x2B,0x13,0x08,0x04,
0x03,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x70,
0x03,0x00,0x00,0x00,0x00,0x00,0x42,0x24,0x18,
0x04,0x80,0x80,0x10,0x10,0x80,0x80,0x10,0x11,0x80,0x83,0x10,0x14,0x80,0x84,0x10,0x11,
0x03,0x02,0xC1,0x30,0x08,0x1F,0x60,0x80,0x00,
0x03,0x38,0x1C,0x8E,0x47,0xA2,0x71,0x08,0x04,
0x03,0x10,0x10,0x20,0xA0,0xE0,0xF0,0xBC,0x57,
0x04,0x80,0x84,0x10,0x16,0x80,0x84,0x10,0x11,0x80,0x81,0x10,0x14,0x80,0x81,0x10,0x16,
0x03,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x0B,0x07,0xA2,0x11,0x08,0x05,0x00,0x00,
0x03,0xE8,0xC1,0xE8,0x41,0xA8,0x01,0xA8,0x41,
0x04,0x80,0x80,0x10,0x10,0x80,0x85,0x10,0x14,0x80,0x81,0x10,0x13,0x80,0x86,0x10,0x10,
0x03,0x00,0x00,0x18,0x3C,0x2C,0x18,0x00,0x19,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0xDD,
0x03,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x1A,
0x03,0x00,0x00,0x00,0x08,0x70,0xC0,0x00,0x00,
0x03,0x08,0xDB,0x8A,0xDB,0x82,0x0F,0x00,0x55,
0x03,0x00,0xFF,0xA0,0xEA,0xA0,0xFF,0x00,0x7F,
0x03,0x00,0xFD,0x01,0xA9,0x01,0xF1,0x00,0xFF,
0x03,0x00,0x15,0x30,0x11,0x20,0x71,0x01,0xFF,
0x03,0x8E,0x17,0x07,0x39,0xFE,0xD7,0x55,0x55,
0x03,0x80,0x10,0x80,0x10,0x80,0x10,0x80,0x11,
0x03,0x00,0x41,0x23,0x2E,0x35,0x68,0xD0,0xA0,
0x03,0x74,0xA0,0x40,0xB8,0x06,0x00,0x00,0x00,
0x03,0xAA,0x00,0x0A,0x16,0x2A,0x1E,0x00,0x3E,
0x03,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0xFF,0x00,0x28,0x58,0xA8,0x78,0x00,0xF8,
0x03,0x02,0x04,0x04,0x09,0x00,0x1F,0x00,0x00,
0x03,0xB6,0x57,0xB3,0x57,0x00,0xFF,0x0A,0x00,
0x03,0xC0,0x60,0x60,0x70,0x00,0xF8,0xA8,0x00,
0x03,0x87,0x12,0x85,0x12,0x84,0x10,0x80,0x10,
0x03,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x38,0x54,0xAA,0xD2,0x82,0x44,0x38,0x00,
0x04,0x2A,0x0A,0x41,0x01,0xAA,0x0A,0xC1,0x01,0x8A,0x0A,0x42,0x02,0x2A,0x0A,0x01,0x01,
0x03,0x21,0x00,0x21,0x00,0x21,0x00,0x21,0x00,
0x03,0x57,0xB2,0x57,0xB2,0x57,0xB2,0x57,0x00,
0x03,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0x00,
0x03,0x03,0x03,0x01,0x00,0x01,0x02,0x04,0x04,
0x03,0xFB,0xCD,0xB6,0x30,0x76,0x61,0xE6,0x52,
0x03,0xEA,0xE1,0xEA,0x62,0x2A,0x02,0x8A,0x80,
0x03,0x3F,0x00,0x00,0x08,0x08,0x04,0x04,0x02,
0x03,0xFF,0x0A,0x00,0xB7,0x53,0xB7,0x57,0x36,
0x03,0xF8,0xA8,0x00,0xB0,0xB0,0x60,0x60,0xC0,
0x03,0x09,0x09,0x04,0x05,0x02,0x02,0x01,0x00,
0x03,0x95,0xB5,0x02,0xB6,0x31,0xB6,0x30,0x10,
0x03,0x4A,0x41,0x8A,0x81,0x0A,0x01,0x0A,0x01,
0x01,0x00,0x30,0x28,0x30,0x2A,0x33,0x28,0x30,
0x01,0x00,0x00,0x00,0x00,0x00,0x01,0xDB,0x6C,
0x01,0x00,0x30,0x28,0x30,0xAA,0xB3,0x28,0x30,
0x01,0x00,0x30,0x28,0x30,0xA8,0xB0,0x28,0x30,
0x01,0x00,0x30,0x28,0x30,0xA8,0xB2,0x2B,0x31,
0x01,0x28,0x30,0x28,0x30,0x28,0x30,0x28,0x00,
0x01,0x29,0x30,0x28,0x30,0x28,0x30,0x28,0x00,
0x01,0x80,0xC0,0x20,0x38,0x0E,0x01,0x00,0x00,
0x01,0x00,0x18,0x28,0x18,0xA8,0x98,0x28,0x18,
0x01,0x28,0x18,0x28,0x18,0x28,0x18,0x28,0x00,
}};
