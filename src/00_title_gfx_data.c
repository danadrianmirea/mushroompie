#include <gb/gb.h>
#include "include/dizzy_types.h"

// items

const tile_data_t const coin_tiles = {4, {
0x01, 0x00,0x03,0x0C,0x13,0x2E,0x2C,0x58,0x59,
0x01, 0x00,0xE0,0x18,0xE4,0x3A,0x1E,0xCD,0xCF,
0x01, 0x5E,0x58,0x59,0x2C,0x2E,0x17,0x0D,0x03,
0x01, 0x3D,0x0F,0xCF,0xDE,0x3E,0xFC,0x78,0xE0,
}};
const tile_data_t const pickaxe_tiles = {4, {
0x02, 0x60,0xF0,0xF8,0x78,0x34,0x0E,0x07,0x03,
0x02, 0x00,0x00,0x00,0x01,0x01,0x01,0x03,0x83,
0x02, 0x01,0x00,0x00,0x00,0x00,0x00,0x03,0x3F,
0x02, 0xC7,0xE7,0x4E,0x1E,0x3C,0x7B,0xF6,0xC4
}};
const tile_data_t const key_tiles = {4, {
0x01, 0x3E,0x7F,0xE3,0xC1,0xC1,0xE3,0x7F,0x3E,
0x01, 0x00,0x00,0x80,0x80,0x80,0x80,0x40,0xE0,
0x01, 0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x01, 0xF0,0x78,0x3C,0xDE,0xEF,0xB6,0x70,0x20
}};
const tile_data_t const mushrooms_tiles = {4, {
0x03, 0x0C,0x1F,0x3F,0x70,0x06,0x02,0x1D,0x39,
0x03, 0x1C,0x0C,0x94,0x20,0x20,0x40,0x4C,0x3C,
0x03, 0x71,0x65,0x05,0x3B,0x33,0x29,0x09,0x00,
0x03, 0x7C,0x3C,0x8C,0x20,0x4E,0x46,0xCA,0x00
}};
const tile_data_t const grass_tiles = {4, {
0x02, 0x09,0x09,0x09,0x18,0x18,0x18,0x98,0x91,
0x02, 0x06,0x84,0x84,0x84,0x84,0x84,0xA2,0xA2,
0x02, 0x91,0x91,0x91,0x09,0x0D,0x0D,0x4D,0x4D,
0x02, 0xA2,0x12,0x12,0x52,0x52,0x52,0x52,0x52
}};
const tile_data_t const blockage0_tiles = {4, {
0x03, 0x0F,0x3E,0x77,0xFA,0xD4,0x60,0x34,0x0F,
0x03, 0xE0,0xB8,0x56,0x89,0x41,0x02,0x1C,0xE0,
0x03, 0x0F,0x1F,0x3A,0x7F,0xEA,0xFD,0xDA,0x7F,
0x03, 0xC0,0x60,0xB0,0x58,0xE6,0x51,0x81,0xD1
}};
const tile_data_t const blockage1_tiles = {4, {
0x00, 
0x00,
0x03, 0x18,0x3C,0x6E,0x97,0x8B,0x95,0x42,0x3C,
0x03, 0x07,0x1F,0x3A,0x6D,0xFA,0xD5,0xFA,0x7F
}};
const tile_data_t const blockage2_tiles = {4, {
0x00, 
0x00,
0x00,
0x03, 0xC0,0x70,0x88,0x54,0x02,0x41,0x01,0xFE
}};
const tile_data_t const pie_tiles = {4, {
0x01, 0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0xFE,
0x01, 0x00,0x00,0x00,0x00,0x00,0x00,0xB6,0xDB,
0x01, 0xFF,0x3E,0x41,0x7E,0x7F,0x7E,0x3F,0x00,
0x01, 0xFF,0xFE,0x01,0xAA,0x54,0xAA,0x54,0x00
}};
const tile_data_t const jar_tiles = {4, {
0x01, 0x03,0x0C,0x12,0x1C,0x23,0x28,0x5C,0x51,
0x01, 0xC0,0x30,0x88,0x38,0xC4,0x14,0xBA,0x7A,
0x01, 0x42,0x55,0x48,0x45,0x4A,0x31,0x0F,0x00,
0x01, 0xFA,0x7A,0x1E,0x66,0xFE,0x4C,0xF0,0x00,
}};
const tile_data_t const lid_tiles = {4, {
0x03, 0x00,0x00,0x03,0x08,0x12,0x29,0x1A,0x28,
0x03, 0x00,0x00,0xC0,0x30,0xD8,0xD8,0xDC,0x1C,
0x03, 0x1C,0x2F,0x17,0x2B,0x13,0x0C,0x03,0x00,
0x03, 0x3C,0xF8,0xF8,0xF4,0xC8,0x30,0xC0,0x00,
}};

