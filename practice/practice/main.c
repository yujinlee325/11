//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/12.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

void print_image(int a[5][5])
{
    int i,j;
    
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d", a[i][j]);
        }
    printf("\n");
  }
}
  


void brighten_image(int a[5][5])
{
    int i,j;
    int *ptr ;
      
      ptr = (int*)a[0];
      for (i=0;i<5;i++)
      {
          for (j=0;j<5;j++)
          {
              *ptr += 10;
              ptr++;
          }
        printf("\n");
      }
}

int main(void) {
    
int image[5][5] = {
                    {10, 20, 30, 40, 50},
                    {10, 20, 30, 40, 50},
                    {10, 20, 30, 40, 50},
                    {10, 20, 30, 40, 50},
                    {10, 20, 30, 40, 50}
};
    
    print_image(image);
    brighten_image(image);
    print_image(image);
    
    return 0;
}

