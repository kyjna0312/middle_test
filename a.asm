	      INT    0, 11076
	      SUP    0, main
	      RET    0, 0
dfs:
	      INT    0, 32
	      LDA    0, 20
	      LOD    1, 12
	   OFFSET    0, 0
	      LOD    1, 0
	   OFFSET    0, 0
	     LITI    0, 46
	     STXB    0, 0
	      POP    0, 1
	      LDA    1, 16
	     LITI    0, 1
	   MINUSI    0, 0
	      STX    0, 1
	      POP    0, 1
L2:
	      LOD    1, 16
	     LITI    0, 1
	     LEQI    0, 0
	      JPC     0 L3
	      LDA    1, 20
	     LITI    0, 1
	   MINUSI    0, 0
	      STX    0, 1
	      POP   