#include <stdio.h>
int main()
{
 int c=65;
 char l='A';
 for (l='A';l<='Z';++l){
 printf("%c : %d\n",l,c);
 c++;
 }
}
