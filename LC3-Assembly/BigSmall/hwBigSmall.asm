	.orig x3000
	GETC
	ADD R1, R0, #0
	GETC
	ADD R2, R0, #0
	NOT R3, R2
	ADD R3, R3, #1
	ADD R4, R3, R1
	BRNZ B2
B1	ADD R0, R1, #0
	OUT
	ADD R0, R2, #0
	OUT
	BRNZP END
B2	ADD R0, R2, #0
	OUT
	ADD R0, R1, #0
	OUT
END	HALT