struct optcode opt_table[] = {
  { "ABA", 0x1B, 0, 0 },
  { "ABX", 0x3A, 0, 0 },
  
  { "ADCA #x", 0x89, 1, 0 },
  { "ADCA x,X", 0xA9, 4, 1 },
  { "ADCA x", 0x99, 4, 1 },
  { "ADCA ?", 0xB9, 2, 0 },
  { "ADCB #x", 0xC9, 1, 0 },		      
  { "ADCB x,X", 0xE9, 4, 1 },
  { "ADCB x", 0xD9, 4, 1 },
  { "ADCB ?", 0xF9, 2, 0 },

  { "ADCA.B #x", 0x89, 1, 0 },
  { "ADCA.B x,X", 0xA9, 4, 1 },
  { "ADCA.B x", 0x99, 4, 1 },
  { "ADCA.W ?", 0xB9, 2, 0 },
  { "ADCB.B #x", 0xC9, 1, 0 },		      
  { "ADCB.B x,X", 0xE9, 4, 1 },
  { "ADCB.B x", 0xD9, 4, 1 },
  { "ADCB.W ?", 0xF9, 2, 0 },
  
  { "ADDA #x", 0x8B, 1, 0 },
  { "ADDA x,X", 0xAB, 4, 1 },
  { "ADDA x", 0x9B, 4, 1 },
  { "ADDA ?", 0xBB, 2, 0 },
  { "ADDB #x", 0xCB, 1, 0 },		      
  { "ADDB x,X", 0xEB, 4, 1 },
  { "ADDB x", 0xDB, 4, 1 },
  { "ADDB ?", 0xFB, 2, 0 },
  { "ADDD #x", 0xC3, 1, 0 },		      
  { "ADDD x,X", 0xE3, 4, 1 },
  { "ADDD x", 0xD3, 4, 1 },
  { "ADDD ?", 0xF3, 2, 0 },
  
  { "ADDA.B #x", 0x8B, 1, 0 },
  { "ADDA.B x,X", 0xAB, 4, 1 },
  { "ADDA.B x", 0x9B, 4, 1 },
  { "ADDA.W ?", 0xBB, 2, 0 },
  { "ADDB.B #x", 0xCB, 1, 0 },		      
  { "ADDB.B x,X", 0xEB, 4, 1 },
  { "ADDB.B x", 0xDB, 4, 1 },
  { "ADDB.W ?", 0xFB, 2, 0 },
  { "ADDD.B #x", 0xC3, 1, 0 },		      
  { "ADDD.B x,X", 0xE3, 4, 1 },
  { "ADDD.B x", 0xD3, 4, 1 },
  { "ADDD.W ?", 0xF3, 2, 0 },
  
  { "ANDA #x", 0x84, 1, 0 },
  { "ANDA x,X", 0xA4, 4, 1 },
  { "ANDA x", 0x94, 4, 1 },
  { "ANDA ?", 0xB4, 2, 0 },
  { "ANDB #x", 0xC4, 1, 0 },		      
  { "ANDB x,X", 0xE4, 4, 1 },
  { "ANDB x", 0xD4, 4, 1 },
  { "ANDB ?", 0xF4, 2, 0 },

  { "ANDA.B #x", 0x84, 1, 0 },
  { "ANDA.B x,X", 0xA4, 4, 1 },
  { "ANDA.B x", 0x94, 4, 1 },
  { "ANDA.W ?", 0xB4, 2, 0 },
  { "ANDB.B #x", 0xC4, 1, 0 },		      
  { "ANDB.B x,X", 0xE4, 4, 1 },
  { "ANDB.B x", 0xD4, 4, 1 },
  { "ANDB.W ?", 0xF4, 2, 0 },

  { "ASLA", 0x48, 0, 0 },
  { "ASLB", 0x58, 0, 0 },
  { "ASLD", 0x05, 0, 0 },
  { "ASL x,X", 0x68, 4, 1 },
  { "ASL ?", 0x78, 2, 0 },

