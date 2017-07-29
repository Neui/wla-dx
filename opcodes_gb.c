#include "opcodes_table.h"
struct optcode opt_table[] = {
  { "ADC A", 0x8f, 0, 0 },
  { "ADC B", 0x88, 0, 0 },
  { "ADC C", 0x89, 0, 0 },
  { "ADC D", 0x8a, 0, 0 },
  { "ADC E", 0x8b, 0, 0 },
  { "ADC H", 0x8c, 0, 0 },
  { "ADC (HL)", 0x8e, 0, 0 },
  { "ADC L", 0x8d, 0, 0 },
  { "ADC x", 0xce, 1, 0 },

  { "ADD A", 0x87, 0, 0 },
  { "ADD B", 0x80, 0, 0 },
  { "ADD C", 0x81, 0, 0 },
  { "ADD D", 0x82, 0, 0 },
  { "ADD E", 0x83, 0, 0 },
  { "ADD H", 0x84, 0, 0 },
  { "ADD (HL)", 0x86, 0, 0 },
  { "ADD HL,BC", 0x9, 0, 0 },
  { "ADD HL,DE", 0x19, 0, 0 },
  { "ADD HL,HL", 0x29, 0, 0 },
  { "ADD HL,SP", 0x39, 0, 0 },
  { "ADD L", 0x85, 0, 0 },
  { "ADD SP,s", 0xe8, 1, 0 },
  { "ADD x", 0xc6, 1, 0 },

  { "AND A", 0xa7, 0, 0 },
  { "AND B", 0xa0, 0, 0 },
  { "AND C", 0xa1, 0, 0 },
  { "AND D", 0xa2, 0, 0 },
  { "AND E", 0xa3, 0, 0 },
  { "AND H", 0xa4, 0, 0 },
  { "AND (HL)", 0xa6, 0, 0 },
  { "AND L", 0xa5, 0, 0 },
  { "AND x", 0xe6, 1, 0 },

  { "BIT *,A", 0x47cb, 9, 0 },
  { "BIT *,B", 0x40cb, 9, 0 },
  { "BIT *,C", 0x41cb, 9, 0 },
  { "BIT *,D", 0x42cb, 9, 0 },
  { "BIT *,E", 0x43cb, 9, 0 },
  { "BIT *,H", 0x44cb, 9, 0 },
  { "BIT *,(HL)", 0x46cb, 9, 0 },
  { "BIT *,L", 0x45cb, 9, 0 },
  { "BIT *,A", 0x4fcb, 9, 1 },
  { "BIT *,B", 0x48cb, 9, 1 },
  { "BIT *,C", 0x49cb, 9, 1 },
  { "BIT *,D", 0x4acb, 9, 1 },
  { "BIT *,E", 0x4bcb, 9, 1 },
  { "BIT *,H", 0x4ccb, 9, 1 },
  { "BIT *,(HL)", 0x4ecb, 9, 1 },
  { "BIT *,L", 0x4dcb, 9, 1 },
  { "BIT *,A", 0x57cb, 9, 2 },
  { "BIT *,B", 0x50cb, 9, 2 },
  { "BIT *,C", 0x51cb, 9, 2 },
  { "BIT *,D", 0x52cb, 9, 2 },
  { "BIT *,E", 0x53cb, 9, 2 },
  { "BIT *,H", 0x54cb, 9, 2 },
  { "BIT *,(HL)", 0x56cb, 9, 2 },
  { "BIT *,L", 0x55cb, 9, 2 },
  { "BIT *,A", 0x5fcb, 9, 3 },
  { "BIT *,B", 0x58cb, 9, 3 },
  { "BIT *,C", 0x59cb, 9, 3 },
  { "BIT *,D", 0x5acb, 9, 3 },
  { "BIT *,E", 0x5bcb, 9, 3 },
  { "BIT *,H", 0x5ccb, 9, 3 },
  { "BIT *,(HL)", 0x5ecb, 9, 3 },
  { "BIT *,L", 0x5dcb, 9, 3 },
  { "BIT *,A", 0x67cb, 9, 4 },
  { "BIT *,B", 0x60cb, 9, 4 },
  { "BIT *,C", 0x61cb, 9, 4 },
  { "BIT *,D", 0x62cb, 9, 4 },
  { "BIT *,E", 0x63cb, 9, 4 },
  { "BIT *,H", 0x64cb, 9, 4 },
  { "BIT *,(HL)", 0x66cb, 9, 4 },
  { "BIT *,L", 0x65cb, 9, 4 },
  { "BIT *,A", 0x6fcb, 9, 5 },
  { "BIT *,B", 0x68cb, 9, 5 },
  { "BIT *,C", 0x69cb, 9, 5 },
  { "BIT *,D", 0x6acb, 9, 5 },
  { "BIT *,E", 0x6bcb, 9, 5 },
  { "BIT *,H", 0x6ccb, 9, 5 },
  { "BIT *,(HL)", 0x6ecb, 9, 5 },
  { "BIT *,L", 0x6dcb, 9, 5 },
  { "BIT *,A", 0x77cb, 9, 6 },
  { "BIT *,B", 0x70cb, 9, 6 },
  { "BIT *,C", 0x71cb, 9, 6 },
  { "BIT *,D", 0x72cb, 9, 6 },
  { "BIT *,E", 0x73cb, 9, 6 },
  { "BIT *,H", 0x74cb, 9, 6 },
  { "BIT *,(HL)", 0x76cb, 9, 6 },
  { "BIT *,L", 0x75cb, 9, 6 },
  { "BIT *,A", 0x7fcb, 9, 7 },
  { "BIT *,B", 0x78cb, 9, 7 },
  { "BIT *,C", 0x79cb, 9, 7 },
  { "BIT *,D", 0x7acb, 9, 7 },
  { "BIT *,E", 0x7bcb, 9, 7 },
  { "BIT *,H", 0x7ccb, 9, 7 },
  { "BIT *,(HL)", 0x7ecb, 9, 7 },
  { "BIT *,L", 0x7dcb, 9, 7 },

