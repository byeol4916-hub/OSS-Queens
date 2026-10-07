#include <stdio.h>
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
    if(c == '-'){
      d = a-b;
      printf("%d%c%d = %d\n",a,c,b,d);
    }
  }
}