  { "ASL.B x,X", 0x68, 4, 1 },
  { "ASL.W ?", 0x78, 2, 0 },

  { "ASRA", 0x47, 0, 0 },
  { "ASRB", 0x57, 0, 0 },
  { "ASR x,X", 0x67, 4, 1 },
  { "ASR ?", 0x77, 2, 0 },

  { "ASR.B x,X", 0x67, 4, 1 },
  { "ASR.W ?", 0x77, 2, 0 },

  { "BCC x", 0x24, 5, 0 },
  { "BHS x", 0x24, 5, 0 },
  { "BCS x", 0x25, 5, 0 },
  { "BLO x", 0x25, 5, 0 },
  { "BEQ x", 0x27, 5, 0 },
  { "BGE x", 0x2C, 5, 0 },
  { "BGT x", 0x2E, 5, 0 },
  { "BHI x", 0x22, 5, 0 },

  { "BCC.B x", 0x24, 5, 0 },
  { "BHS.B x", 0x24, 5, 0 },
  { "BCS.B x", 0x25, 5, 0 },
  { "BLO.B x", 0x25, 5, 0 },
  { "BEQ.B x", 0x27, 5, 0 },
  { "BGE.B x", 0x2C, 5, 0 },
  { "BGT.B x", 0x2E, 5, 0 },
  { "BHI.B x", 0x22, 5, 0 },

  { "BITA #x", 0x85, 1, 0 },
  { "BITA x,X", 0xA5, 4, 1 },
  { "BITA x", 0x95, 4, 1 },
  { "BITA ?", 0xB5, 2, 0 },
  { "BITB #x", 0xC5, 1, 0 },		      
  { "BITB x,X", 0xE5, 4, 1 },
  { "BITB x", 0xD5, 4, 1 },
  { "BITB ?", 0xF5, 2, 0 },

  { "BITA.B #x", 0x85, 1, 0 },
  { "BITA.B x,X", 0xA5, 4, 1 },
  { "BITA.B x", 0x95, 4, 1 },
  { "BITA.W ?", 0xB5, 2, 0 },
  { "BITB.B #x", 0xC5, 1, 0 },		      
  { "BITB.B x,X", 0xE5, 4, 1 },
  { "BITB.B x", 0xD5, 4, 1 },
  { "BITB.W ?", 0xF5, 2, 0 },

  { "BLE x", 0x2F, 5, 0 },
  { "BLS x", 0x23, 5, 0 },
  { "BLT x", 0x2D, 5, 0 },
  { "BMI x", 0x2B, 5, 0 },
  { "BNE x", 0x26, 5, 0 },
  { "BPL x", 0x2A, 5, 0 },
  { "BRA x", 0x20, 5, 0 },
  { "BRN x", 0x21, 5, 0 },
  { "BSR x", 0x8D, 5, 0 },
  { "BVC x", 0x28, 5, 0 },
  { "BVS x", 0x29, 5, 0 },

  { "BLE.B x", 0x2F, 5, 0 },
  { "BLS.B x", 0x23, 5, 0 },
  { "BLT.B x", 0x2D, 5, 0 },
  { "BMI.B x", 0x2B, 5, 0 },
  { "BNE.B x", 0x26, 5, 0 },
  { "BPL.B x", 0x2A, 5, 0 },
  { "BRA.B x", 0x20, 5, 0 },
  { "BRN.B x", 0x21, 5, 0 },
  { "BSR.B x", 0x8D, 5, 0 },
  { "BVC.B x", 0x28, 5, 0 },
  { "BVS.B x", 0x29, 5, 0 },

  { "CBA", 0x11, 0, 0 },
  { "CLC", 0x0C, 0, 0 },
  { "CLI", 0x0E, 0, 0 },

  { "CLRA", 0x4F, 0, 0 },
  { "CLRB", 0x5F, 0, 0 },
  { "CLR x,X", 0x6F, 4, 1 },
  { "CLR ?", 0x7F, 2, 0 },  

