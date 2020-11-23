    .orig x3000
    LEA R1, STR1
TOP LDR R0, R1, #0
    BRZ END
    OUT
    ADD R1, R1, #1
    BRNZP TOP
END HALT
STR1    .STRINGZ "Hello World!"
        .end
