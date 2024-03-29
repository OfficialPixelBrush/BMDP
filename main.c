#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Font Variables
#define fontWidth 8
#define fontHeight 8

// Font Data
unsigned char font[256*256] = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x10,0x10,0x00,0x10,0x00,0x00,
	0x00,0x28,0x28,0x00,0x00,0x00,0x00,0x00,
	0x00,0x14,0x54,0x28,0x54,0x50,0x00,0x00,
	0x10,0x3C,0x50,0x38,0x14,0x78,0x10,0x00,
	0x00,0x64,0x68,0x10,0x2C,0x4C,0x00,0x00,
	0x00,0x20,0x50,0x24,0x58,0x34,0x00,0x00,
	0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x20,0x20,0x20,0x10,0x00,0x00,
	0x00,0x10,0x08,0x08,0x08,0x10,0x00,0x00,
	0x00,0x28,0x10,0x28,0x00,0x00,0x00,0x00,
	0x00,0x10,0x10,0x7C,0x10,0x10,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x10,0x20,0x00,
	0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,
	0x00,0x08,0x08,0x10,0x20,0x20,0x00,0x00,
	0x00,0x38,0x4C,0x54,0x64,0x38,0x00,0x00,
	0x00,0x10,0x30,0x10,0x10,0x38,0x00,0x00,
	0x00,0x38,0x44,0x18,0x20,0x7C,0x00,0x00,
	0x00,0x38,0x44,0x18,0x44,0x38,0x00,0x00,
	0x00,0x44,0x44,0x3C,0x04,0x04,0x00,0x00,
	0x00,0x7C,0x40,0x78,0x04,0x78,0x00,0x00,
	0x00,0x38,0x40,0x78,0x44,0x38,0x00,0x00,
	0x00,0x7C,0x04,0x08,0x10,0x10,0x00,0x00,
	0x00,0x38,0x44,0x38,0x44,0x38,0x00,0x00,
	0x00,0x38,0x44,0x3C,0x04,0x38,0x00,0x00,
	0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,
	0x00,0x00,0x10,0x00,0x00,0x10,0x20,0x00,
	0x00,0x08,0x10,0x20,0x10,0x08,0x00,0x00,
	0x00,0x00,0x7C,0x00,0x7C,0x00,0x00,0x00,
	0x00,0x20,0x10,0x08,0x10,0x20,0x00,0x00,
	0x00,0x38,0x08,0x10,0x00,0x10,0x00,0x00,
	0x00,0x38,0x48,0x50,0x44,0x38,0x00,0x00,
	0x00,0x38,0x44,0x7C,0x44,0x44,0x00,0x00,
	0x00,0x70,0x48,0x70,0x48,0x78,0x00,0x00,
	0x00,0x38,0x44,0x40,0x44,0x38,0x00,0x00,
	0x00,0x78,0x44,0x44,0x44,0x78,0x00,0x00,
	0x00,0x7C,0x40,0x70,0x40,0x7C,0x00,0x00,
	0x00,0x7C,0x40,0x70,0x40,0x40,0x00,0x00,
	0x00,0x38,0x40,0x4C,0x44,0x38,0x00,0x00,
	0x00,0x44,0x44,0x7C,0x44,0x44,0x00,0x00,
	0x00,0x38,0x10,0x10,0x10,0x38,0x00,0x00,
	0x00,0x7C,0x04,0x04,0x44,0x38,0x00,0x00,
	0x00,0x44,0x48,0x70,0x48,0x44,0x00,0x00,
	0x00,0x40,0x40,0x40,0x40,0x7C,0x00,0x00,
	0x00,0x44,0x6C,0x54,0x44,0x44,0x00,0x00,
	0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00,
	0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,
	0x00,0x78,0x44,0x78,0x40,0x40,0x00,0x00,
	0x00,0x38,0x44,0x44,0x4C,0x3C,0x00,0x00,
	0x00,0x78,0x44,0x78,0x44,0x44,0x00,0x00,
	0x00,0x3C,0x40,0x38,0x04,0x78,0x00,0x00,
	0x00,0x7C,0x10,0x10,0x10,0x10,0x00,0x00,
	0x00,0x44,0x44,0x44,0x44,0x38,0x00,0x00,
	0x00,0x44,0x44,0x44,0x28,0x10,0x00,0x00,
	0x00,0x44,0x44,0x54,0x6C,0x44,0x00,0x00,
	0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,
	0x00,0x44,0x28,0x10,0x10,0x10,0x00,0x00,
	0x00,0x7C,0x08,0x10,0x20,0x7C,0x00,0x00,
	0x00,0x30,0x20,0x20,0x20,0x30,0x00,0x00,
	0x00,0x20,0x20,0x10,0x08,0x08,0x00,0x00,
	0x00,0x18,0x08,0x08,0x08,0x18,0x00,0x00,
	0x00,0x10,0x28,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,
	0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x38,0x48,0x48,0x3C,0x00,0x00,
	0x00,0x40,0x40,0x78,0x44,0x78,0x00,0x00,
	0x00,0x00,0x38,0x40,0x40,0x38,0x00,0x00,
	0x00,0x04,0x04,0x3C,0x44,0x3C,0x00,0x00,
	0x00,0x00,0x38,0x78,0x40,0x38,0x00,0x00,
	0x00,0x08,0x10,0x38,0x10,0x10,0x00,0x00,
	0x00,0x00,0x38,0x48,0x38,0x08,0x30,0x00,
	0x00,0x40,0x40,0x78,0x44,0x44,0x00,0x00,
	0x00,0x10,0x00,0x10,0x10,0x10,0x00,0x00,
	0x00,0x10,0x00,0x10,0x10,0x10,0x20,0x00,
	0x00,0x40,0x48,0x70,0x48,0x48,0x00,0x00,
	0x00,0x20,0x20,0x20,0x20,0x10,0x00,0x00,
	0x00,0x00,0x68,0x54,0x54,0x54,0x00,0x00,
	0x00,0x00,0x78,0x44,0x44,0x44,0x00,0x00,
	0x00,0x00,0x38,0x44,0x44,0x38,0x00,0x00,
	0x00,0x00,0x78,0x44,0x7C,0x40,0x40,0x00,
	0x00,0x00,0x3C,0x44,0x7C,0x04,0x04,0x00,
	0x00,0x00,0x5C,0x60,0x40,0x40,0x00,0x00,
	0x00,0x00,0x3C,0x70,0x0C,0x78,0x00,0x00,
	0x00,0x10,0x38,0x10,0x10,0x08,0x00,0x00,
	0x00,0x00,0x44,0x44,0x44,0x3C,0x00,0x00,
	0x00,0x00,0x44,0x44,0x28,0x10,0x00,0x00,
	0x00,0x00,0x44,0x54,0x54,0x28,0x00,0x00,
	0x00,0x00,0x00,0x28,0x10,0x28,0x00,0x00,
	0x00,0x00,0x28,0x28,0x18,0x08,0x10,0x00,
	0x00,0x00,0x7C,0x08,0x30,0x7C,0x00,0x00,
	0x00,0x10,0x20,0x60,0x20,0x10,0x00,0x00,
	0x00,0x10,0x10,0x10,0x10,0x10,0x00,0x00,
	0x00,0x10,0x08,0x0C,0x08,0x10,0x00,0x00,
	0x00,0x00,0x34,0x48,0x00,0x00,0x00,0x00,
	0x54,0xAA,0x54,0xAA,0x54,0xAA,0x54,0x00,
	0x00,0x00,0x00,0x1F,0x10,0x10,0x10,0x10,
	0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0xF0,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0x1F,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0xF0,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0xFF,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0x1F,0x10,0x10,0x10,0x10,
	0x00,0x00,0x00,0xFF,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0xF0,0x10,0x10,0x10,0x10,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xAA,0xFE,0xAA,0xFE,0xAA,0xFE,0x00,
	0xFF,0xFF,0xFF,0xE0,0xEF,0xEF,0xEF,0xEF,
	0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0x0F,0xEF,0xEF,0xEF,0xEF,
	0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,
	0xEF,0xEF,0xEF,0xE0,0xFF,0xFF,0xFF,0xFF,
	0xEF,0xEF,0xEF,0x0F,0xFF,0xFF,0xFF,0xFF,
	0xEF,0xEF,0xEF,0x00,0xEF,0xEF,0xEF,0xEF,
	0xEF,0xEF,0xEF,0x00,0xFF,0xFF,0xFF,0xFF,
	0xEF,0xEF,0xEF,0xE0,0xEF,0xEF,0xEF,0xEF,
	0xFF,0xFF,0xFF,0x00,0xEF,0xEF,0xEF,0xEF,
	0xEF,0xEF,0xEF,0x0F,0xEF,0xEF,0xEF,0xEF,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0x00,0x54,0x00,0x54,0x00,0x54,0x00,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xEE,0xEE,0xEE,0xFE,0xEE,0xFE,0x00,
	0xFE,0xD6,0xD6,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xEA,0xAA,0xD6,0xAA,0xAE,0xFE,0x00,
	0xEE,0xC2,0xAE,0xC6,0xEA,0x86,0xEE,0x00,
	0xFE,0x9A,0x96,0xEE,0xD2,0xB2,0xFE,0x00,
	0xFE,0xDE,0xAE,0xDA,0xA6,0xCA,0xFE,0x00,
	0xFE,0xEE,0xEE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xEE,0xDE,0xDE,0xDE,0xEE,0xFE,0x00,
	0xFE,0xEE,0xF6,0xF6,0xF6,0xEE,0xFE,0x00,
	0xFE,0xD6,0xEE,0xD6,0xFE,0xFE,0xFE,0x00,
	0xFE,0xEE,0xEE,0x82,0xEE,0xEE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xEE,0xDE,0x00,
	0xFE,0xFE,0xFE,0x82,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0xEE,0xFE,0x00,
	0xFE,0xF6,0xF6,0xEE,0xDE,0xDE,0xFE,0x00,
	0xFE,0xC6,0xB2,0xAA,0x9A,0xC6,0xFE,0x00,
	0xFE,0xEE,0xCE,0xEE,0xEE,0xC6,0xFE,0x00,
	0xFE,0xC6,0xBA,0xE6,0xDE,0x82,0xFE,0x00,
	0xFE,0xC6,0xBA,0xE6,0xBA,0xC6,0xFE,0x00,
	0xFE,0xBA,0xBA,0xC2,0xFA,0xFA,0xFE,0x00,
	0xFE,0x82,0xBE,0x86,0xFA,0x86,0xFE,0x00,
	0xFE,0xC6,0xBE,0x86,0xBA,0xC6,0xFE,0x00,
	0xFE,0x82,0xFA,0xF6,0xEE,0xEE,0xFE,0x00,
	0xFE,0xC6,0xBA,0xC6,0xBA,0xC6,0xFE,0x00,
	0xFE,0xC6,0xBA,0xC2,0xFA,0xC6,0xFE,0x00,
	0xFE,0xFE,0xEE,0xFE,0xFE,0xEE,0xFE,0x00,
	0xFE,0xFE,0xEE,0xFE,0xFE,0xEE,0xDE,0x00,
	0xFE,0xF6,0xEE,0xDE,0xEE,0xF6,0xFE,0x00,
	0xFE,0xFE,0x82,0xFE,0x82,0xFE,0xFE,0x00,
	0xFE,0xDE,0xEE,0xF6,0xEE,0xDE,0xFE,0x00,
	0xFE,0xC6,0xF6,0xEE,0xFE,0xEE,0xFE,0x00,
	0xFE,0xC6,0xB6,0xAE,0xBA,0xC6,0xFE,0x00,
	0xFE,0xC6,0xBA,0x82,0xBA,0xBA,0xFE,0x00,
	0xFE,0x8E,0xB6,0x8E,0xB6,0x86,0xFE,0x00,
	0xFE,0xC6,0xBA,0xBE,0xBA,0xC6,0xFE,0x00,
	0xFE,0x86,0xBA,0xBA,0xBA,0x86,0xFE,0x00,
	0xFE,0x82,0xBE,0x8E,0xBE,0x82,0xFE,0x00,
	0xFE,0x82,0xBE,0x8E,0xBE,0xBE,0xFE,0x00,
	0xFE,0xC6,0xBE,0xB2,0xBA,0xC6,0xFE,0x00,
	0xFE,0xBA,0xBA,0x82,0xBA,0xBA,0xFE,0x00,
	0xFE,0xC6,0xEE,0xEE,0xEE,0xC6,0xFE,0x00,
	0xFE,0x82,0xFA,0xFA,0xBA,0xC6,0xFE,0x00,
	0xFE,0xBA,0xB6,0x8E,0xB6,0xBA,0xFE,0x00,
	0xFE,0xBE,0xBE,0xBE,0xBE,0x82,0xFE,0x00,
	0xFE,0xBA,0x92,0xAA,0xBA,0xBA,0xFE,0x00,
	0xFE,0xBA,0x9A,0xAA,0xB2,0xBA,0xFE,0x00,
	0xFE,0xC6,0xBA,0xBA,0xBA,0xC6,0xFE,0x00,
	0xFE,0x86,0xBA,0x86,0xBE,0xBE,0xFE,0x00,
	0xFE,0xC6,0xBA,0xBA,0xB2,0xC2,0xFE,0x00,
	0xFE,0x86,0xBA,0x86,0xBA,0xBA,0xFE,0x00,
	0xFE,0xC2,0xBE,0xC6,0xFA,0x86,0xFE,0x00,
	0xFE,0x82,0xEE,0xEE,0xEE,0xEE,0xFE,0x00,
	0xFE,0xBA,0xBA,0xBA,0xBA,0xC6,0xFE,0x00,
	0xFE,0xBA,0xBA,0xBA,0xD6,0xEE,0xFE,0x00,
	0xFE,0xBA,0xBA,0xAA,0x92,0xBA,0xFE,0x00,
	0xFE,0xBA,0xD6,0xEE,0xD6,0xBA,0xFE,0x00,
	0xFE,0xBA,0xD6,0xEE,0xEE,0xEE,0xFE,0x00,
	0xFE,0x82,0xF6,0xEE,0xDE,0x82,0xFE,0x00,
	0xFE,0xCE,0xDE,0xDE,0xDE,0xCE,0xFE,0x00,
	0xFE,0xDE,0xDE,0xEE,0xF6,0xF6,0xFE,0x00,
	0xFE,0xE6,0xF6,0xF6,0xF6,0xE6,0xFE,0x00,
	0xFE,0xEE,0xD6,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xFE,0xFE,0xFE,0x82,0xFE,0x00,
	0xDE,0xEE,0xFE,0xFE,0xFE,0xFE,0xFE,0x00,
	0xFE,0xFE,0xC6,0xB6,0xB6,0xC2,0xFE,0x00,
	0xFE,0xBE,0xBE,0x86,0xBA,0x86,0xFE,0x00,
	0xFE,0xFE,0xC6,0xBE,0xBE,0xC6,0xFE,0x00,
	0xFE,0xFA,0xFA,0xC2,0xBA,0xC2,0xFE,0x00,
	0xFE,0xFE,0xC6,0x86,0xBE,0xC6,0xFE,0x00,
	0xFE,0xF6,0xEE,0xC6,0xEE,0xEE,0xFE,0x00,
	0xFE,0xFE,0xC6,0xB6,0xC6,0xF6,0xCE,0x00,
	0xFE,0xBE,0xBE,0x86,0xBA,0xBA,0xFE,0x00,
	0xFE,0xEE,0xFE,0xEE,0xEE,0xEE,0xFE,0x00,
	0xFE,0xEE,0xFE,0xEE,0xEE,0xEE,0xDE,0x00,
	0xFE,0xBE,0xB6,0x8E,0xB6,0xB6,0xFE,0x00,
	0xFE,0xDE,0xDE,0xDE,0xDE,0xEE,0xFE,0x00,
	0xFE,0xFE,0x96,0xAA,0xAA,0xAA,0xFE,0x00,
	0xFE,0xFE,0x86,0xBA,0xBA,0xBA,0xFE,0x00,
	0xFE,0xFE,0xC6,0xBA,0xBA,0xC6,0xFE,0x00,
	0xFE,0xFE,0x86,0xBA,0x82,0xBE,0xBE,0x00,
	0xFE,0xFE,0xC2,0xBA,0x82,0xFA,0xFA,0x00,
	0xFE,0xFE,0xA2,0x9E,0xBE,0xBE,0xFE,0x00,
	0xFE,0xFE,0xC2,0x8E,0xF2,0x86,0xFE,0x00,
	0xFE,0xEE,0xC6,0xEE,0xEE,0xF6,0xFE,0x00,
	0xFE,0xFE,0xBA,0xBA,0xBA,0xC2,0xFE,0x00,
	0xFE,0xFE,0xBA,0xBA,0xD6,0xEE,0xFE,0x00,
	0xFE,0xFE,0xBA,0xAA,0xAA,0xD6,0xFE,0x00,
	0xFE,0xFE,0xFE,0xD6,0xEE,0xD6,0xFE,0x00,
	0xFE,0xFE,0xD6,0xD6,0xE6,0xF6,0xEE,0x00,
	0xFE,0xFE,0x82,0xF6,0xCE,0x82,0xFE,0x00,
	0xFE,0xEE,0xDE,0x9E,0xDE,0xEE,0xFE,0x00,
	0xFE,0xEE,0xEE,0xEE,0xEE,0xEE,0xFE,0x00,
	0xFE,0xEE,0xF6,0xF2,0xF6,0xEE,0xFE,0x00,
	0xFE,0xFE,0xCA,0xB6,0xFE,0xFE,0xFE,0x00,
	0xAA,0x00,0xAA,0x00,0xAA,0x00,0xAA,0x00
};