  { "CLR.B x,X", 0x6F, 4, 1 },
  { "CLR.W ?", 0x7F, 2, 0 },
  
  { "CLV", 0x0A, 0, 0 },

  { "CMPA #x", 0x81, 1, 0 },
  { "CMPA x,X", 0xA1, 4, 1 },
  { "CMPA x", 0x91, 4, 1 },
  { "CMPA ?", 0xB1, 2, 0 },
  { "CMPB #x", 0xC1, 1, 0 },		      
  { "CMPB x,X", 0xE1, 4, 1 },
  { "CMPB x", 0xD1, 4, 1 },
  { "CMPB ?", 0xF1, 2, 0 },

  { "CMPA.B #x", 0x81, 1, 0 },
  { "CMPA.B x,X", 0xA1, 4, 1 },
  { "CMPA.B x", 0x91, 4, 1 },
  { "CMPA.W ?", 0xB1, 2, 0 },
  { "CMPB.B #x", 0xC1, 1, 0 },		      
  { "CMPB.B x,X", 0xE1, 4, 1 },
  { "CMPB.B x", 0xD1, 4, 1 },
  { "CMPB.W ?", 0xF1, 2, 0 },

  { "COMA", 0x43, 0, 0 },
  { "COMB", 0x53, 0, 0 },
  { "COM x,X", 0x63, 4, 1 },
  { "COM ?", 0x73, 2, 0 },

  { "COM.B x,X", 0x63, 4, 1 },
  { "COM.W ?", 0x73, 2, 0 },

  { "CPX #?", 0x8C, 2, 0 },
  { "CPX x,X", 0xAC, 4, 1 },
  { "CPX x", 0x9C, 4, 1 },
  { "CPX ?", 0xBC, 2, 0 },

  { "CPX.W #?", 0x8C, 2, 0 },
  { "CPX.B x,X", 0xAC, 4, 1 },
  { "CPX.B x", 0x9C, 4, 1 },
  { "CPX.W ?", 0xBC, 2, 0 },

  { "DAA", 0x19, 0, 0 },

  { "DECA", 0x4A, 0, 0 },
  { "DECB", 0x5A, 0, 0 },
  { "DEC x,X", 0x6A, 4, 1 },
  { "DEC ?", 0x7A, 2, 0 },

  { "DEC.B x,X", 0x6A, 4, 1 },
  { "DEC.W ?", 0x7A, 2, 0 },
  
  { "DES", 0x34, 0, 0 },
  { "DEX", 0x09, 0, 0 },
  
  { "EORA #x", 0x88, 1, 0 },
  { "EORA x,X", 0xA8, 4, 1 },
  { "EORA x", 0x98, 4, 1 },
  { "EORA ?", 0xB8, 2, 0 },
  { "EORB #x", 0xC8, 1, 0 },		      
  { "EORB x,X", 0xE8, 4, 1 },
  { "EORB x", 0xD8, 4, 1 },
  { "EORB ?", 0xF8, 2, 0 },

  { "EORA.B #x", 0x88, 1, 0 },
  { "EORA.B x,X", 0xA8, 4, 1 },
  { "EORA.B x", 0x98, 4, 1 },
  { "EORA.W ?", 0xB8, 2, 0 },
  { "EORB.B #x", 0xC8, 1, 0 },		      
  { "EORB.B x,X", 0xE8, 4, 1 },
  { "EORB.B x", 0xD8, 4, 1 },
  { "EORB.W ?", 0xF8, 2, 0 },
  
  { "INCA", 0x4C, 0, 0 },
  { "INCB", 0x5C, 0, 0 },
  { "INC x,X", 0x6C, 4, 1 },
  { "INC ?", 0x7C, 2, 0 },

  { "INC.B x,X", 0x6C, 4, 1 },
  { "INC.W ?", 0x7C, 2, 0 },
  
