#define FILE void
#include "defines.h"
struct optcode opt_table[] = {
  { "ADC #x", 0x69, 7, 0 },
  { "ADC (x,X)", 0x61, 7, 0 },
  { "ADC (x),Y", 0x71, 7, 0 },
  { "ADC (x)", 0x72, 7, 0 },
  { "ADC x,X", 0x75, 7, 1 },
  { "ADC ?,X", 0x7D, 2, 0 },
  { "ADC ?,Y", 0x79, 2, 0 },
  { "ADC x", 0x65, 7, 1 },
  { "ADC ?", 0x6D, 2, 0 },
  { "ADC.B #x", 0x69, 7, 0 },
  { "ADC.B (x,X)", 0x61, 7, 0 },
  { "ADC.B (x),Y", 0x71, 7, 0 },
  { "ADC.B (x)", 0x72, 7, 0 },
  { "ADC.B x,X", 0x75, 7, 0 },
  { "ADC.W ?,X", 0x7D, 2, 0 },
  { "ADC.W ?,Y", 0x79, 2, 0 },
  { "ADC.B x", 0x65, 7, 0 },
  { "ADC.W ?", 0x6D, 2, 0 },

  { "AND #x", 0x29, 7, 0 },
  { "AND (x,X)", 0x21, 7, 0 },
  { "AND (x),Y", 0x31, 7, 0 },
  { "AND (x)", 0x32, 7, 0 },
  { "AND x,X", 0x35, 7, 1 },
  { "AND ?,X", 0x3D, 2, 0 },
  { "AND ?,Y", 0x39, 2, 0 },
  { "AND x", 0x25, 7, 1 },
  { "AND ?", 0x2D, 2, 0 },
  { "AND.B #x", 0x29, 7, 0 },
  { "AND.B (x,X)", 0x21, 7, 0 },
  { "AND.B (x),Y", 0x31, 7, 0 },
  { "AND.B (x)", 0x32, 7, 0 },
  { "AND.B x,X", 0x35, 7, 0 },
  { "AND.W ?,X", 0x3D, 2, 0 },
  { "AND.W ?,Y", 0x39, 2, 0 },
  { "AND.B x", 0x25, 7, 0 },
  { "AND.W ?", 0x2D, 2, 0 },

  { "ASL A", 0x0A, 0, 0 },
  { "ASL x,X", 0x16, 7, 1 },
  { "ASL ?,X", 0x1E, 2, 0 },
  { "ASL x", 0x06, 7, 1 },
  { "ASL ?", 0x0E, 2, 0 },
  { "ASL.B x,X", 0x16, 7, 0 },
  { "ASL.W ?,X", 0x1E, 2, 0 },
  { "ASL.B x", 0x06, 7, 0 },
  { "ASL.W ?", 0x0E, 2, 0 },
  { "ASL", 0x0A, 0, 0 },

  { "BBR0 x,x", 0x0F, 8, 0 },
  { "BBR1 x,x", 0x1F, 8, 0 },
  { "BBR2 x,x", 0x2F, 8, 0 },
  { "BBR3 x,x", 0x3F, 8, 0 },
  { "BBR4 x,x", 0x4F, 8, 0 },
  { "BBR5 x,x", 0x5F, 8, 0 },
  { "BBR6 x,x", 0x6F, 8, 0 },
  { "BBR7 x,x", 0x7F, 8, 0 },
  { "BBS0 x,x", 0x8F, 8, 0 },
  { "BBS1 x,x", 0x9F, 8, 0 },
  { "BBS2 x,x", 0xAF, 8, 0 },
  { "BBS3 x,x", 0xBF, 8, 0 },
  { "BBS4 x,x", 0xCF, 8, 0 },
  { "BBS5 x,x", 0xDF, 8, 0 },
  { "BBS6 x,x", 0xEF, 8, 0 },
  { "BBS7 x,x", 0xFF, 8, 0 },