struct color {
	unsigned char red;
	unsigned char green;
	unsigned char blue;
};
unsigned int imageSizeX = 0;
unsigned int imageSizeY = 0;
typedef struct color color;
char* filename;
char outputFilename[256];

color** finalImage;


/* --- Font Rendering --- */
int renderPixel(int x, int y, color color) {
	finalImage[x][y].red = color.red;
	finalImage[x][y].green = color.green;
	finalImage[x][y].blue = color.blue;
	return 0;
}

// Render Character to Screen Position
void renderCharacter(char c, int startX, int startY, color frontColor, color backColor) {
	for (int y = 0; y <= fontHeight; y++) {
		unsigned char renderFontRow = font[y + c*fontHeight];
		
		for (int x = 0; x <= fontWidth; x++) {
			renderFontRow = renderFontRow << 1;
			char resultPixel = renderFontRow & 0x80;
			// Render Pixel if 1
			if (resultPixel) {
				renderPixel(startX+x,startY+y,backColor);
			} else {
				renderPixel(startX+x,startY+y,frontColor);
			}
		}
	}
	//printf("\n");
}

// Render String to Screen Position
void renderText(char* input, int startX, int startY, color frontColor, color backColor) {
	int i = 0;
	while (input[i] != 0) {
		renderCharacter(input[i], startX+(fontWidth*i), startY, frontColor, backColor);
		i++;
	}		
}