  { "CALL C,?", 0xdc, 2, 0 },
  { "CALL NC,?", 0xd4, 2, 0 },
  { "CALL NZ,?", 0xc4, 2, 0 },
  { "CALL Z,?", 0xcc, 2, 0 },
  { "CALL ?", 0xcd, 2, 0 },

  { "CCF", 0x3f, 0, 0 },

  { "CP A", 0xbf, 0, 0 },
  { "CP B", 0xb8, 0, 0 },
  { "CP C", 0xb9, 0, 0 },
  { "CP D", 0xba, 0, 0 },
  { "CP E", 0xbb, 0, 0 },
  { "CP H", 0xbc, 0, 0 },
  { "CP (HL)", 0xbe, 0, 0 },
  { "CPL", 0x2f, 0, 0 },
  { "CP L", 0xbd, 0, 0 },
  { "CP x", 0xfe, 1, 0 },

  { "DAA", 0x27, 0, 0 },

  { "DEC A", 0x3d, 0, 0 },
  { "DEC B", 0x5, 0, 0 },
  { "DEC BC", 0xb, 0, 0 },
  { "DEC C", 0xd, 0, 0 },
  { "DEC D", 0x15, 0, 0 },
  { "DEC DE", 0x1b, 0, 0 },
  { "DEC E", 0x1d, 0, 0 },
  { "DEC H", 0x25, 0, 0 },
  { "DEC HL", 0x2b, 0, 0 },
  { "DEC (HL)", 0x35, 0, 0 },
  { "DEC L", 0x2d, 0, 0 },
  { "DEC SP", 0x3b, 0, 0 },

  { "DI", 0xf3, 0, 0 },

  { "EI", 0xfb, 0, 0 },

  { "HALT", 0x76, 0, 0 },

  { "INC A", 0x3c, 0, 0 },
  { "INC B", 0x4, 0, 0 },
  { "INC BC", 0x3, 0, 0 },
  { "INC C", 0xc, 0, 0 },
  { "INC D", 0x14, 0, 0 },
  { "INC DE", 0x13, 0, 0 },
  { "INC E", 0x1c, 0, 0 },
  { "INC H", 0x24, 0, 0 },
  { "INC HL", 0x23, 0, 0 },
  { "INC (HL)", 0x34, 0, 0 },
  { "INC L", 0x2c, 0, 0 },
  { "INC SP", 0x33, 0, 0 },

  { "JP C,?", 0xda, 2, 0 },
  { "JP HL", 0xe9, 0, 0 },
  { "JP NC,?", 0xd2, 2, 0 },
  { "JP NZ,?", 0xc2, 2, 0 },
  { "JP Z,?", 0xca, 2, 0 },
  { "JP ?", 0xc3, 2, 0 },

