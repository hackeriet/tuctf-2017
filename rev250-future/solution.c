#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void genMatrix(char mat[5][5], char str[]) {
  for (int i = 0; i < 25; i++) {
    int m = (i * 2) % 25;
    int f = (i * 7) % 25;
    mat[m/5][m%5] = str[f];
  }
}

void printEquations(char mat[5][5], unsigned char auth[]) {
  printf("%c + %c = %u\n", mat[0][0], mat[4][4], auth[0]);
  printf("%c + %c = %u\n", mat[2][1], mat[0][2], auth[1]);
  printf("%c + %c = %u\n", mat[4][2], mat[4][1], auth[2]);
  printf("%c + %c = %u\n", mat[1][3], mat[3][1], auth[3]);
  printf("%c + %c = %u\n", mat[3][4], mat[1][2], auth[4]);
  printf("%c + %c = %u\n", mat[1][0], mat[2][3], auth[5]);
  printf("%c + %c = %u\n", mat[2][4], mat[2][0], auth[6]);
  printf("%c + %c + %c = %u\n", mat[3][3], mat[3][2], mat[0][3], auth[7]);
  printf("%c + %c + %c = %u\n", mat[0][4], mat[4][0], mat[0][1], auth[8]);
  printf("%c + %c = %u\n", mat[3][3], mat[2][0], auth[9]);
  printf("%c + %c = %u\n", mat[4][0], mat[1][2], auth[10]);
  printf("%c + %c = %u\n", mat[0][4], mat[4][1], auth[11]);
  printf("%c + %c = %u\n", mat[0][3], mat[0][2], auth[12]);
  printf("%c + %c = %u\n", mat[3][0], mat[2][0], auth[13]);
  printf("%c + %c = %u\n", mat[1][4], mat[1][2], auth[14]);
  printf("%c + %c = %u\n", mat[4][3], mat[2][3], auth[15]);
  printf("%c + %c = %u\n", mat[2][2], mat[0][2], auth[16]);
  printf("%c + %c = %u\n", mat[1][1], mat[4][1], auth[17]);
  printf("a = 84\n");
  printf("b = 85\n");
  printf("c = 67\n");
  printf("d = 84\n");
  printf("e = 70\n");
  printf("f = 123\n");
  printf("y = 124\n");
}

/*
Insert equations in solver here: https://quickmath.com/webMathematica3/quickmath/equations/solve/advanced.jsp

get the result:

a=84
b=85
c=67
d=84
e=70
f=123
g=53
h=121
i=53
j=55
k=t1
l=109
m=53
n=94
o=48
p=101
q=95
r=52
s=95
t=100
u=48
v=119
w=111
x=33
y=124

which translates to
TUCTF{5y573m5_0f_4_d0wn!}
*/
int main() {
  char* flag = "abcdefghijklmnopqrstuvwxy";
  char mat[5][5];// Matrix for a jumbled string
  unsigned char pass[19] = "\x8b\xce\xb0\x89\x7b\xb0\xb0\xee\xbf\x92\x65\x9d\x9a\x99\x99\x94\xad\xe4\x00";  
  genMatrix(mat, flag);
  printEquations(mat, pass);
}


