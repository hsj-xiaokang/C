void justTest1(){

    char c=127;
    printf("%d\n",++c);
    printf("%d\n",++c);
    printf("===================\n");
    printf("%d\n",sizeof('A'));
    printf("%d\n",sizeof(10));
    printf("===================\n");
    unsigned char a = 0xa5;
    unsigned char b = ~a>>4+1;
    printf("b=%d",b);
}