  { "BCC x", 0x90, 9, 0 },
  { "BCS x", 0xB0, 9, 0 },
  { "BEQ x", 0xF0, 9, 0 },
  { "BMI x", 0x30, 9, 0 },
  { "BNE x", 0xD0, 9, 0 },
  { "BPL x", 0x10, 9, 0 },
  { "BVC x", 0x50, 9, 0 },
  { "BVS x", 0x70, 9, 0 },
  { "BSR x", 0x44, 9, 0 },
  { "BRA x", 0x80, 9, 0 },
  { "BCC.B x", 0x90, 9, 0 },
  { "BCS.B x", 0xB0, 9, 0 },
  { "BEQ.B x", 0xF0, 9, 0 },
  { "BMI.B x", 0x30, 9, 0 },
  { "BNE.B x", 0xD0, 9, 0 },
  { "BPL.B x", 0x10, 9, 0 },
  { "BVC.B x", 0x50, 9, 0 },
  { "BVS.B x", 0x70, 9, 0 },
  { "BSR.B x", 0x44, 9, 0 },
  { "BRA.B x", 0x80, 9, 0 },

  { "BIT #x", 0x89, 7, 0 },
  { "BIT x,X", 0x34, 7, 1 },
  { "BIT ?,X", 0x3C, 2, 0 },
  { "BIT x", 0x24, 7, 1 },
  { "BIT ?", 0x2C, 2, 0 },
  { "BIT.B x,X", 0x34, 7, 1 },
  { "BIT.W ?,X", 0x3C, 2, 0 },
  { "BIT.B x", 0x24, 7, 1 },
  { "BIT.W ?", 0x2C, 2, 0 },

  { "BRK x", 0x00, 7, 0 },
  { "BRK.B x", 0x00, 7, 0 },
  { "BRK", 0x0000, 3, 0 },

  { "CLC", 0x18, 0, 0 },
  { "CLD", 0xD8, 0, 0 },
  { "CLI", 0x58, 0, 0 },
  { "CLV", 0xB8, 0, 0 },
  { "CSL", 0x54, 0, 0 },
  { "CLA", 0x62, 0, 0 },
  { "CLX", 0x82, 0, 0 },
  { "CLY", 0xC2, 0, 0 },
  { "CSH", 0xD4, 0, 0 },

  { "CMP #x", 0xC9, 7, 0 },
  { "CMP (x,X)", 0xC1, 7, 0 },
  { "CMP (x),Y", 0xD1, 7, 0 },
  { "CMP (x)", 0xD2, 7, 0 },
  { "CMP x,X", 0xD5, 7, 1 },
  { "CMP ?,X", 0xDD, 2, 0 },
  { "CMP ?,Y", 0xD9, 2, 0 },
  { "CMP x", 0xC5, 7, 1 },
  { "CMP ?", 0xCD, 2, 0 },
  { "CMP.B #x", 0xC9, 7, 0 },
  { "CMP.B (x,X)", 0xC1, 7, 0 },
  { "CMP.B (x),Y", 0xD1, 7, 0 },
  { "CMP.B (x)", 0xD2, 7, 0 },
  { "CMP.B x,X", 0xD5, 7, 0 },
  { "CMP.W ?,X", 0xDD, 2, 0 },
  { "CMP.W ?,Y", 0xD9, 2, 0 },
  { "CMP.B x", 0xC5, 7, 0 },
  { "CMP.W ?", 0xCD, 2, 0 },

  { "CPX #x", 0xE0, 7, 0 },
  { "CPX x", 0xE4, 7, 1 },
  { "CPX ?", 0xEC, 2, 0 },
  { "CPX.B #x", 0xE0, 7, 0 },
  { "CPX.B x", 0xE4, 7, 0 },
  { "CPX.W ?", 0xEC, 2, 0 },