  { "JR C,s", 0x38, 4, 0 },
  { "JR NC,s", 0x30, 4, 0 },
  { "JR NZ,s", 0x20, 4, 0 },
  { "JR Z,s", 0x28, 4, 0 },
  { "JR s", 0x18, 4, 0 },

  { "LD A,A", 0x7f, 0, 0 },
  { "LD A,B", 0x78, 0, 0 },
  { "LD A,C", 0x79, 0, 0 },
  { "LD A,D", 0x7a, 0, 0 },
  { "LD A,E", 0x7b, 0, 0 },
  { "LD A,H", 0x7c, 0, 0 },
  { "LD A,L", 0x7d, 0, 0 },
  { "LD A,($FF00+C)", 0xf2, 0, 0 },
  { "LD A,($FF00+x)", 0xf0, 1, 0 },
  { "LD A,(BC)", 0xa, 0, 0 },
  { "LD A,(DE)", 0x1a, 0, 0 },
  { "LD A,(HL+)", 0x2a, 0, 0 },
  { "LD A,(HL-)", 0x3a, 0, 0 },
  { "LD A,(HL)", 0x7e, 0, 0 },
  { "LD A,(HLD)", 0x3a, 0, 0 },
  { "LD A,(HLI)", 0x2a, 0, 0 },
  { "LD A,(?)", 0xfa, 2, 0 },
  { "LD A,x", 0x3e, 1, 0 },
  { "LD B,A", 0x47, 0, 0 },
  { "LD B,B", 0x40, 0, 0 },
  { "LD B,C", 0x41, 0, 0 },
  { "LD (BC),A", 0x2, 0, 0 },
  { "LD B,D", 0x42, 0, 0 },
  { "LD B,E", 0x43, 0, 0 },
  { "LD B,H", 0x44, 0, 0 },
  { "LD B,(HL)", 0x46, 0, 0 },
  { "LD B,L", 0x45, 0, 0 },
  { "LD B,x", 0x6, 1, 0 },
  { "LD C,A", 0x4f, 0, 0 },
  { "LD C,B", 0x48, 0, 0 },
  { "LD C,C", 0x49, 0, 0 },
  { "LD C,D", 0x4a, 0, 0 },
  { "LD C,E", 0x4b, 0, 0 },
  { "LD C,H", 0x4c, 0, 0 },
  { "LD C,(HL)", 0x4e, 0, 0 },
  { "LD C,L", 0x4d, 0, 0 },
  { "LD C,x", 0xe, 1, 0 },
  { "LD D,A", 0x57, 0, 0 },
  { "LDD A,(HL)", 0x3a, 0, 0 },
  { "LD D,B", 0x50, 0, 0 },
  { "LD D,C", 0x51, 0, 0 },
  { "LD D,D", 0x52, 0, 0 },
  { "LD D,E", 0x53, 0, 0 },
  { "LD (DE),A", 0x12, 0, 0 },
  { "LD D,H", 0x54, 0, 0 },
  { "LD D,(HL)", 0x56, 0, 0 },
  { "LDD (HL),A", 0x32, 0, 0 },
  { "LD D,L", 0x55, 0, 0 },
  { "LD D,x", 0x16, 1, 0 },
  { "LD E,A", 0x5f, 0, 0 },
  { "LD E,B", 0x58, 0, 0 },
  { "LD E,C", 0x59, 0, 0 },
  { "LD E,D", 0x5a, 0, 0 },
  { "LD E,E", 0x5b, 0, 0 },
  { "LD E,H", 0x5c, 0, 0 },
  { "LD E,(HL)", 0x5e, 0, 0 },
  { "LD E,L", 0x5d, 0, 0 },
  { "LD E,x", 0x1e, 1, 0 },
  { "LD ($FF00+C),A", 0xe2, 0, 0 },
  { "LD ($FF00+x),A", 0xe0, 1, 0 },
  { "LD H,A", 0x67, 0, 0 },
  { "LDH A,(x)", 0xf0, 1, 0 },
  { "LD H,B", 0x60, 0, 0 },
  { "LD H,C", 0x61, 0, 0 },
  { "LD H,D", 0x62, 0, 0 },
  { "LD H,E", 0x63, 0, 0 },
  { "LD H,H", 0x64, 0, 0 },
  { "LD H,(HL)", 0x66, 0, 0 },
  { "LD H,L", 0x65, 0, 0 },
  { "LD (HL+),A", 0x22, 0, 0 },
  { "LD (HL-),A", 0x32, 0, 0 },
  { "LD (HL),A", 0x77, 0, 0 },
  { "LD (HL),B", 0x70, 0, 0 },
  { "LD (HL),C", 0x71, 0, 0 },
  { "LD (HL),D", 0x72, 0, 0 },
  { "LD (HLD),A", 0x32, 0, 0 },
  { "LD (HL),E", 0x73, 0, 0 },
  { "LD (HL),H", 0x74, 0, 0 },
  { "LD (HLI),A", 0x22, 0, 0 },
  { "LD (HL),L", 0x75, 0, 0 },
  { "LD HL,SP+s", 0xf8, 1, 0 },
  { "LD HL,SP-s", 0xf8, 1, 0 },
  { "LD (HL),x", 0x36, 1, 0 },
  { "LD H,x", 0x26, 1, 0 },
  { "LDH (x),A", 0xe0, 1, 0 },
  { "LDI A,(HL)", 0x2a, 0, 0 },
  { "LDI (HL),A", 0x22, 0, 0 },
  { "LD L,A", 0x6f, 0, 0 },
  { "LD L,B", 0x68, 0, 0 },
  { "LD L,C", 0x69, 0, 0 },
  { "LD L,D", 0x6a, 0, 0 },
  { "LD L,E", 0x6b, 0, 0 },
  { "LD L,H", 0x6c, 0, 0 },
  { "LD L,(HL)", 0x6e, 0, 0 },
  { "LD L,L", 0x6d, 0, 0 },
  { "LD L,x", 0x2e, 1, 0 },
  { "LD PC,HL", 0xe9, 0, 0 },
  { "LD SP,HL", 0xf9, 0, 0 },
  { "LD BC,?", 0x1, 2, 0 },
  { "LD DE,?", 0x11, 2, 0 },
  { "LD HL,?", 0x21, 2, 0 },
  { "LD SP,?", 0x31, 2, 0 },
  { "LD (?),SP", 0x8, 2, 0 },
  { "LD (?),A", 0xea, 2, 0 },