  { "INS", 0x31, 0, 0 },
  { "INX", 0x08, 0, 0 },

  { "JMP x,X", 0x6E, 4, 1 },
  { "JMP ?", 0x7E, 2, 0 },
  { "JSR x,X", 0xAD, 4, 1 },
  { "JSR x", 0x9D, 4, 1 },
  { "JSR ?", 0xBD, 2, 0 },

  { "JMP.B x,X", 0x6E, 4, 1 },
  { "JMP.W ?", 0x7E, 2, 0 },
  { "JSR.B x,X", 0xAD, 4, 1 },
  { "JSR.B x", 0x9D, 4, 1 },
  { "JSR.W ?", 0xBD, 2, 0 },

  { "LDAA #x", 0x86, 1, 0 },
  { "LDAA x,X", 0xA6, 4, 1 },
  { "LDAA x", 0x96, 4, 1 },
  { "LDAA ?", 0xB6, 2, 0 },
  { "LDAB #x", 0xC6, 1, 0 },		      
  { "LDAB x,X", 0xE6, 4, 1 },
  { "LDAB x", 0xD6, 4, 1 },
  { "LDAB ?", 0xF6, 2, 0 },
  { "LDD #x", 0xCC, 1, 0 },		      
  { "LDD x,X", 0xEC, 4, 1 },
  { "LDD x", 0xDC, 4, 1 },
  { "LDD ?", 0xFC, 2, 0 },

  { "LDAA.B #x", 0x86, 1, 0 },
  { "LDAA.B x,X", 0xA6, 4, 1 },
  { "LDAA.B x", 0x96, 4, 1 },
  { "LDAA.W ?", 0xB6, 2, 0 },
  { "LDAB.B #x", 0xC6, 1, 0 },		      
  { "LDAB.B x,X", 0xE6, 4, 1 },
  { "LDAB.B x", 0xD6, 4, 1 },
  { "LDAB.W ?", 0xF6, 2, 0 },
  { "LDD.B #x", 0xCC, 1, 0 },		      
  { "LDD.B x,X", 0xEC, 4, 1 },
  { "LDD.B x", 0xDC, 4, 1 },
  { "LDD.W ?", 0xFC, 2, 0 },
  
  { "LDS #?", 0x8E, 2, 0 },
  { "LDS x,X", 0xAE, 4, 1 },
  { "LDS x", 0x9E, 4, 1 },
  { "LDS ?", 0xBE, 2, 0 },

  { "LDS.W #?", 0x8E, 2, 0 },
  { "LDS.B x,X", 0xAE, 4, 1 },
  { "LDS.B x", 0x9E, 4, 1 },
  { "LDS.W ?", 0xBE, 2, 0 },
  
  { "LDX #?", 0xCE, 2, 0 },
  { "LDX x,X", 0xEE, 4, 1 },
  { "LDX x", 0xDE, 4, 1 },
  { "LDX ?", 0xFE, 2, 0 },

  { "LDX.W #?", 0xCE, 2, 0 },
  { "LDX.B x,X", 0xEE, 4, 1 },
  { "LDX.B x", 0xDE, 4, 1 },
  { "LDX.W ?", 0xFE, 2, 0 },

  { "LSLA", 0x48, 0, 0 },
  { "LSLB", 0x58, 0, 0 },
  { "LSLD", 0x05, 0, 0 },
  { "LSL x,X", 0x65, 4, 1 },
  { "LSL ?", 0x78, 2, 0 },

  { "LSL.B x,X", 0x65, 4, 1 },
  { "LSL.W ?", 0x78, 2, 0 },

  { "LSRA", 0x44, 0, 0 },
  { "LSRB", 0x54, 0, 0 },
  { "LSRD", 0x04, 0, 0 },
  { "LSR x,X", 0x64, 4, 1 },
  { "LSR ?", 0x74, 2, 0 },

  { "LSR.B x,X", 0x64, 4, 1 },
  { "LSR.W ?", 0x74, 2, 0 },

