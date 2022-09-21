include <stdio.h>
#include<string.h>
int main() {
 char str[100];
 int freq[122]={0},len,i;
 scanf("%s",str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
     freq[str[i]]++;
 }
 for(i=0;i<122;i++)
   {
if(freq[i]>0){
     printf("%c:%d\n",i,freq[i]);
 }}
  return 0;
}
