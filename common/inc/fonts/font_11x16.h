/*
 * font_11x16.h
 *
 *  Created on: Apr 10, 2012
 *      Author: RobG @ 43oh
 */

#ifndef FONT_11X16_H_
#define FONT_11X16_H_


const unsigned char font_11x16[95][22] = {  // offset 0x20
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         //
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x33, 0xFF, 0x33, 0xFF, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // !
0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // "
0x02, 0x00, 0x1E, 0x10, 0x1F, 0x90, 0x03, 0xF0, 0x02, 0x7E, 0x1E, 0x1E, 0x1F, 0x90, 0x03, 0xF0, 0x02, 0x7E, 0x00, 0x1E, 0x00, 0x10,         // #
0x00, 0x00, 0x04, 0x78, 0x0C, 0xFC, 0x0C, 0xCC, 0x3F, 0xFF, 0x3F, 0xFF, 0x0C, 0xCC, 0x0F, 0xCC, 0x07, 0x88, 0x00, 0x00, 0x00, 0x00,         // $
0x30, 0x00, 0x38, 0x38, 0x1C, 0x38, 0x0E, 0x38, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x38, 0xE0, 0x38, 0x70, 0x38, 0x38, 0x00, 0x1C,         // %
0x00, 0x00, 0x1F, 0x00, 0x3F, 0xB8, 0x31, 0xFC, 0x21, 0xC6, 0x37, 0xE2, 0x1E, 0x3E, 0x1C, 0x1C, 0x36, 0x00, 0x22, 0x00, 0x00, 0x00,         // &
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // '
0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x0F, 0xFC, 0x1F, 0xFE, 0x38, 0x07, 0x20, 0x01, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // (
0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x20, 0x01, 0x38, 0x07, 0x1F, 0xFE, 0x0F, 0xFC, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // )
0x00, 0x00, 0x0C, 0x98, 0x0E, 0xB8, 0x03, 0xE0, 0x0F, 0xF8, 0x0F, 0xF8, 0x03, 0xE0, 0x0E, 0xB8, 0x0C, 0x98, 0x00, 0x00, 0x00, 0x00,         // *
0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x0F, 0xF0, 0x0F, 0xF0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,         // +
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x00, 0xF8, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ,
0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,         // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // .
0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E,         // /
0x07, 0xF8, 0x1F, 0xFE, 0x1E, 0x06, 0x33, 0x03, 0x31, 0x83, 0x30, 0xC3, 0x30, 0x63, 0x30, 0x33, 0x18, 0x1E, 0x1F, 0xFE, 0x07, 0xF8,         // 0
0x00, 0x00, 0x00, 0x00, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00,         // 1
0x30, 0x1C, 0x38, 0x1E, 0x3C, 0x07, 0x3E, 0x03, 0x37, 0x03, 0x33, 0x83, 0x31, 0xC3, 0x30, 0xE3, 0x30, 0x77, 0x30, 0x3E, 0x30, 0x1C,         // 2
0x0C, 0x0C, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x39, 0xE7, 0x1F, 0x7E, 0x0E, 0x3C,         // 3
0x03, 0xC0, 0x03, 0xE0, 0x03, 0x70, 0x03, 0x38, 0x03, 0x1C, 0x03, 0x0E, 0x03, 0x07, 0x3F, 0xFF, 0x3F, 0xFF, 0x03, 0x00, 0x03, 0x00,         // 4
0x0C, 0x3F, 0x1C, 0x7F, 0x38, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0x63, 0x38, 0xE3, 0x1F, 0xC3, 0x0F, 0x83,         // 5
0x0F, 0xC0, 0x1F, 0xF0, 0x39, 0xF8, 0x30, 0xDC, 0x30, 0xCE, 0x30, 0xC7, 0x30, 0xC3, 0x30, 0xC3, 0x39, 0xC3, 0x1F, 0x80, 0x0F, 0x00,         // 6
0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x30, 0x03, 0x3C, 0x03, 0x0F, 0x03, 0x03, 0xC3, 0x00, 0xF3, 0x00, 0x3F, 0x00, 0x0F, 0x00, 0x03,         // 7
0x0F, 0x00, 0x1F, 0xBC, 0x39, 0xFE, 0x30, 0xE7, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xE7, 0x39, 0xFE, 0x1F, 0xBC, 0x0F, 0x00,         // 8
0x00, 0x3C, 0x00, 0x7E, 0x30, 0xE7, 0x30, 0xC3, 0x30, 0xC3, 0x38, 0xC3, 0x1C, 0xC3, 0x0E, 0xC3, 0x07, 0xE7, 0x03, 0xFE, 0x00, 0xFC,         // 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x70, 0x1C, 0x70, 0x1C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // :
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9C, 0x70, 0xFC, 0x70, 0x7C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ;
0x00, 0x00, 0x00, 0xC0, 0x01, 0xE0, 0x03, 0xF0, 0x07, 0x38, 0x0E, 0x1C, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00,         // <
0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00,         // =
0x00, 0x00, 0x30, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0xF0, 0x01, 0xE0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00,         // >
0x00, 0x1C, 0x00, 0x1E, 0x00, 0x07, 0x00, 0x03, 0x37, 0x83, 0x37, 0xC3, 0x00, 0xE3, 0x00, 0x77, 0x00, 0x3E, 0x00, 0x1C, 0x00, 0x00,         // ?
0x0F, 0xF8, 0x1F, 0xFE, 0x18, 0x07, 0x33, 0xF3, 0x37, 0xFB, 0x36, 0x1B, 0x37, 0xFB, 0x37, 0xFB, 0x36, 0x07, 0x03, 0xFE, 0x01, 0xF8,         // @
0x38, 0x00, 0x3F, 0x00, 0x07, 0xE0, 0x06, 0xFC, 0x06, 0x1F, 0x06, 0x1F, 0x06, 0xFC, 0x07, 0xE0, 0x3F, 0x00, 0x38, 0x00, 0x00, 0x00,         // A
0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xE7, 0x39, 0xFE, 0x1F, 0xBC, 0x0F, 0x00, 0x00, 0x00,         // B
0x03, 0xF0, 0x0F, 0xFC, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0C, 0x0C, 0x00, 0x00,         // C
0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0F, 0xFC, 0x03, 0xF0, 0x00, 0x00,         // D
0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0x03, 0x30, 0x03, 0x00, 0x00,         // E
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00,         // F
0x03, 0xF0, 0x0F, 0xFC, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x3F, 0xC7, 0x3F, 0xC6, 0x00, 0x00,         // G
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // H
0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 0x30, 0x03, 0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x03, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // I
0x0E, 0x00, 0x1E, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x38, 0x00, 0x1F, 0xFF, 0x07, 0xFF, 0x00, 0x00,         // J
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xC0, 0x01, 0xE0, 0x03, 0xF0, 0x07, 0x38, 0x0E, 0x1C, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x00, 0x00,         // K
0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00,         // L
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x1E, 0x00, 0x78, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x78, 0x00, 0x1E, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // M
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x0E, 0x00, 0x38, 0x00, 0xF0, 0x03, 0xC0, 0x07, 0x00, 0x1C, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // N
0x03, 0xF0, 0x0F, 0xFC, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x30, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0F, 0xFC, 0x03, 0xF0, 0x00, 0x00,         // O
0x3F, 0xFF, 0x3F, 0xFF, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0xC7, 0x00, 0xFE, 0x00, 0x7C, 0x00, 0x00,         // P
0x03, 0xF0, 0x0F, 0xFC, 0x1C, 0x0E, 0x38, 0x07, 0x30, 0x03, 0x36, 0x03, 0x3E, 0x07, 0x1C, 0x0E, 0x3F, 0xFC, 0x33, 0xF0, 0x00, 0x00,         // Q
0x3F, 0xFF, 0x3F, 0xFF, 0x01, 0x83, 0x01, 0x83, 0x03, 0x83, 0x07, 0x83, 0x0F, 0x83, 0x1D, 0xC7, 0x38, 0xFE, 0x30, 0x7C, 0x00, 0x00,         // R
0x0C, 0x3C, 0x1C, 0x7E, 0x38, 0xE7, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x39, 0xC7, 0x1F, 0x8E, 0x0F, 0x0C, 0x00, 0x00,         // S
0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,         // T
0x07, 0xFF, 0x1F, 0xFF, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x38, 0x00, 0x1F, 0xFF, 0x07, 0xFF, 0x00, 0x00,         // U
0x00, 0x07, 0x00, 0x3F, 0x01, 0xF8, 0x0F, 0xC0, 0x3E, 0x00, 0x3E, 0x00, 0x0F, 0xC0, 0x01, 0xF8, 0x00, 0x3F, 0x00, 0x07, 0x00, 0x00,         // V
0x3F, 0xFF, 0x3F, 0xFF, 0x1C, 0x00, 0x06, 0x00, 0x03, 0x80, 0x03, 0x80, 0x06, 0x00, 0x1C, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // W
0x30, 0x03, 0x3C, 0x0F, 0x0E, 0x1C, 0x03, 0x30, 0x01, 0xE0, 0x01, 0xE0, 0x03, 0x30, 0x0E, 0x1C, 0x3C, 0x0F, 0x30, 0x03, 0x00, 0x00,         // X
0x00, 0x03, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x3F, 0xC0, 0x3F, 0xC0, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0x00, 0x00,         // Y
0x30, 0x03, 0x3C, 0x03, 0x3E, 0x03, 0x33, 0x03, 0x31, 0xC3, 0x30, 0xE3, 0x30, 0x33, 0x30, 0x1F, 0x30, 0x0F, 0x30, 0x03, 0x00, 0x00,         // Z
0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // [
0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x18, 0x00,         // '\'
0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // ]
0x00, 0x60, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x60,         // ^
0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00,         // _
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // `
0x1C, 0x00, 0x3E, 0x40, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x00,         // a
0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0xC0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x38, 0xE0, 0x1F, 0xC0, 0x0F, 0x80, 0x00, 0x00,         // b
0x0F, 0x80, 0x1F, 0xC0, 0x38, 0xE0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x18, 0xC0, 0x08, 0x80, 0x00, 0x00,         // c
0x0F, 0x80, 0x1F, 0xC0, 0x38, 0xE0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xE0, 0x30, 0xC0, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,         // d
0x0F, 0x80, 0x1F, 0xC0, 0x3B, 0xE0, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x13, 0xC0, 0x01, 0x80, 0x00, 0x00,         // e
0x00, 0xC0, 0x00, 0xC0, 0x3F, 0xFC, 0x3F, 0xFE, 0x00, 0xC7, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // f
0x03, 0x80, 0xC7, 0xC0, 0xCE, 0xE0, 0xCC, 0x60, 0xCC, 0x60, 0xCC, 0x60, 0xCC, 0x60, 0xE6, 0x60, 0x7F, 0xE0, 0x3F, 0xE0, 0x00, 0x00,         // g
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00,         // h
0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x60, 0x3F, 0xEC, 0x3F, 0xEC, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // i
0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xC0, 0x60, 0xFF, 0xEC, 0x7F, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // j
0x00, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x03, 0x00, 0x07, 0x80, 0x0F, 0xC0, 0x1C, 0xE0, 0x38, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,         // k
0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x03, 0x3F, 0xFF, 0x3F, 0xFF, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // l
0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0xE0, 0x00, 0xE0, 0x3F, 0xC0, 0x3F, 0xC0, 0x00, 0xE0, 0x00, 0xE0, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x00,         // m
0x00, 0x00, 0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x00,         // n
0x0F, 0x80, 0x1F, 0xC0, 0x38, 0xE0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x38, 0xE0, 0x1F, 0xC0, 0x0F, 0x80, 0x00, 0x00,         // o
0xFF, 0xE0, 0xFF, 0xE0, 0x0C, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x1C, 0xE0, 0x0F, 0xC0, 0x07, 0x80, 0x00, 0x00,         // p
0x07, 0x80, 0x0F, 0xC0, 0x1C, 0xE0, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x0C, 0x60, 0xFF, 0xE0, 0xFF, 0xE0, 0x00, 0x00,         // q
0x00, 0x00, 0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0x00,         // r
0x11, 0xC0, 0x33, 0xE0, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x3F, 0x60, 0x1E, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // s
0x00, 0x60, 0x00, 0x60, 0x1F, 0xFE, 0x3F, 0xFE, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // t
0x0F, 0xE0, 0x1F, 0xE0, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x18, 0x00, 0x3F, 0xE0, 0x3F, 0xE0, 0x00, 0x00,         // u
0x00, 0x60, 0x01, 0xE0, 0x07, 0x80, 0x1E, 0x00, 0x38, 0x00, 0x38, 0x00, 0x1E, 0x00, 0x07, 0x80, 0x01, 0xE0, 0x00, 0x60, 0x00, 0x00,         // v
0x07, 0xE0, 0x1F, 0xE0, 0x38, 0x00, 0x1C, 0x00, 0x0F, 0xE0, 0x0F, 0xE0, 0x1C, 0x00, 0x38, 0x00, 0x1F, 0xE0, 0x07, 0xE0, 0x00, 0x00,         // w
0x30, 0x60, 0x38, 0xE0, 0x1D, 0xC0, 0x0F, 0x80, 0x07, 0x00, 0x0F, 0x80, 0x1D, 0xC0, 0x38, 0xE0, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00,         // x
0x00, 0x00, 0x00, 0x60, 0x81, 0xE0, 0xE7, 0x80, 0x7E, 0x00, 0x1E, 0x00, 0x07, 0x80, 0x01, 0xE0, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00,         // y
0x30, 0x60, 0x38, 0x60, 0x3C, 0x60, 0x36, 0x60, 0x33, 0x60, 0x31, 0xE0, 0x30, 0xE0, 0x30, 0x60, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,         // z
0x00, 0x00, 0x00, 0x80, 0x01, 0xC0, 0x1F, 0xFC, 0x3F, 0x7E, 0x70, 0x07, 0x60, 0x03, 0x60, 0x03, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00,         // {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,         // |
0x00, 0x00, 0x60, 0x03, 0x60, 0x03, 0x60, 0x03, 0x70, 0x07, 0x3F, 0x7E, 0x1F, 0xFC, 0x01, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,         // }
0x00, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x00          // ~
};

#endif /* FONT_11X16_H_ */