// NOTE: Breaks with non-square images
// Function to create and save as BMP file
int saveBMP(unsigned int lineCount, FILE* file) {
	fseek(file, 0, SEEK_SET);
	color black;
	black.red = 0x00;
	black.green = 0x00;
	black.blue = 0x00;
	color white;
	black.red = 0xFF;
	black.green = 0xFF;
	black.blue = 0xFF;
	unsigned int maxLineLength = 80;
	unsigned int currentLineCount = 0;

    char* line = malloc(maxLineLength * sizeof(char));
    while (fgets(line, maxLineLength, file))
    {
		renderText(line, 0, currentLineCount*fontHeight, white, black);
        //printf("line[%06d]: %s", lineCount, line);
        //if (line[strlen(line) - 1] != '\n')

            //printf("\n");
		currentLineCount++;
    }
    fclose(file);

    strcpy(outputFilename, filename);
    strcat(outputFilename, ".bmp");

    file = fopen(outputFilename, "wb");

    if (!file) {
        printf("Error creating file!\n");
        return 1;
    }

    unsigned int imageSize = imageSizeX * imageSizeY * 3;
    unsigned int headerSize = 54;
    unsigned int fileSize = imageSize + headerSize;

    // BMP file header
    unsigned int header[54] = {
        'B', 'M',                 // BMP signature
        (unsigned int)(fileSize & 0xFF),      // File size
        (unsigned int)(fileSize >> 8 & 0xFF),
        (unsigned int)(fileSize >> 16 & 0xFF),
        (unsigned int)(fileSize >> 24 & 0xFF),
        0, 0, 0, 0,              // Reserved
        headerSize, 0, 0, 0,     // Image data offset ; 14 bytes up to this point
        40, 0, 0, 0,             // DIB header size
        (unsigned int)(imageSizeX & 0xFF),        // Image width
        (unsigned int)(imageSizeX >> 8 & 0xFF),
        (unsigned int)(imageSizeX >> 16 & 0xFF),
        (unsigned int)(imageSizeX >> 24 & 0xFF),
        (unsigned int)(imageSizeY & 0xFF),       // Image height
        (unsigned int)(imageSizeY >> 8 & 0xFF),
        (unsigned int)(imageSizeY >> 16 & 0xFF),
        (unsigned int)(imageSizeY >> 24 & 0xFF),
        1, 0,                    // Number of color planes
        24, 0,                   // Bits per pixel (24-bit color)
        0, 0, 0, 0,              // Compression method
        //0, 0, 0, 0,              // Image size, a dummy 0 can be given for BI_RGB bitmaps.
        (unsigned int)(imageSize & 0xFF),    // Image size
        (unsigned int)(imageSize >> 8 & 0xFF),
        (unsigned int)(imageSize >> 16 & 0xFF),
        (unsigned int)(imageSize >> 24 & 0xFF),
        0x13, 0x0B, 0, 0,              // Horizontal resolution (pixels per meter)
        0x13, 0x0B, 0, 0,              // Vertical resolution (pixels per meter)
        0, 0, 0, 0,              // Number of colors in the color palette
        0, 0, 0, 0,              // Number of important colors used
    };

	// Write Header
	unsigned int numBytes = 0;
	for (int i = 0; i < headerSize; i++) {
		fputc(header[i],file);
		numBytes++;
	}
    // Write image data (BGR format)
	// Also write from bottom to top!!
	for (int y = imageSizeY; y > 0; y--) {
		for (int x = 0; x < imageSizeX; x++) {
			// Assuming r, g, and b represent the red, green, and blue components respectively for each pixel.
			color c = finalImage[x][y];
			//printf("%d\n", c.red);
			//char pixel[3] = {c.blue,c.green,c.red};
			//fwrite(pixel, sizeof(char), 3, file);
			fputc(c.blue,file);
			fputc(c.green,file);
			fputc(c.red,file);
			numBytes += 3;
		}
		// Padding bytes
		for (int i = 0; i < imageSizeX*3%4; i++) {
			fputc(0,file);
		}
	}

	printf("Saved %s (%d Bytes)\n", outputFilename, numBytes);
    fclose(file);
	return 0;
}