  { "MUL", 0x3D, 0, 0 },
  
  { "NEGA", 0x40, 0, 0 },
  { "NEGB", 0x50, 0, 0 },
  { "NEG x,X", 0x60, 4, 1 },
  { "NEG ?", 0x70, 2, 0 },

  { "NEG.B x,X", 0x60, 4, 1 },
  { "NEG.W ?", 0x70, 2, 0 },

  { "NOP", 0x01, 0, 0 },

  { "ORAA #x", 0x8A, 1, 0 },
  { "ORAA x,X", 0xAA, 4, 1 },
  { "ORAA x", 0x9A, 4, 1 },
  { "ORAA ?", 0xBA, 2, 0 },
  { "ORAB #x", 0xCA, 1, 0 },		      
  { "ORAB x,X", 0xEA, 4, 1 },
  { "ORAB x", 0xDA, 4, 1 },
  { "ORAB ?", 0xFA, 2, 0 },

  { "ORAA.B #x", 0x8A, 1, 0 },
  { "ORAA.B x,X", 0xAA, 4, 1 },
  { "ORAA.B x", 0x9A, 4, 1 },
  { "ORAA.W ?", 0xBA, 2, 0 },
  { "ORAB.B #x", 0xCA, 1, 0 },		      
  { "ORAB.B x,X", 0xEA, 4, 1 },
  { "ORAB.B x", 0xDA, 4, 1 },
  { "ORAB.W ?", 0xFA, 2, 0 },

  { "PSHA", 0x36, 0, 0 },
  { "PSHB", 0x37, 0, 0 },
  { "PSHX", 0x3C, 0, 0 },
  { "PULA", 0x32, 0, 0 },
  { "PULB", 0x33, 0, 0 },
  { "PULX", 0x38, 0, 0 },

  { "ROLA", 0x49, 0, 0 },
  { "ROLB", 0x59, 0, 0 },
  { "ROL x,X", 0x69, 4, 1 },
  { "ROL ?", 0x79, 2, 0 },

  { "ROL.B x,X", 0x69, 4, 1 },
  { "ROL.W ?", 0x79, 2, 0 },
  
  { "RORA", 0x46, 0, 0 },
  { "RORB", 0x56, 0, 0 },
  { "ROR x,X", 0x66, 4, 1 },
  { "ROR ?", 0x76, 2, 0 },

  { "ROR.B x,X", 0x66, 4, 1 },
  { "ROR.W ?", 0x76, 2, 0 },

  { "RTI", 0x3B, 0, 0 },
  { "RTS", 0x39, 0, 0 },

  { "SBA", 0x10, 0, 0 },

  { "SBCA #x", 0x82, 1, 0 },
  { "SBCA x,X", 0xA2, 4, 1 },
  { "SBCA x", 0x92, 4, 1 },
  { "SBCA ?", 0xB2, 2, 0 },
  { "SBCB #x", 0xC2, 1, 0 },		      
  { "SBCB x,X", 0xE2, 4, 1 },
  { "SBCB x", 0xD2, 4, 1 },
  { "SBCB ?", 0xF2, 2, 0 },

  { "SBCA.B #x", 0x82, 1, 0 },
  { "SBCA.B x,X", 0xA2, 4, 1 },
  { "SBCA.B x", 0x92, 4, 1 },
  { "SBCA.W ?", 0xB2, 2, 0 },
  { "SBCB.B #x", 0xC2, 1, 0 },		      
  { "SBCB.B x,X", 0xE2, 4, 1 },
  { "SBCB.B x", 0xD2, 4, 1 },
  { "SBCB.W ?", 0xF2, 2, 0 },

  { "SEC", 0x0D, 0, 0 },
  { "SEI", 0x0F, 0, 0 },
  { "SEV", 0x0B, 0, 0 },