  { "NOP", 0x0, 0, 0 },

  { "OR A", 0xb7, 0, 0 },
  { "OR B", 0xb0, 0, 0 },
  { "OR C", 0xb1, 0, 0 },
  { "OR D", 0xb2, 0, 0 },
  { "OR E", 0xb3, 0, 0 },
  { "OR H", 0xb4, 0, 0 },
  { "OR (HL)", 0xb6, 0, 0 },
  { "OR L", 0xb5, 0, 0 },
  { "OR x", 0xf6, 1, 0 },

  { "POP AF", 0xf1, 0, 0 },
  { "POP BC", 0xc1, 0, 0 },
  { "POP DE", 0xd1, 0, 0 },
  { "POP HL", 0xe1, 0, 0 },

  { "PUSH AF", 0xf5, 0, 0 },
  { "PUSH BC", 0xc5, 0, 0 },
  { "PUSH DE", 0xd5, 0, 0 },
  { "PUSH HL", 0xe5, 0, 0 },

  { "RES *,A", 0x87cb, 9, 0 },
  { "RES *,B", 0x80cb, 9, 0 },
  { "RES *,C", 0x81cb, 9, 0 },
  { "RES *,D", 0x82cb, 9, 0 },
  { "RES *,E", 0x83cb, 9, 0 },
  { "RES *,H", 0x84cb, 9, 0 },
  { "RES *,(HL)", 0x86cb, 9, 0 },
  { "RES *,L", 0x85cb, 9, 0 },
  { "RES *,A", 0x8fcb, 9, 1 },
  { "RES *,B", 0x88cb, 9, 1 },
  { "RES *,C", 0x89cb, 9, 1 },
  { "RES *,D", 0x8acb, 9, 1 },
  { "RES *,E", 0x8bcb, 9, 1 },
  { "RES *,H", 0x8ccb, 9, 1 },
  { "RES *,(HL)", 0x8ecb, 9, 1 },
  { "RES *,L", 0x8dcb, 9, 1 },
  { "RES *,A", 0x97cb, 9, 2 },
  { "RES *,B", 0x90cb, 9, 2 },
  { "RES *,C", 0x91cb, 9, 2 },
  { "RES *,D", 0x92cb, 9, 2 },
  { "RES *,E", 0x93cb, 9, 2 },
  { "RES *,H", 0x94cb, 9, 2 },
  { "RES *,(HL)", 0x96cb, 9, 2 },
  { "RES *,L", 0x95cb, 9, 2 },
  { "RES *,A", 0x9fcb, 9, 3 },
  { "RES *,B", 0x98cb, 9, 3 },
  { "RES *,C", 0x99cb, 9, 3 },
  { "RES *,D", 0x9acb, 9, 3 },
  { "RES *,E", 0x9bcb, 9, 3 },
  { "RES *,H", 0x9ccb, 9, 3 },
  { "RES *,(HL)", 0x9ecb, 9, 3 },
  { "RES *,L", 0x9dcb, 9, 3 },
  { "RES *,A", 0xa7cb, 9, 4 },
  { "RES *,B", 0xa0cb, 9, 4 },
  { "RES *,C", 0xa1cb, 9, 4 },
  { "RES *,D", 0xa2cb, 9, 4 },
  { "RES *,E", 0xa3cb, 9, 4 },
  { "RES *,H", 0xa4cb, 9, 4 },
  { "RES *,(HL)", 0xa6cb, 9, 4 },
  { "RES *,L", 0xa5cb, 9, 4 },
  { "RES *,A", 0xafcb, 9, 5 },
  { "RES *,B", 0xa8cb, 9, 5 },
  { "RES *,C", 0xa9cb, 9, 5 },
  { "RES *,D", 0xaacb, 9, 5 },
  { "RES *,E", 0xabcb, 9, 5 },
  { "RES *,H", 0xaccb, 9, 5 },
  { "RES *,(HL)", 0xaecb, 9, 5 },
  { "RES *,L", 0xadcb, 9, 5 },
  { "RES *,A", 0xb7cb, 9, 6 },
  { "RES *,B", 0xb0cb, 9, 6 },
  { "RES *,C", 0xb1cb, 9, 6 },
  { "RES *,D", 0xb2cb, 9, 6 },
  { "RES *,E", 0xb3cb, 9, 6 },
  { "RES *,H", 0xb4cb, 9, 6 },
  { "RES *,(HL)", 0xb6cb, 9, 6 },
  { "RES *,L", 0xb5cb, 9, 6 },
  { "RES *,A", 0xbfcb, 9, 7 },
  { "RES *,B", 0xb8cb, 9, 7 },
  { "RES *,C", 0xb9cb, 9, 7 },
  { "RES *,D", 0xbacb, 9, 7 },
  { "RES *,E", 0xbbcb, 9, 7 },
  { "RES *,H", 0xbccb, 9, 7 },
  { "RES *,(HL)", 0xbecb, 9, 7 },
  { "RES *,L", 0xbdcb, 9, 7 },