int createImage(FILE* file) {
	unsigned int maxLineLength = 120;
	unsigned int lineCount = 0;
    char* line = calloc(maxLineLength, sizeof(char));
    while (fgets(line, maxLineLength, file))
    {
        /* Print each line */
        //printf("line[%06d]: %s", ++lineCount, line);
		lineCount++;
		/* Get formatting of headers 
		for (int i = 0; i < maxLineLength; i++) {
			line[i]
		}*/
        
        /* Add a trailing newline to lines that don't already have one */
        /*if (line[strlen(line) - 1] != '\n')
            printf("\n");
		*/
    }
	imageSizeX = maxLineLength * fontWidth;
	imageSizeY = lineCount * fontHeight;
	printf("Image Size: %dx%d\n", imageSizeX, imageSizeY);
	finalImage = (color**)malloc(imageSizeX * sizeof(color*));
	if (finalImage == NULL) {
		printf("Couldn't allocate memory for image!\n");
		return 1;
	} else {
		printf("Allocated Image Memory\n");
	}

    for (int i = 0; i < imageSizeX; i++) {
        finalImage[i] = (color*)calloc(imageSizeY, sizeof(color));
		if (finalImage[i] == NULL) {
			printf("Couldn't allocate memory for image!\n");
			return 1;
		}
	}
	saveBMP(lineCount, file);
	return 0;
}

int main(int argc, char *argv[]) {
	FILE* file;
	if (argc > 1) {
		// Get the file
		filename = argv[1];
		if ((file = fopen(filename,"r")) == NULL){
			printf("Error Opening file!\n");
			return 1;
		}
		createImage(file);
	} else {
		printf("No file provided.\n");
		return 0;
	}
	return 0;
}