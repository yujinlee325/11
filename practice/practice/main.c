//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/12.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>
char *proverb="All that glisters is not gold.";

void setPointer(char **q)
{
  *q = proverb;
}

int main(void) {
    char *p = "zzz";
    setPointer(&p);
    printf("%s \n", p);
    
    return 0;
}