  { "CPY #x", 0xC0, 7, 0 },
  { "CPY x", 0xC4, 7, 1 },
  { "CPY ?", 0xCC, 2, 0 },
  { "CPY.B #x", 0xC0, 7, 0 },
  { "CPY.B x", 0xC4, 7, 0 },
  { "CPY.W ?", 0xCC, 2, 0 },

  { "DEC x,X", 0xD6, 7, 1 },
  { "DEC ?,X", 0xDE, 2, 0 },
  { "DEC x", 0xC6, 7, 1 },
  { "DEC ?", 0xCE, 2, 0 },
  { "DEA", 0x3A, 0, 0 },
  { "DEX", 0xCA, 0, 0 },
  { "DEY", 0x88, 0, 0 },
  { "DEC.B x,X", 0xD6, 7, 0 },
  { "DEC.W ?,X", 0xDE, 2, 0 },
  { "DEC.B x", 0xC6, 7, 0 },
  { "DEC.W ?", 0xCE, 2, 0 },

  { "EOR #x", 0x49, 7, 0 },
  { "EOR (x,X)", 0x41, 7, 0 },
  { "EOR (x),Y", 0x51, 7, 0 },
  { "EOR (x)", 0x52, 7, 0 },
  { "EOR x,X", 0x55, 7, 1 },
  { "EOR ?,X", 0x5D, 2, 0 },
  { "EOR ?,Y", 0x59, 2, 0 },
  { "EOR x", 0x45, 7, 1 },
  { "EOR ?", 0x4D, 2, 0 },
  { "EOR.B #x", 0x49, 7, 0 },
  { "EOR.B (x,X)", 0x41, 7, 0 },
  { "EOR.B (x),Y", 0x51, 7, 0 },
  { "EOR.B (x)", 0x52, 7, 0 },
  { "EOR.B x,X", 0x55, 7, 0 },
  { "EOR.W ?,X", 0x5D, 2, 0 },
  { "EOR.W ?,Y", 0x59, 2, 0 },
  { "EOR.B x", 0x45, 7, 0 },
  { "EOR.W ?", 0x4D, 2, 0 },

  { "INC x,X", 0xF6, 7, 1 },
  { "INC ?,X", 0xFE, 2, 0 },
  { "INC x", 0xE6, 7, 1 },
  { "INC ?", 0xEE, 2, 0 },
  { "INA", 0x1A, 0, 0 },
  { "INX", 0xE8, 0, 0 },
  { "INY", 0xC8, 0, 0 },
  { "INC.B x,X", 0xF6, 7, 0 },
  { "INC.W ?,X", 0xFE, 2, 0 },
  { "INC.B x", 0xE6, 7, 0 },
  { "INC.W ?", 0xEE, 2, 0 },

  { "JMP (?,X)", 0x7C, 2, 0 },
  { "JMP (?)", 0x6C, 2, 0 },
  { "JMP ?", 0x4C, 2, 0 },
  { "JSR ?", 0x20, 2, 0 },
  { "JMP.W (?,X)", 0x7C, 2, 0 },
  { "JMP.W (?)", 0x6C, 2, 0 },
  { "JMP.W ?", 0x4C, 2, 0 },
  { "JSR.W ?", 0x20, 2, 0 },

  { "LDA #x", 0xA9, 7, 0 },
  { "LDA (x,X)", 0xA1, 7, 0 },
  { "LDA (x),Y", 0xB1, 7, 0 },
  { "LDA (x)", 0xB2, 7, 0 },
  { "LDA x,X", 0xB5, 7, 1 },
  { "LDA ?,X", 0xBD, 2, 0 },
  { "LDA ?,Y", 0xB9, 2, 0 },
  { "LDA x", 0xA5, 7, 1 },
  { "LDA ?", 0xAD, 2, 0 },
  { "LDA.B #x", 0xA9, 7, 0 },
  { "LDA.B (x,X)", 0xA1, 7, 0 },
  { "LDA.B (x),Y", 0xB1, 7, 0 },
  { "LDA.B (x)", 0xB2, 7, 0 },
  { "LDA.B x,X", 0xB5, 7, 0 },
  { "LDA.W ?,X", 0xBD, 2, 0 },
  { "LDA.W ?,Y", 0xB9, 2, 0 },
  { "LDA.B x", 0xA5, 7, 0 },
  { "LDA.W ?", 0xAD, 2, 0 },

