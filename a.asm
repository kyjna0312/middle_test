	      INT    0, 48
	      SUP    0, main
	      RET    0, 0
dfs:
	      INT    0, 36
	      LDA    0, 20
	      LOD    1, 12
	   OFFSET    0, 0
	      LOD    1, 16
	   OFFSET    0, 0
	     LITI    0, 46
	     STXB    0, 0
	      POP    0, 1
	      LDA    1, 20
	     LITI    0, 1
	   MINUSI    0, 0
	      STX    0, 1
	      POP    0, 1
L2:
	      LOD    1, 20
	     LITI    0, 1
	     LEQI    0, 0
	      JPC    0, L3
	      LDA    1, 24
	     LITI    0, 1
	   MINUSI    0, 0
	      STX    0, 1
	      POP    0, 1
L5:
	      LOD    1, 24
	     LITI    0, 1
	     LEQI    0, 0
	      JPC    0, L6
	      LDA    0, 20
	      LOD    3, 28
	   OFFSET    0, 0
	      LOD    3, 32
	   OFFSET    0, 0
	     LDIB    0, 0
	     LITI    0, 76
	     EQLI    0, 0
	      JPC    0, L7
	      INT    0, 12
	      LOD    3, 28
	      LOD    3, 32
	      POP    0, 5
	     ADDR    0, dfs
	      CAL    0, 0
L7:
L4:
	      LOD    1, 24
	      LDA    1, 24
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L5
L6:
L1:
	      LOD    1, 20
	      LDA    1, 20
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L2
L3:
	      RET    0, 0
main:
	      INT    0, 24
	      INT    0, 12
	      LDA    0, 20
	      LDA    0, 12
	      LDA    0, 16
	      POP    0, 6
	     ADDR    0, scanf
	      CAL    0, 0
	      LDA    1, 16
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L9:
	      LOD    1, 16
	      LOD    0, 16
	     SUBI    0, 0
	      JPC    0, L10
	      LDA    1, 20
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L12:
	      LOD    1, 20
	      LOD    0, 12
	     SUBI    0, 0
	      JPC    0, L13
	      INT    0, 12
	      LDA    0, 32
	      LDA    0, 20
	      LOD    1, 16
	   OFFSET    0, 0
	      LOD    1, 20
	   OFFSET    0, 0
	      POP    0, 5
	     ADDR    0, scanf
	      CAL    0, 0
L11:
	      LOD    1, 20
	      LDA    1, 20
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L12
L13:
L8:
	      LOD    1, 16
	      LDA    1, 16
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L9
L10:
	      LDA    1, 16
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L15:
	      LOD    1, 16
	      LOD    0, 16
	     SUBI    0, 0
	      JPC    0, L16
	      LDA    1, 20
	     LITI    0, 0
	      STX    0, 1
	      POP    0, 1
L18:
	      LOD    1, 20
	      LOD    0, 12
	     SUBI    0, 0
	      JPC    0, L19
	      LDA    0, 20
	      LOD    1, 16
	   OFFSET    0, 0
	      LOD    1, 20
	   OFFSET    0, 0
	     LDIB    0, 0
	     LITI    0, 76
	     EQLI    0, 0
	      JPC    0, L20
	      INT    0, 12
	      LOD    1, 16
	      LOD    1, 20
	      POP    0, 5
	     ADDR    0, dfs
	      CAL    0, 0
	      LOD    1, 12
	      LDA    1, 12
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
L20:
L17:
	      LOD    1, 20
	      LDA    1, 20
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L18
L19:
L14:
	      LOD    1, 16
	      LDA    1, 16
	      LDX    0, 1
	     INCI    0, 0
	      STO    0, 1
	      POP    0, 1
	      JMP    0, L15
L16:
	      INT    0, 12
	      LDA    0, 40
	      LOD    1, 12
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
	      LDA    1, -4
	     LITI    0, 0
	      STO    0, 1
	      RET    0, 0
	      RET    0, 0
.literal    20 "%d %d\n"
.literal    32 "%c "
.literal    40 "%d"
