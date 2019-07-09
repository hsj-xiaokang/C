#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

/*
 * @author jelathro
 * @date 2/19/13
 *
 * Provide various examples of pointers
 * and how pointers work.
 */
 int pointersHSJTest(){
    // Basic pointers and Basic addresses
    int *basic_pointer;
    int basic_value;

    // Give value a literal value
    basic_value = 'A';
    // Assign pointer to address
    // of literal value in value
    basic_pointer = &basic_value;

    //out-print=0028feec-随机地址
    printf("pointer is at address %p\n", &basic_pointer);
    //out-print=A
    printf("value at address of pointer is %c\n\n", *basic_pointer);

  /**
   特殊的情况，他们并不一定需要使用&取地址：
   ①数组名的值就是这个数组的第一个元素的地址。
   ②函数名的值就是这个函数的地址。
   ③字符串字面值常量作为右值时，就是这个字符串对应的字符数组的名称,也就是这个字符串在内存中的地址。
   **/
    // More advanced use of pointers
    // Array's are just fancy pointers
    char array[5] = {'a', 'A', 'b', 'z', 'M'};
    char *same_array = array;
    char **fancy_same_array = &same_array;

    //out-print=z,随机地址
    printf("array[3] = %c, addr = %p\n", array[3], &array[3]);
    //out-print=z,随机地址
    printf("same_array[3] = %c, addr = %p\n", same_array[3], &same_array[3]);
     //out-print=z,随机地址
    printf("**fancy_same_array[3] = %c, addr = %p\n", (*fancy_same_array)[3], &(*fancy_same_array)[3]);

    // char arrays are also just a "string"
    // of characters.

    //out-print=aAbzMA,随机地址(数值array相当于取第一个数值地址！)
    printf("array string %s, addr = %p\n", array, &array);
    //out-print=aAbzMA,随机地址(数值array相当于取第一个数值地址！)
    printf("same array string %s, addr = %p\n", same_array, &same_array);
    //out-print=aAbzMA,随机地址(数值array相当于取第一个数值地址！)
    printf("fancy array string %s, addr = %p\n\n", (*fancy_same_array), &(*fancy_same_array));

    // Arrays of pointers
    char *ptr_array[2];
    char *ptr1 = NULL, *ptr2 = NULL;
    char char_elements[2] = {'H', 'i'};

    ptr1 = &char_elements[1];
    ptr2 = char_elements;

    ptr_array[0] = ptr2;
    ptr_array[1] = ptr1;

    //out-print=H,随机地址(数值array相当于取第一个数值地址！)
    printf("**ptr_array = %c\n", **ptr_array);
    //out-print=随机地址(数值array相当于取第一个数值地址！)
    printf("addr at **ptr_array = %p\n", &(**ptr_array));
    //out-print=随机地址(数值array相当于取第一个数值地址！)
    printf("addr at **ptr_array[0] = %p\n\n", &(*ptr_array[0]));

     //out-print=i,随机地址(数值array相当于取第一个数值地址！)
    printf("*ptr_array[1] = %c\n", *ptr_array[1]);
     //out-print=随机地址(数值array相当于取第一个数值地址！)
    printf("addr at *ptr_array[0] = %p\n", &(**ptr_array));
     //out-print=随机地址(数值array相当于取第一个数值地址！)
    printf("addr at *ptr_array[0] = %p\n", &(**ptr_array));
     //out-print=随机地址(数值array相当于取第一个数值地址！)
    printf("addr at *ptr_array[1] = %p\n", &(*ptr_array[1]));

    return 1;
}