  { "LDX #x", 0xA2, 7, 0 },
  { "LDX x,Y", 0xB6, 7, 1 },
  { "LDX ?,Y", 0xBE, 2, 0 },
  { "LDX x", 0xA6, 7, 1 },
  { "LDX ?", 0xAE, 2, 0 },
  { "LDX.B #x", 0xA2, 7, 0 },
  { "LDX.B x,Y", 0xB6, 7, 0 },
  { "LDX.W ?,Y", 0xBE, 2, 0 },
  { "LDX.B x", 0xA6, 7, 0 },
  { "LDX.W ?", 0xAE, 2, 0 },

  { "LDY #x", 0xA0, 7, 0 },
  { "LDY x,X", 0xB4, 7, 1 },
  { "LDY ?,X", 0xBC, 2, 0 },
  { "LDY x", 0xA4, 7, 1 },
  { "LDY ?", 0xAC, 2, 0 },
  { "LDY.B #x", 0xA0, 7, 0 },
  { "LDY.B x,X", 0xB4, 7, 0 },
  { "LDY.W ?,X", 0xBC, 2, 0 },
  { "LDY.B x", 0xA4, 7, 0 },
  { "LDY.W ?", 0xAC, 2, 0 },

  { "LSR A", 0x4A, 0, 0 },
  { "LSR x,X", 0x56, 7, 1 },
  { "LSR ?,X", 0x5E, 2, 0 },
  { "LSR x", 0x46, 7, 1 },
  { "LSR ?", 0x4E, 2, 0 },
  { "LSR.B x,X", 0x56, 7, 0 },
  { "LSR.W ?,X", 0x5E, 2, 0 },
  { "LSR.B x", 0x46, 7, 0 },
  { "LSR.W ?", 0x4E, 2, 0 },
  { "LSR", 0x4A, 0, 0 },

  { "NOP", 0xEA, 0, 0 },

  { "ORA #x", 0x09, 7, 0 },
  { "ORA (x,X)", 0x01, 7, 0 },
  { "ORA (x),Y", 0x11, 7, 0 },
  { "ORA (x)", 0x12, 7, 0 },
  { "ORA x,X", 0x15, 7, 1 },
  { "ORA ?,X", 0x1D, 2, 0 },
  { "ORA ?,Y", 0x19, 2, 0 },
  { "ORA x", 0x05, 7, 1 },
  { "ORA ?", 0x0D, 2, 0 },
  { "ORA.B #x", 0x09, 7, 0 },
  { "ORA.B (x,X)", 0x01, 7, 0 },
  { "ORA.B (x),Y", 0x11, 7, 0 },
  { "ORA.B (x)", 0x12, 7, 0 },
  { "ORA.B x,X", 0x15, 7, 0 },
  { "ORA.W ?,X", 0x1D, 2, 0 },
  { "ORA.W ?,Y", 0x19, 2, 0 },
  { "ORA.B x", 0x05, 7, 0 },
  { "ORA.W ?", 0x0D, 2, 0 },

  { "PHA", 0x48, 0, 0 },
  { "PHP", 0x08, 0, 0 },
  { "PHX", 0xDA, 0, 0 },
  { "PHY", 0x5A, 0, 0 },
  { "PLA", 0x68, 0, 0 },
  { "PLP", 0x28, 0, 0 },
  { "PLX", 0xFA, 0, 0 },
  { "PLY", 0x7A, 0, 0 },

