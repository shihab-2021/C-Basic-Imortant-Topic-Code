for (int i = 0; i < 8; i++)
    {
        printf("%d th bit: %d\n", i, getBit(x, i));
        printf("Clear: %s\n", toBinary(clearBit(x, i), x).str);
        printf("Set: %s\n", toBinary(setBit(x, i), x).str);
        printf("Flip: %s\n", toBinary(flipBit(x, i), x).str);
    }