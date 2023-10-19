#include <stdio.h>
#include <stdlib.h>

int inc(int counter);
int main(int argc, char *argv[])
{
    int i = 10 ;
    printf("함수 호출 전 i= : %d\n ", i);
    inc(i);
    //i = inc(i); 함수 실행 후 값을 나타내고 싶으면  
    printf("함수 호출 후 i = %d\n", i); 
    
  system("PAUSE");	
  return 0;
}
//함수에 쓰이는 값은 복사본으로 들어감 call by value

int inc(int counter)
{
    counter++;
    return counter ;
}