  { "RETI", 0xd9, 0, 0 },
  { "RET C", 0xd8, 0, 0 },
  { "RET NC", 0xd0, 0, 0 },
  { "RET NZ", 0xc0, 0, 0 },
  { "RET Z", 0xc8, 0, 0 },
  { "RET", 0xc9, 0, 0 },

  { "RLA", 0x17, 0, 0 },
  { "RL A", 0x17cb, 3, 0 },
  { "RL B", 0x10cb, 3, 0 },
  { "RL C", 0x11cb, 3, 0 },
  { "RLCA", 0x7, 0, 0 },
  { "RLC A", 0x7cb, 3, 0 },
  { "RLC B", 0xcb, 3, 0 },
  { "RLC C", 0x1cb, 3, 0 },
  { "RLC D", 0x2cb, 3, 0 },
  { "RLC E", 0x3cb, 3, 0 },
  { "RLC H", 0x4cb, 3, 0 },
  { "RLC (HL)", 0x6cb, 3, 0 },
  { "RLC L", 0x5cb, 3, 0 },
  { "RL D", 0x12cb, 3, 0 },
  { "RL E", 0x13cb, 3, 0 },
  { "RL H", 0x14cb, 3, 0 },
  { "RL (HL)", 0x16cb, 3, 0 },
  { "RL L", 0x15cb, 3, 0 },