  { "ROL A", 0x2A, 0, 0 },
  { "ROL x,X", 0x36, 7, 1 },
  { "ROL ?,X", 0x3E, 2, 0 },
  { "ROL x", 0x26, 7, 1 },
  { "ROL ?", 0x2E, 2, 0 },
  { "ROL.B x,X", 0x36, 7, 0 },
  { "ROL.W ?,X", 0x3E, 2, 0 },
  { "ROL.B x", 0x26, 7, 0 },
  { "ROL.W ?", 0x2E, 2, 0 },
  { "ROL", 0x2A, 0, 0 },

  { "ROR A", 0x6A, 0, 0 },
  { "ROR x,X", 0x76, 7, 1 },
  { "ROR ?,X", 0x7E, 2, 0 },
  { "ROR x", 0x66, 7, 1 },
  { "ROR ?", 0x6E, 2, 0 },
  { "ROR.B x,X", 0x76, 7, 0 },
  { "ROR.W ?,X", 0x7E, 2, 0 },
  { "ROR.B x", 0x66, 7, 0 },
  { "ROR.W ?", 0x6E, 2, 0 },
  { "ROR", 0x6A, 0, 0 },

  { "RMB0 x", 0x07, 7, 0 },
  { "RMB1 x", 0x17, 7, 0 },
  { "RMB2 x", 0x27, 7, 0 },
  { "RMB3 x", 0x37, 7, 0 },
  { "RMB4 x", 0x47, 7, 0 },
  { "RMB5 x", 0x57, 7, 0 },
  { "RMB6 x", 0x67, 7, 0 },
  { "RMB7 x", 0x77, 7, 0 },

  { "RTI", 0x40, 0, 0 },
  { "RTS", 0x60, 0, 0 },

  { "SMB0 x", 0x87, 7, 0 },
  { "SMB1 x", 0x97, 7, 0 },
  { "SMB2 x", 0xA7, 7, 0 },
  { "SMB3 x", 0xB7, 7, 0 },
  { "SMB4 x", 0xC7, 7, 0 },
  { "SMB5 x", 0xD7, 7, 0 },
  { "SMB6 x", 0xE7, 7, 0 },
  { "SMB7 x", 0xF7, 7, 0 },

  { "SBC #x", 0xE9, 7, 0 },
  { "SBC (x,X)", 0xE1, 7, 0 },
  { "SBC (x),Y", 0xF1, 7, 0 },
  { "SBC (x)", 0xF2, 7, 0 },
  { "SBC x,X", 0xF5, 7, 1 },
  { "SBC ?,X", 0xFD, 2, 0 },
  { "SBC ?,Y", 0xF9, 2, 0 },
  { "SBC x", 0xE5, 7, 1 },
  { "SBC ?", 0xED, 2, 0 },
  { "SBC.B #x", 0xE9, 7, 0 },
  { "SBC.B (x,X)", 0xE1, 7, 0 },
  { "SBC.B (x),Y", 0xF1, 7, 0 },
  { "SBC.B (x)", 0xF2, 7, 0 },
  { "SBC.B x,X", 0xF5, 7, 0 },
  { "SBC.W ?,X", 0xFD, 2, 0 },
  { "SBC.W ?,Y", 0xF9, 2, 0 },
  { "SBC.B x", 0xE5, 7, 0 },
  { "SBC.W ?", 0xED, 2, 0 },

  { "SEC", 0x38, 0, 0 },
  { "SED", 0xF8, 0, 0 },
  { "SEI", 0x78, 0, 0 },
  { "SET", 0xF4, 0, 0 },

