
    char x[4];
    x=4092, x+1=4093, x+2=4094, x+3=4095
    //o valor inicial de x é 4092 e a variável char aumenta de 1 em 1 byte

    int x[4];
    x=4092, x+1=4094, x+2=4096, x+3=4098
    //o valor inicial de x é 4092 e a variável int aumenta de 2 em 2 bytes

    float x[4];
    x=4092, x+1=4096, x+2=4100, x+3=4104
    //o valor inicial de x é 4092 e a variável float aumenta de 4 em 4 bytes

    double x[4];
    x=4092, x+1=4100, x+2=4108, x+3=4116
    //o valor inicial de x é 4092 e a variável double aumenta de 8 em 8 bytes