  { "RRA", 0x1f, 0, 0 },
  { "RR A", 0x1fcb, 3, 0 },
  { "RR B", 0x18cb, 3, 0 },
  { "RR C", 0x19cb, 3, 0 },
  { "RRCA", 0xf, 0, 0 },
  { "RRC A", 0xfcb, 3, 0 },
  { "RRC B", 0x8cb, 3, 0 },
  { "RRC C", 0x9cb, 3, 0 },
  { "RRC D", 0xacb, 3, 0 },
  { "RRC E", 0xbcb, 3, 0 },
  { "RRC H", 0xccb, 3, 0 },
  { "RRC (HL)", 0xecb, 3, 0 },
  { "RRC L", 0xdcb, 3, 0 },
  { "RR D", 0x1acb, 3, 0 },
  { "RR E", 0x1bcb, 3, 0 },
  { "RR H", 0x1ccb, 3, 0 },
  { "RR (HL)", 0x1ecb, 3, 0 },
  { "RR L", 0x1dcb, 3, 0 },

  { "RST *", 0xc7, 8, 0 },
  { "RST *", 0xcf, 8, 0x8 },
  { "RST *", 0xd7, 8, 0x10 },
  { "RST *", 0xdf, 8, 0x18 },
  { "RST *", 0xe7, 8, 0x20 },
  { "RST *", 0xef, 8, 0x28 },
  { "RST *", 0xf7, 8, 0x30 },
  { "RST *", 0xff, 8, 0x38 },

  { "SBC A", 0x9f, 0, 0 },
  { "SBC B", 0x98, 0, 0 },
  { "SBC C", 0x99, 0, 0 },
  { "SBC D", 0x9a, 0, 0 },
  { "SBC E", 0x9b, 0, 0 },
  { "SBC H", 0x9c, 0, 0 },
  { "SBC (HL)", 0x9e, 0, 0 },
  { "SBC L", 0x9d, 0, 0 },
  { "SBC x", 0xde, 1, 0 },

  { "SCF", 0x37, 0, 0 },

  { "SET *,A", 0xc7cb, 9, 0 },
  { "SET *,B", 0xc0cb, 9, 0 },
  { "SET *,C", 0xc1cb, 9, 0 },
  { "SET *,D", 0xc2cb, 9, 0 },
  { "SET *,E", 0xc3cb, 9, 0 },
  { "SET *,H", 0xc4cb, 9, 0 },
  { "SET *,(HL)", 0xc6cb, 9, 0 },
  { "SET *,L", 0xc5cb, 9, 0 },
  { "SET *,A", 0xcfcb, 9, 1 },
  { "SET *,B", 0xc8cb, 9, 1 },
  { "SET *,C", 0xc9cb, 9, 1 },
  { "SET *,D", 0xcacb, 9, 1 },
  { "SET *,E", 0xcbcb, 9, 1 },
  { "SET *,H", 0xcccb, 9, 1 },
  { "SET *,(HL)", 0xcecb, 9, 1 },
  { "SET *,L", 0xcdcb, 9, 1 },
  { "SET *,A", 0xd7cb, 9, 2 },
  { "SET *,B", 0xd0cb, 9, 2 },
  { "SET *,C", 0xd1cb, 9, 2 },
  { "SET *,D", 0xd2cb, 9, 2 },
  { "SET *,E", 0xd3cb, 9, 2 },
  { "SET *,H", 0xd4cb, 9, 2 },
  { "SET *,(HL)", 0xd6cb, 9, 2 },
  { "SET *,L", 0xd5cb, 9, 2 },
  { "SET *,A", 0xdfcb, 9, 3 },
  { "SET *,B", 0xd8cb, 9, 3 },
  { "SET *,C", 0xd9cb, 9, 3 },
  { "SET *,D", 0xdacb, 9, 3 },
  { "SET *,E", 0xdbcb, 9, 3 },
  { "SET *,H", 0xdccb, 9, 3 },
  { "SET *,(HL)", 0xdecb, 9, 3 },
  { "SET *,L", 0xddcb, 9, 3 },
  { "SET *,A", 0xe7cb, 9, 4 },
  { "SET *,B", 0xe0cb, 9, 4 },
  { "SET *,C", 0xe1cb, 9, 4 },
  { "SET *,D", 0xe2cb, 9, 4 },
  { "SET *,E", 0xe3cb, 9, 4 },
  { "SET *,H", 0xe4cb, 9, 4 },
  { "SET *,(HL)", 0xe6cb, 9, 4 },
  { "SET *,L", 0xe5cb, 9, 4 },
  { "SET *,A", 0xefcb, 9, 5 },
  { "SET *,B", 0xe8cb, 9, 5 },
  { "SET *,C", 0xe9cb, 9, 5 },
  { "SET *,D", 0xeacb, 9, 5 },
  { "SET *,E", 0xebcb, 9, 5 },
  { "SET *,H", 0xeccb, 9, 5 },
  { "SET *,(HL)", 0xeecb, 9, 5 },
  { "SET *,L", 0xedcb, 9, 5 },
  { "SET *,A", 0xf7cb, 9, 6 },
  { "SET *,B", 0xf0cb, 9, 6 },
  { "SET *,C", 0xf1cb, 9, 6 },
  { "SET *,D", 0xf2cb, 9, 6 },
  { "SET *,E", 0xf3cb, 9, 6 },
  { "SET *,H", 0xf4cb, 9, 6 },
  { "SET *,(HL)", 0xf6cb, 9, 6 },
  { "SET *,L", 0xf5cb, 9, 6 },
  { "SET *,A", 0xffcb, 9, 7 },
  { "SET *,B", 0xf8cb, 9, 7 },
  { "SET *,C", 0xf9cb, 9, 7 },
  { "SET *,D", 0xfacb, 9, 7 },
  { "SET *,E", 0xfbcb, 9, 7 },
  { "SET *,H", 0xfccb, 9, 7 },
  { "SET *,(HL)", 0xfecb, 9, 7 },
  { "SET *,L", 0xfdcb, 9, 7 },