  { "STA (x,X)", 0x81, 7, 0 },
  { "STA (x),Y", 0x91, 7, 0 },
  { "STA (x)", 0x92, 7, 0 },
  { "STA x,X", 0x95, 7, 1 },
  { "STA ?,X", 0x9D, 2, 0 },
  { "STA ?,Y", 0x99, 2, 0 },
  { "STA x", 0x85, 7, 1 },
  { "STA ?", 0x8D, 2, 0 },
  { "STA.B (x,X)", 0x81, 7, 0 },
  { "STA.B (x),Y", 0x91, 7, 0 },
  { "STA.B (x)", 0x92, 7, 0 },
  { "STA.B x,X", 0x95, 7, 0 },
  { "STA.W ?,X", 0x9D, 2, 0 },
  { "STA.W ?,Y", 0x99, 2, 0 },
  { "STA.B x", 0x85, 7, 0 },
  { "STA.W ?", 0x8D, 2, 0 },

  { "STX x,Y", 0x96, 7, 0 },
  { "STX x", 0x86, 7, 1 },
  { "STX ?", 0x8E, 2, 0 },
  { "STX.B x,Y", 0x96, 7, 0 },
  { "STX.B x", 0x86, 7, 0 },
  { "STX.W ?", 0x8E, 2, 0 },

  { "STY x,X", 0x94, 7, 0 },
  { "STY x", 0x84, 7, 1 },
  { "STY ?", 0x8C, 2, 0 },
  { "STY.B x,X", 0x94, 7, 0 },
  { "STY.B x", 0x84, 7, 0 },
  { "STY.W ?", 0x8C, 2, 0 },

  { "STZ x,X", 0x74, 7, 1 },
  { "STZ ?,X", 0x9E, 2, 0 },
  { "STZ x", 0x64, 7, 1 },
  { "STZ ?", 0x9C, 2, 0 },
  { "STZ.B x,X", 0x74, 7, 0 },
  { "STZ.W x,X", 0x94, 2, 0 },
  { "STZ.B x", 0x64, 7, 0 },
  { "STZ.W ?", 0x9C, 2, 0 },

  { "SXY", 0x02, 0, 0 },
  { "SAX", 0x22, 0, 0 },
  { "SAY", 0x42, 0, 0 },

  { "ST0 #x", 0x03, 7, 0 },
  { "ST1 #x", 0x13, 7, 0 },
  { "ST2 #x", 0x23, 7, 0 },
  { "ST0.B #x", 0x03, 7, 0 },
  { "ST1.B #x", 0x13, 7, 0 },
  { "ST2.B #x", 0x23, 7, 0 },

  { "TMA #x", 0x43, 7, 0 },
  { "TAM #x", 0x53, 7, 0 },
  { "TMA.B #x", 0x43, 7, 0 },
  { "TAM.B #x", 0x53, 7, 0 },

  { "TAX", 0xAA, 0, 0 },
  { "TAY", 0xA8, 0, 0 },
  { "TSX", 0xBA, 0, 0 },
  { "TXA", 0x8A, 0, 0 },
  { "TXS", 0x9A, 0, 0 },
  { "TYA", 0x98, 0, 0 },

  { "TRB x", 0x14, 7, 1 },
  { "TRB ?", 0x1C, 2, 0 },
  { "TRB.B x", 0x14, 7, 1 },
  { "TRB.W ?", 0x1C, 2, 0 },

  { "TSB x", 0x04, 7, 1 },
  { "TSB ?", 0x0C, 2, 0 },
  { "TSB.B x", 0x04, 7, 1 },
  { "TSB.W ?", 0x0C, 2, 0 },

  { "TII ?,?,?", 0x73, 4, 0 },
  { "TDD ?,?,?", 0xC3, 4, 0 },
  { "TIN ?,?,?", 0xD3, 4, 0 },
  { "TIA ?,?,?", 0xE3, 4, 0 },
  { "TAI ?,?,?", 0xF3, 4, 0 },

  { "TST #x,x,X", 0xA3, 5, 1 },
  { "TST #x,?,X", 0xB3, 6, 0 },
  { "TST #x,x", 0x83, 5, 1 },
  { "TST #x,?", 0x93, 6, 0 },

  { "E", 0x100, -1, 0 }
};
