    .orig x3000         ;beginning of code
    JSR GETNUM          ;first call to subroutine
    JSR GETNUM          ;second call to subroutine
    HALT                ;end of code

GETNUM                  ;code in subroutine
    ST R2, GN_SR2       ;stores initial value in temporary register
    ST R0, GN_SR0       ;same as line above
	LD R2, N48          ;loads -48 into R2
NO  AND R0, R0, #0      ;sets R0 to 0
    GETC                ;gets character from user
    ADD R2, R2, R0      ;adds R0 and R2 together
    BRN NO              ;askes user for character if value is too small
	LD R2, N48          ;reloads -48 into R0
	ADD R2, R2, #-10    ;subtacts 10 from R2
	ADD R2, R2, R0      ;adds R0 and R2 together
    BRP NO              ;asks user for character if value is too large
    LD R2, GN_SR2       ;reload initial value into R2
    LD R0, GN_SR0       ;reload initial value into R0
    RET                 ;return to rest of code

    GN_SR2  .fill 0     ;sets initial value for temporary register
    GN_SR0  .fill 0     ;same as line above
	
	N48		.fill -48   ;sets a temporary register to -48
            .end        ;end of code
