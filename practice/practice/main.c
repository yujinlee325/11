//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/12.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 10;
    int *ptr = &i;
    
    printf("i = %d, pi : %p\n", i, ptr);
    
    (*ptr)++;
    printf("i = %d, pi : %p\n", i, ptr);
    
    *ptr++;
    printf("i = %d, pi : %p\n", i, ptr);
    
    return 0;
}
