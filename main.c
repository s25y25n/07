#include <stdio.h>
#include <stdlib.h>

int inc(int counter);
int main(int argc, char *argv[])
{
    int i = 10 ;
    printf("�Լ� ȣ�� �� i= : %d\n ", i);
    inc(i);
    //i = inc(i); �Լ� ���� �� ���� ��Ÿ���� ������  
    printf("�Լ� ȣ�� �� i = %d\n", i); 
    
  system("PAUSE");	
  return 0;
}
//�Լ��� ���̴� ���� ���纻���� �� call by value

int inc(int counter)
{
    counter++;
    return counter ;
}
