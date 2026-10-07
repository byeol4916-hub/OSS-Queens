#include <stdio.h>
int mul(int i, int j){
    int k = i + j;
    return k;
}
int add(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int a,b;
    char c;

  while(1){
    int d = 0;
    printf("Enter integers>>");
    scanf("%d %c %d", &a, &c, &b);
    if(a == 0) break;
    if(c == '/'){
      d = a/b;
      printf("%d%c%d = %d\n",a,c,b,d);
      }
    if(c == '-'){
      d = a-b;
      printf("%d%c%d = %d\n",a,c,b,d);
        }
    if(c == '+'){
        d=add(a,b);
        printf("%d + %d = %d\n",a,b,d);
        }
    if(c=='*'){
        d=mul(a,b);
        printf("%d%c%d = %d\n",a,c,b,d);
       }
    }
}