  { "STAA x,X", 0xA7, 4, 1 },
  { "STAA x", 0x97, 4, 1 },
  { "STAA ?", 0xB7, 2, 0 },
  { "STAB x,X", 0xE7, 4, 1 },
  { "STAB x", 0xD7, 4, 1 },
  { "STAB ?", 0xF7, 2, 0 },
  { "STD x,X", 0xED, 4, 1 },
  { "STD x", 0xDD, 4, 1 },
  { "STD ?", 0xFD, 2, 0 },

  { "STAA.B x,X", 0xA7, 4, 1 },
  { "STAA.B x", 0x97, 4, 1 },
  { "STAA.W ?", 0xB7, 2, 0 },
  { "STAB.B x,X", 0xE7, 4, 1 },
  { "STAB.B x", 0xD7, 4, 1 },
  { "STAB.W ?", 0xF7, 2, 0 },
  { "STD.B x,X", 0xED, 4, 1 },
  { "STD.B x", 0xDD, 4, 1 },
  { "STD.W ?", 0xFD, 2, 0 },
  
  { "STS x,X", 0xAF, 4, 1 },
  { "STS x", 0x9F, 4, 1 },
  { "STS ?", 0xBF, 2, 0 },

  { "STS.B x,X", 0xAF, 4, 1 },
  { "STS.B x", 0x9F, 4, 1 },
  { "STS.W ?", 0xBF, 2, 0 },

  { "STX x,X", 0xEF, 4, 1 },
  { "STX x", 0xDF, 4, 1 },
  { "STX ?", 0xFF, 2, 0 },

  { "STX.B x,X", 0xEF, 4, 1 },
  { "STX.B x", 0xDF, 4, 1 },
  { "STX.W ?", 0xFF, 2, 0 },

  { "SUBA #x", 0x80, 1, 0 },
  { "SUBA x,X", 0xA0, 4, 1 },
  { "SUBA x", 0x90, 4, 1 },
  { "SUBA ?", 0xB0, 2, 0 },
  { "SUBB #x", 0xC0, 1, 0 },		      
  { "SUBB x,X", 0xE0, 4, 1 },
  { "SUBB x", 0xD0, 4, 1 },
  { "SUBB ?", 0xF0, 2, 0 },
  { "SUBD #x", 0x83, 1, 0 },
  { "SUBD x,X", 0xA3, 4, 1 },
  { "SUBD x", 0x93, 4, 1 },
  { "SUBD ?", 0xB3, 2, 0 },
  
  { "SUBA.B #x", 0x80, 1, 0 },
  { "SUBA.B x,X", 0xA0, 4, 1 },
  { "SUBA.B x", 0x90, 4, 1 },
  { "SUBA.W ?", 0xB0, 2, 0 },
  { "SUBB.B #x", 0xC0, 1, 0 },		      
  { "SUBB.B x,X", 0xE0, 4, 1 },
  { "SUBB.B x", 0xD0, 4, 1 },
  { "SUBB.W ?", 0xF0, 2, 0 },
  { "SUBD.B #x", 0x83, 1, 0 },
  { "SUBD.B x,X", 0xA3, 4, 1 },
  { "SUBD.B x", 0x93, 4, 1 },
  { "SUBD.W ?", 0xB3, 2, 0 },
  
  { "SWI", 0x3F, 0, 0 },
  { "TAB", 0x16, 0, 0 },
  { "TAP", 0x06, 0, 0 },
  { "TBA", 0x17, 0, 0 },
  { "TPA", 0x07, 0, 0 },

  { "TSTA", 0x4D, 0, 0 },
  { "TSTB", 0x5D, 0, 0 },
  { "TST x,X", 0x6D, 4, 1 },
  { "TST ?", 0x7D, 2, 0 },

  { "TST.B x,X", 0x6D, 4, 1 },
  { "TST.W ?", 0x7D, 2, 0 },

  { "TSX", 0x30, 0, 0 },
  { "TXS", 0x35, 0, 0 },
  { "WAI", 0x3E, 0, 0 },

  { "E", 0x100, 0xFF, 0 }
};
