#include <stdio.h>
#include <string.h>

void Create_Triangle(int);
void stop(int);
void Pre_Create(int);



int main(){
int Shape;
int x;
printf("Chose the geometric shape that you wish to print\nrectangular triangle(1)\nRectangle|Square(2)\nCircle(W.I.P.)\n");
int Scan_P = scanf("%d", &Shape);
if (Scan_P == 0||Shape < 1||Shape > 2){
    stop(1);
}
else{
Pre_Create(Shape);
}
return 0;
}



void stop(Has_Failed){
    if (Has_Failed == 1){
    printf("Program failed to run, check your inputs.");
    }
    while(1){
    int z;
    printf("\n");
    scanf("%d", &z);
    }

}



void Pre_Create(int Form){
    switch (Form){
case 1:
printf("Input the height of the triangle(min:2)\n-->");
int height;
int x = scanf("%d", &height);
if (x == 0||height <=1){
    stop(1);
}
else{
Create_Triangle(height);
}
break;
case 2:
    printf("Input the size of the vertical side\n-->");
    int V_side;
    int Scan_Sqr = scanf("%d", &V_side);
    printf("Input the size of the horizontal side\n-->");
    int H_side;
    int Scan_Sq = scanf("%d", &H_side);
    if (Scan_Sqr == 0||Scan_Sq == 0|| V_side < 1||H_side < 1){
        stop(1);
    }
    Create_Rectangle_Square(V_side, H_side);
    }
    break;
}



void Create_Triangle(int Height){
       char Block1 = 124;
       char Block2 = 92;
       char Block3 = 95;
       char Space = 32;
       int X;
       int Y;
       for(X = 0;X < (Height - 1); X++){
            printf("%c", Block1);
            for(Y = 0; Y < X; Y++){
                printf("%c", Space);
            }
            printf("%c\n", Block2);
       }
       printf("%c", Block1);
       for(X = 0; X < (Height - 1); X++){
        printf("%c", Block3);
       }
       printf("%c", Block2);
       stop(0);
    }



void Create_Rectangle_Square(int V_Side, int H_Side){
    char Block1 = 95;
    char Block2 = 124;
    char Block3 = 126;
    char Space = 32;
    int X;
    int Y;
    printf("%c", Space);
    for(X = 0;X < H_Side;X++){
            printf("%c", Block1);
            printf("%c", Space);
    }
    for(X = 0; X < V_Side; X++){
        printf("\n");
        printf("%c", Block2);
        for(Y = 0;Y < H_Side * 2 - 1;Y++){
            printf("%c", Space);
            if (Y == H_Side * 2 - 2){
                printf("%c", Block2);
            }
        }
    }
    printf("\n%c",Space);
for(X = 0;X < H_Side;X++){
            printf("%c", Block3);
            printf("%c", Space);
}
stop(0);
}