// title, inventory frame and font and other

const unsigned char const title_map[] = {
0x80,0x81,0x81,0x82,0x82,0x83,0x84,0x83,0x81,0x84,0x81,0x82,0x83,0x84,0x83,0x84,0x82,0x81,0x82,0x85,
0x86,0x87,0x87,0x88,0x88,0x89,0x8A,0x89,0x87,0x8A,0x87,0x88,0x89,0x8A,0x89,0x8A,0x88,0x87,0x88,0x8B,
0x8C,0x8D,0x8D,0x8E,0x8E,0x8F,0x90,0x8F,0x8D,0x90,0x8D,0x8E,0x8F,0x90,0x8F,0x90,0x8E,0x8D,0x8E,0x91
};

const tile_data_t const energy_tiles = {4, {
0x01, 0x00,0x3F,0x7F,0x7F,0x7F,0x7F,0x3F,0x00,
0x01, 0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x01, 0x00,0xFC,0xFE,0xFE,0xFE,0xFE,0xFC,0x00,
0x00
}};

const tile_data_t const dialog_frame_tiles = {7, {
0x03,0x00,0x3C,0x52,0x6A,0x52,0x6A,0x52,0x6A,
0x03,0x00,0x3F,0x55,0x6A,0x55,0x40,0x3F,0x00,
0x03,0x91,0x66,0x5A,0xAC,0x35,0x5A,0x66,0x89,
0x03,0x00,0xFF,0x55,0xAA,0x55,0x00,0xFF,0x00,
0x03,0x00,0xFC,0x56,0xAA,0x56,0x02,0xFC,0x00,
0x03,0x52,0x6A,0x52,0x6A,0x52,0x6A,0x52,0x6A,
0x03,0x52,0x6A,0x52,0x6A,0x52,0x6A,0x3C,0x00,
}};

const tile_data_t const title_tiles = {18, {
0x02, 0x07,0x1F,0x39,0x66,0x55,0xFA,0x55,0xEA,
0x02, 0x55,0xBF,0xF7,0xE2,0x4D,0xAA,0x54,0xA8,
0x02, 0x40,0xEA,0x4F,0x8F,0x3D,0x6A,0xD5,0xAA,
0x02, 0x01,0xAB,0xF7,0xEE,0x57,0xAA,0x55,0x8A,
0x02, 0x55,0xBF,0xFF,0xAA,0x45,0x9A,0x55,0xAA,
0x02, 0x50,0xF8,0x54,0xAE,0x4C,0x9A,0x55,0x98,
0x02, 0x55,0xEA,0x75,0xEA,0x75,0xEA,0x75,0xE8,
0x02, 0x53,0x86,0x55,0xAA,0x45,0xAA,0x4D,0xAA,
0x02, 0x55,0xAA,0x54,0xAA,0x54,0xAA,0x55,0xAA,
0x02, 0x05,0x2B,0x55,0xAB,0x57,0xAE,0x5D,0xBA,
0x02, 0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,
0x02, 0x55,0x98,0x35,0xE8,0x55,0xAA,0x50,0xAA,
0x02, 0x53,0xEA,0x75,0x0A,0x41,0x20,0x15,0x02,
0x02, 0x4D,0x9A,0x35,0xAA,0x50,0x80,0x55,0x00,
0x02, 0x54,0xAA,0x54,0x81,0x03,0x02,0x50,0x2A,
0x02, 0xD4,0xA9,0xD5,0xAA,0x54,0x80,0x01,0xAA,
0x02, 0x53,0xAA,0x55,0xA2,0x05,0x00,0x55,0x0A,
0x02, 0x10,0x6A,0x50,0xA2,0x44,0x08,0x10,0xA0
}};

