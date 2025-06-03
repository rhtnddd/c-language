// #include <stdio.h>
// int main(void)
// {
//     int a=10;
//     printf("변수 a의 값:%d\n", a);
//     printf("변수 a의 주소:%d\n",&a);
//     int i;
//     char c;
//     double d;
//     printf("int : %zu,char:%zu,double:%zu\n",sizeof(i),sizeof(c),sizeof(d));
// }
// #include <stdio.h>
// int main(void)
// {
//     int* pi;
//     char* pc;
//     double* pd;
//     printf("int * 크기:%zu 바이트\n",sizeof(pi));
//     printf("char * 크기:%zu 바이트\n",sizeof(pc));
//     printf("double * 크기:%zu 바이트\n",sizeof(pd));
// }
// #include <stdio.h>
// int main(void)
// {
//     1번
//     int a=30;
//     int b=10;
//     int *pa=&a;
//     int *pb=&b;
//     3번
//     int a=30;
//     int b=10;
//     int *pa=&a;
//     int *pb=&b;
//     printf("%p\n",pa);
//     printf("%p\n",pb);
//     5번
//     int a=30;
//     int b=10;
//     int *pa=&a;
//     int *pb=&b;
//     *pa=90;
//     printf("포인터를 통해 뱐걍된 뱐수 a의 값:%d\n",a);
// }