  { "SLA A", 0x27cb, 3, 0 },
  { "SLA B", 0x20cb, 3, 0 },
  { "SLA C", 0x21cb, 3, 0 },
  { "SLA D", 0x22cb, 3, 0 },
  { "SLA E", 0x23cb, 3, 0 },
  { "SLA H", 0x24cb, 3, 0 },
  { "SLA (HL)", 0x26cb, 3, 0 },
  { "SLA L", 0x25cb, 3, 0 },

  { "SRA A", 0x2fcb, 3, 0 },
  { "SRA B", 0x28cb, 3, 0 },
  { "SRA C", 0x29cb, 3, 0 },
  { "SRA D", 0x2acb, 3, 0 },
  { "SRA E", 0x2bcb, 3, 0 },
  { "SRA H", 0x2ccb, 3, 0 },
  { "SRA (HL)", 0x2ecb, 3, 0 },
  { "SRA L", 0x2dcb, 3, 0 },

  { "SRL A", 0x3fcb, 3, 0 },
  { "SRL B", 0x38cb, 3, 0 },
  { "SRL C", 0x39cb, 3, 0 },
  { "SRL D", 0x3acb, 3, 0 },
  { "SRL E", 0x3bcb, 3, 0 },
  { "SRL H", 0x3ccb, 3, 0 },
  { "SRL (HL)", 0x3ecb, 3, 0 },
  { "SRL L", 0x3dcb, 3, 0 },

  { "STOP", 0x10, 0, 0 },

  { "SUB A", 0x97, 0, 0 },
  { "SUB B", 0x90, 0, 0 },
  { "SUB C", 0x91, 0, 0 },
  { "SUB D", 0x92, 0, 0 },
  { "SUB E", 0x93, 0, 0 },
  { "SUB H", 0x94, 0, 0 },
  { "SUB (HL)", 0x96, 0, 0 },
  { "SUB L", 0x95, 0, 0 },
  { "SUB x", 0xd6, 1, 0 },

  { "SWAP A", 0x37cb, 3, 0 },
  { "SWAP B", 0x30cb, 3, 0 },
  { "SWAP C", 0x31cb, 3, 0 },
  { "SWAP D", 0x32cb, 3, 0 },
  { "SWAP E", 0x33cb, 3, 0 },
  { "SWAP H", 0x34cb, 3, 0 },
  { "SWAP (HL)", 0x36cb, 3, 0 },
  { "SWAP L", 0x35cb, 3, 0 },

  { "XOR A", 0xaf, 0, 0 },
  { "XOR B", 0xa8, 0, 0 },
  { "XOR C", 0xa9, 0, 0 },
  { "XOR D", 0xaa, 0, 0 },
  { "XOR E", 0xab, 0, 0 },
  { "XOR H", 0xac, 0, 0 },
  { "XOR (HL)", 0xae, 0, 0 },
  { "XOR L", 0xad, 0, 0 },
  { "XOR x", 0xee, 1, 0 },

  { "E", 0x100, -1, 0 }
};
