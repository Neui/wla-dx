; SMS/GG memory map
; By Maxim

.MEMORYMAP
    DEFAULTSLOT 0
    SLOTSIZE $4000
    SLOT 0 START $0000 ; ROM
    SLOT 1 START $4000 ; ROM
    SLOT 2 START $8000 ; ROM
    SLOTSIZE $2000
    SLOT 3 START $C000 ; RAM
.ENDME
