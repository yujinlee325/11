//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/12.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 100;
    int *p = &i;
    int **q = &p;
    
    *p = 200;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    
    **q = 300;
    printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
    
    
    return 0;
}