const tile_data_t const font_tiles = {58, {
0x01, 0x00,0x10,0x38,0x38,0x10,0x10,0x00,0x10,
0x01, 0x00,0x36,0x36,0x12,0x24,0x00,0x00,0x00,
0x01, 0x00,0x00,0x24,0x7E,0x24,0x24,0x7E,0x24,
0x01, 0x00,0x00,0x08,0x3E,0x28,0x3E,0x0A,0x3E,
0x01, 0x00,0x00,0x66,0x6C,0x18,0x30,0x6C,0xCC,
0x01, 0x00,0x00,0x00,0x00,0x08,0x1C,0x08,0x00,
0x01, 0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x00,
0x01, 0x00,0x00,0x38,0x70,0x60,0x60,0x70,0x38,
0x01, 0x00,0x00,0x38,0x1C,0x0C,0x0C,0x1C,0x38,
0x01, 0x00,0x00,0x00,0x2C,0x38,0x1C,0x34,0x00,
0x01, 0x00,0x00,0x18,0x18,0x7E,0x7E,0x18,0x18,
0x01, 0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x30,
0x01, 0x00,0x00,0x00,0x00,0x3C,0x78,0x00,0x00,
0x01, 0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,
0x01, 0x00,0x00,0x06,0x0C,0x18,0x30,0x60,0xC0,
0x01, 0x00,0x7C,0xEE,0xC6,0xC6,0xC6,0xEE,0x7C,
0x01, 0x00,0x18,0x38,0x38,0x18,0x18,0x3E,0x7C,
0x01, 0x00,0x7C,0xCE,0x9C,0x38,0x70,0xE6,0xFE,
0x01, 0x00,0x7E,0xCC,0x98,0x3C,0x0E,0xCE,0x7C,
0x01, 0x08,0x60,0xC8,0xD8,0x7E,0x18,0x18,0x10,
0x01, 0x00,0xFC,0x66,0x60,0x7C,0x0E,0xCE,0x7C,
0x01, 0x00,0x3C,0x60,0xDC,0xF6,0xC2,0xE6,0x7C,
0x01, 0x00,0x7E,0xE6,0x0E,0x1C,0x38,0x30,0x30,
0x01, 0x00,0x7C,0xEE,0xC6,0x7C,0xC6,0xEE,0x7C,
0x01, 0x00,0x7C,0xCE,0x86,0xDE,0x76,0x0C,0x78,
0x01, 0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x00,
0x01, 0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x30,
0x01, 0x00,0x00,0x18,0x30,0x60,0x60,0x30,0x18,
0x01, 0x00,0x00,0x3C,0x78,0x00,0x3C,0x78,0x00,
0x01, 0x00,0x00,0x30,0x18,0x0C,0x0C,0x18,0x30,
0x01, 0x00,0x7C,0xC6,0x46,0x1C,0x30,0x00,0x30,
0x01, 0x00,0x38,0x7C,0x7C,0xFE,0xFE,0xFE,0x7C,
0x01, 0x00,0x3C,0x66,0xC6,0xFE,0xC6,0xE6,0x66,
0x01, 0x00,0xD8,0xEC,0xCC,0xFC,0xC6,0xE6,0xDC,
0x01, 0x00,0x38,0x6C,0xC6,0xC0,0xC2,0xEE,0x7C,
0x01, 0x00,0xDC,0xE6,0xC6,0xC6,0xC6,0xCC,0xF8,
0x01, 0x00,0xDC,0xE6,0x60,0x7C,0x60,0xE6,0xDC,
0x01, 0x00,0xEE,0x72,0x60,0x7C,0x60,0xE0,0xC0,
0x01, 0x00,0x3C,0x66,0xC0,0xCE,0xC4,0xEC,0x78,
0x01, 0x00,0xCC,0xC6,0xC6,0xFE,0xC6,0xC6,0x66,
0x01, 0x00,0x7E,0x98,0x30,0x30,0x30,0x1A,0xFC,
0x01, 0x00,0x3E,0x0C,0x0C,0xE6,0x66,0xC6,0x7C,
0x01, 0x00,0xC0,0x66,0x6C,0x78,0x78,0xEC,0xC6,
0x01, 0x00,0xC0,0xE0,0x60,0x60,0x60,0xFC,0xC2,
0x01, 0x00,0x66,0xFE,0xD6,0xD6,0xC6,0xE6,0x66,
0x01, 0x00,0xCC,0xE6,0xE6,0xD6,0xCE,0xCE,0x66,
0x01, 0x00,0x38,0x6C,0xC6,0xC6,0xC6,0xEE,0x7C,
0x01, 0x00,0xDC,0xE6,0xC6,0xCE,0xF8,0xC0,0xC0,
0x01, 0x00,0x38,0x6C,0xC6,0xD6,0xCC,0xEC,0x76,
0x01, 0x00,0xDC,0xE6,0xC6,0xEC,0xD8,0xCC,0xC6,
0x01, 0x00,0x3C,0x66,0x62,0x3C,0x46,0xC6,0x7C,
0x01, 0x00,0xFE,0xBA,0x18,0x18,0x18,0x38,0x30,
0x01, 0x00,0xE6,0x66,0xC6,0xC6,0xC6,0xC6,0x7C,
0x01, 0x00,0xCE,0xCC,0xC6,0xC6,0xC6,0x6C,0x38,
0x01, 0x00,0xCC,0xCE,0xC6,0xD6,0xD6,0xFE,0x6C,
0x01, 0x00,0xEE,0xC6,0x6C,0x38,0x6C,0xC6,0xEE,
0x01, 0x00,0xCC,0xC6,0x66,0x3C,0x18,0x30,0x60,
0x01, 0x00,0x76,0xEC,0x98,0x30,0x62,0xDE,0xBC
}};
