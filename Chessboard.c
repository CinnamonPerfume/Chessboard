#include <stdio.h>

int main () {
    int size; //Chessboard Size
    int width; //Field Width
    int i, j, r, t, y;

    printf("Enter chessboard size:\n");
    if ( scanf("%d", &size) != 1 || size <= 0) {
             printf("Invalid input.\n");
             return 0;
         }
    printf("Enter field width:\n");
    if ( scanf("%d", &width) != 1 || width <= 0) {
             printf("Invalid input.\n");
             return 0;
         }

    printf("+");
    for (y = 1; y <= size * width; y++) {
            printf("-");
        }
    printf("+\n");

    for (t = 1; t <= size; t++) {
            if ( t % 2 != 0) {
                    for(r=1; r <= width; r++) {       
                printf("|");
                for (i=1; i <= size; i++) {
                        if (i % 2 != 0) {    
                            for( j=1; j <= width; j++) {
                                    printf(" ");
                                }
                        }
                        else {
                            for( j=1; j <= width; j++)
                                {
                                    printf("X");
                                }
                        }
                    }
            printf("|\n");
            }
                }
            if ( t % 2 == 0) {
                    for(r=1; r <= width; r++) {       
                printf("|");
                for (i=1; i <= size; i++) {
                        if (i % 2 != 0) {
                            for( j=1; j <= width; j++) {
                                    printf("X");
                                }
                        }
                        else {
                            for( j=1; j <= width; j++) {
                                    printf(" ");
                                }
                        }
                    }
            printf("|\n");
            }
                }
        }
       printf("+");
    for (y = 1; y <= size * width; y++) {
            printf("-");
        }
    printf("+\n");
 
  return 0;
}
