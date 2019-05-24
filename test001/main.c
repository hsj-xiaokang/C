  #include<stdio.h>
  #include "head.h"
//  多次实现该方法，会导致报错
//int add(int a,int b,int c)
//  {
//    int result = 0;
//    printf("%s","this is add function here!\n");
//    //scanf("%d %d %d",&a,&b,&c);
//    result = a+b+c;
//    return result;
// }

  void main()
  {
     int a=3,b=4,c=5,result=0;
     result=add(a,b,c);
     printf("The result is %d! \n",result);
     printf("The PI is %f \n",PI);
     //return 0;
  }
