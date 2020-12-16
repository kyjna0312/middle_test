	      INT    0, 28
	      SUP    0, main
	      RET    0, 0
gcd:
	      INT    0, 24
	      LDA    1, 16
	      LOD    1, 12
	      STX    0, 1
	      POP    0, 1
	      LDA    1, 20
	      LOD    1, 0
	      STX    0, 1
	      POP    0, 1
L2:
	      LOD    1, 16
	      LOD    1, 20
	     NEQI    0, 0
	      JPC    0, L3
	      LOD    1, 16
	      LOD    1, 20
	     SUBI    0, 0
	      JPC    0, L4
	      LDA    1, 20
	      LOD    1, 20
	      LOD    1, 16
	     SUBI    0, 0
	      STX    0, 1
	      POP    0, 1
L4:
	      LOD    1, 16
	      LOD    1, 20
	     GTRI    0, 0
	      JPC    0, L5
	      LDA    1, 16
	      LOD    1, 16
	      LOD    1, 20
	     SUBI    0, 0
	      STX    0, 1
	      POP    0, 1
L5:
L1:
	      JMP    0, L2
L3:
	      LDA    1, -4
	      LOD    1, 16
	      STO    0, 1
	      RET    0, 0
	      RET    0, 0
main:
	      INT    0, 16
	      LDA    1, 12
	      INT    0, 16
	     LITI    0, 84
	     LITI    0, 36
	      POP    0, 5
	     ADDR    0, gcd
	      CAL    0, 0
	      STX    0, 1
	      POP    0, 1
	      INT    0, 12
	      LDA    0, 12
	      LOD    1, 12
	      POP    0, 5
	     ADDR    0, printf
	      CAL    0, 0
	      RET    0, 0
.literal    12 "result=%d\n"
