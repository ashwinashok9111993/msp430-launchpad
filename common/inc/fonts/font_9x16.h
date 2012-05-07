/*
 * font_9x16.h
 *
 *  Created on: Apr 10, 2012
 *      Author: RobG @ 43oh
 */

#ifndef FONT_9X16_H_
#define FONT_9X16_H_

const unsigned char font_9x16[95][18] = {   // offset 0x20
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         //
0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x33, 0xFF, 0x33, 0xFF, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // !
0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,         // "
0x01, 0x20, 0x1F, 0xFE, 0x1F, 0xFE, 0x01, 0x20, 0x01, 0x20, 0x1F, 0xFE, 0x1F, 0xFE, 0x01, 0x20, 0x00, 0x00,         // #
0x06, 0x38, 0x0E, 0x3C, 0x08, 0x64, 0x3F, 0xFF, 0x3F, 0xFF, 0x09, 0x84, 0x0F, 0x1C, 0x07, 0x18, 0x00, 0x00,         // $
0x30, 0x1E, 0x1C, 0x33, 0x07, 0x1E, 0x01, 0xC0, 0x00, 0x70, 0x1E, 0x1C, 0x33, 0x07, 0x1E, 0x01, 0x00, 0x00,         // %
0x1F, 0x1E, 0x31, 0xB3, 0x20, 0xE1, 0x20, 0xE1, 0x31, 0xB3, 0x1F, 0x1E, 0x1B, 0x00, 0x31, 0x80, 0x00, 0x00,         // &
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // '
0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x3F, 0xFE, 0x78, 0x0F, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // (
0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x78, 0x0F, 0x3F, 0xFE, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // )
0x00, 0x80, 0x02, 0xA0, 0x03, 0xE0, 0x01, 0xC0, 0x01, 0xC0, 0x03, 0xE0, 0x02, 0xA0, 0x00, 0x80, 0x00, 0x00,         // *
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x03, 0xE0, 0x03, 0xE0, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00,         // +
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ,
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00,         // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // .
0x30, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0x00, 0x00,         // /
0x0F, 0xFC, 0x1F, 0xFE, 0x36, 0x03, 0x21, 0x81, 0x20, 0x61, 0x30, 0x1B, 0x1F, 0xFE, 0x0F, 0xFC, 0x00, 0x00,         // 0
0x20, 0x04, 0x20, 0x04, 0x20, 0x06, 0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,         // 1
0x38, 0x0C, 0x3C, 0x0E, 0x26, 0x03, 0x23, 0x01, 0x21, 0x81, 0x20, 0xC3, 0x20, 0x7E, 0x20, 0x3C, 0x00, 0x00,         // 2
0x0C, 0x0C, 0x1C, 0x0E, 0x30, 0x43, 0x20, 0x41, 0x20, 0x41, 0x30, 0x43, 0x1F, 0xFE, 0x0F, 0xBC, 0x00, 0x00,         // 3
0x0F, 0x00, 0x0F, 0xE0, 0x08, 0xFC, 0x08, 0x1F, 0x3F, 0x83, 0x3F, 0x80, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00,         // 4
0x0C, 0x3F, 0x1C, 0x3F, 0x30, 0x21, 0x20, 0x21, 0x20, 0x21, 0x30, 0x61, 0x1F, 0xC1, 0x0F, 0x81, 0x00, 0x00,         // 5
0x0F, 0xE0, 0x1F, 0xF8, 0x30, 0x5C, 0x20, 0x46, 0x20, 0x43, 0x30, 0xC1, 0x1F, 0x81, 0x0F, 0x01, 0x00, 0x00,         // 6
0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x3C, 0x01, 0x3F, 0x81, 0x03, 0xF1, 0x00, 0x7F, 0x00, 0x0F, 0x00, 0x00,         // 7
0x0F, 0x1C, 0x1F, 0xBE, 0x30, 0xE3, 0x20, 0x41, 0x20, 0x41, 0x30, 0xE3, 0x1F, 0xBE, 0x0F, 0x1C, 0x00, 0x00,         // 8
0x20, 0x3C, 0x20, 0x7E, 0x20, 0xC3, 0x30, 0x81, 0x18, 0x81, 0x0E, 0x83, 0x07, 0xFE, 0x01, 0xFC, 0x00, 0x00,         // 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x60, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // :
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x60, 0x70, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ;
0x00, 0x80, 0x01, 0xC0, 0x03, 0x60, 0x06, 0x30, 0x0C, 0x18, 0x18, 0x0C, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00,         // <
0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x00, 0x00,         // =
0x10, 0x04, 0x18, 0x0C, 0x0C, 0x18, 0x06, 0x30, 0x03, 0x60, 0x01, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,         // >
0x00, 0x06, 0x00, 0x07, 0x00, 0x03, 0x33, 0x01, 0x33, 0xC1, 0x00, 0xF3, 0x00, 0x3F, 0x00, 0x1E, 0x00, 0x00,         // ?
0x0F, 0xFC, 0x1F, 0xFE, 0x30, 0x03, 0x21, 0xE1, 0x23, 0xF1, 0x22, 0x11, 0x21, 0x13, 0x33, 0xFE, 0x13, 0xFC,         // @
0x3F, 0xFC, 0x3F, 0xFE, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x3F, 0xFE, 0x3F, 0xFC, 0x00, 0x00,         // A
0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x30, 0xE3, 0x1F, 0xBE, 0x0F, 0x1C, 0x00, 0x00,         // B
0x0F, 0xFC, 0x1F, 0xFE, 0x30, 0x03, 0x20, 0x01, 0x20, 0x01, 0x30, 0x03, 0x1C, 0x0E, 0x0C, 0x0C, 0x00, 0x00,         // C
0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x38, 0x07, 0x1F, 0xFE, 0x07, 0xF8, 0x00, 0x00,         // D
0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x01, 0x00, 0x00,         // E
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x01, 0x00, 0x00,         // F
0x0F, 0xFC, 0x1F, 0xFE, 0x30, 0x03, 0x20, 0x01, 0x20, 0x81, 0x30, 0x83, 0x1F, 0x8E, 0x0F, 0x8C, 0x00, 0x00,         // G
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // H
0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x00, 0x00,         // I
0x0C, 0x00, 0x1C, 0x00, 0x30, 0x00, 0x20, 0x00, 0x20, 0x00, 0x30, 0x00, 0x1F, 0xFF, 0x0F, 0xFF, 0x00, 0x00,         // J
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xC0, 0x01, 0xE0, 0x07, 0x38, 0x0E, 0x1C, 0x3C, 0x0F, 0x30, 0x03, 0x00, 0x00,         // K
0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00,         // L
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x78, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x78, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // M
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x1C, 0x00, 0x70, 0x01, 0xC0, 0x07, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // N
0x0F, 0xFC, 0x1F, 0xFE, 0x30, 0x03, 0x20, 0x01, 0x20, 0x01, 0x30, 0x03, 0x1F, 0xFE, 0x0F, 0xFC, 0x00, 0x00,         // O
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0xC3, 0x00, 0x7E, 0x00, 0x3C, 0x00, 0x00,         // P
0x0F, 0xFC, 0x1F, 0xFE, 0x30, 0x03, 0x20, 0x01, 0x60, 0x01, 0xF0, 0x03, 0x9F, 0xFE, 0x0F, 0xFC, 0x00, 0x00,         // Q
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x81, 0x00, 0x81, 0x01, 0x81, 0x1F, 0xC3, 0x3E, 0x7E, 0x20, 0x3C, 0x00, 0x00,         // R
0x0C, 0x3C, 0x1C, 0x7E, 0x30, 0x63, 0x20, 0xE1, 0x21, 0xC1, 0x31, 0x83, 0x1F, 0x8E, 0x0F, 0x0C, 0x00, 0x00,         // S
0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,         // T
0x0F, 0xFF, 0x1F, 0xFF, 0x30, 0x00, 0x20, 0x00, 0x20, 0x00, 0x30, 0x00, 0x1F, 0xFF, 0x0F, 0xFF, 0x00, 0x00,         // U
0x00, 0x3F, 0x01, 0xFF, 0x0F, 0xC0, 0x3C, 0x00, 0x3C, 0x00, 0x0F, 0xC0, 0x01, 0xFF, 0x00, 0x3F, 0x00, 0x00,         // V
0x01, 0xFF, 0x3F, 0xFF, 0x3E, 0x00, 0x01, 0xC0, 0x01, 0xC0, 0x3E, 0x00, 0x3F, 0xFF, 0x01, 0xFF, 0x00, 0x00,         // W
0x3C, 0x0F, 0x3F, 0x3F, 0x03, 0xF0, 0x00, 0xC0, 0x00, 0xC0, 0x03, 0xF0, 0x3F, 0x3F, 0x3C, 0x0F, 0x00, 0x00,         // X
0x00, 0x3F, 0x00, 0xFF, 0x01, 0xC0, 0x3F, 0x80, 0x3F, 0x80, 0x01, 0xC0, 0x00, 0xFF, 0x00, 0x3F, 0x00, 0x00,         // Y
0x38, 0x01, 0x3E, 0x01, 0x27, 0x81, 0x21, 0xC1, 0x20, 0x61, 0x20, 0x39, 0x20, 0x1F, 0x20, 0x07, 0x00, 0x00,         // Z
0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x01, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // [
0x00, 0x03, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0x30, 0x00, 0x00, 0x00,         // '\'
0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x20, 0x01, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ]
0x00, 0x04, 0x00, 0x04, 0x00, 0x06, 0x00, 0x03, 0x00, 0x03, 0x00, 0x06, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00,         // ^
0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,         // _
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // `
0x1E, 0x00, 0x3F, 0x40, 0x21, 0x20, 0x21, 0x20, 0x21, 0x20, 0x11, 0x20, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x00,         // a
0x3F, 0xFF, 0x3F, 0xFF, 0x10, 0x40, 0x20, 0x20, 0x20, 0x20, 0x30, 0x60, 0x1F, 0xC0, 0x0F, 0x80, 0x00, 0x00,         // b
0x0F, 0x80, 0x1F, 0xC0, 0x30, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x60, 0x10, 0x40, 0x00, 0x00,         // c
0x0F, 0x80, 0x1F, 0xC0, 0x30, 0x60, 0x20, 0x20, 0x20, 0x20, 0x10, 0x40, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // d
0x0F, 0x80, 0x1F, 0xC0, 0x32, 0x60, 0x22, 0x20, 0x22, 0x20, 0x22, 0x60, 0x33, 0xC0, 0x13, 0x80, 0x00, 0x00,         // e
0x00, 0x20, 0x00, 0x20, 0x3F, 0xFE, 0x3F, 0xFF, 0x00, 0x21, 0x00, 0x21, 0x00, 0x23, 0x00, 0x02, 0x00, 0x00,         // f
0x47, 0x80, 0x4F, 0xC0, 0xD8, 0x60, 0x90, 0x20, 0x90, 0x20, 0xC8, 0x40, 0x7F, 0xE0, 0x3F, 0xE0, 0x00, 0x00,         // g
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x60, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x00,         // h
0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x3F, 0xE3, 0x3F, 0xE3, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,         // i
0x00, 0x00, 0x40, 0x00, 0xC0, 0x20, 0x80, 0x20, 0xFF, 0xE3, 0x7F, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // j
0x3F, 0xFF, 0x3F, 0xFF, 0x06, 0x00, 0x07, 0x00, 0x0D, 0x80, 0x18, 0xC0, 0x30, 0x60, 0x20, 0x20, 0x00, 0x00,         // k
0x00, 0x00, 0x20, 0x01, 0x20, 0x01, 0x3F, 0xFF, 0x3F, 0xFF, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,         // l
0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0x60, 0x1F, 0xC0, 0x1F, 0xC0, 0x00, 0x60, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x00,         // m
0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x60, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x00,         // n
0x0F, 0x80, 0x1F, 0xC0, 0x30, 0x60, 0x20, 0x20, 0x20, 0x20, 0x30, 0x60, 0x1F, 0xC0, 0x0F, 0x80, 0x00, 0x00,         // o
0xFF, 0xE0, 0xFF, 0xE0, 0x10, 0x40, 0x20, 0x20, 0x20, 0x20, 0x30, 0x60, 0x1F, 0xC0, 0x0F, 0x80, 0x00, 0x00,         // p
0x0F, 0x80, 0x1F, 0xC0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x40, 0xFF, 0xE0, 0xFF, 0xE0, 0x00, 0x00,         // q
0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0xC0, 0x00, 0x40, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x40, 0x00, 0x00,         // r
0x10, 0xC0, 0x31, 0xE0, 0x21, 0x20, 0x23, 0x20, 0x26, 0x20, 0x24, 0x20, 0x3C, 0x60, 0x18, 0x40, 0x00, 0x00,         // s
0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x1F, 0xFE, 0x3F, 0xFE, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,         // t
0x1F, 0xE0, 0x3F, 0xE0, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0x00,         // u
0x03, 0xE0, 0x07, 0xE0, 0x1C, 0x00, 0x30, 0x00, 0x30, 0x00, 0x1C, 0x00, 0x07, 0xE0, 0x03, 0xE0, 0x00, 0x00,         // v
0x07, 0xE0, 0x3F, 0xE0, 0x38, 0x00, 0x07, 0xC0, 0x07, 0xC0, 0x38, 0x00, 0x3F, 0xE0, 0x07, 0xE0, 0x00, 0x00,         // w
0x30, 0x60, 0x3D, 0xE0, 0x0D, 0x80, 0x07, 0x00, 0x07, 0x00, 0x0D, 0x80, 0x3D, 0xE0, 0x30, 0x60, 0x00, 0x00,         // x
0x83, 0xE0, 0x8F, 0xE0, 0xDC, 0x00, 0x70, 0x00, 0x30, 0x00, 0x1C, 0x00, 0x0F, 0xE0, 0x03, 0xE0, 0x00, 0x00,         // y
0x30, 0x20, 0x38, 0x20, 0x2C, 0x20, 0x26, 0x20, 0x23, 0x20, 0x21, 0xA0, 0x20, 0xE0, 0x20, 0x60, 0x00, 0x00,         // z
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0xFE, 0x7F, 0x7F, 0x40, 0x01, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00,         // {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // |
0x00, 0x00, 0x40, 0x01, 0x40, 0x01, 0x7F, 0x7F, 0x3F, 0xFE, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // }
0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00          // ~
};

#endif /* FONT_9X16_H_ */
