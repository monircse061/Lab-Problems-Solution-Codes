#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[100];
    int ck,ln,l;
    while(scanf("%s",arr)!=EOF){
     ln=strlen(arr);
     l=ln/2;
     ln=ln-1;
     ck=1;
      for(int i=0;i<l;i++){
        if(arr[i]!=arr[ln-i]){
            ck=0;
            break;
        }
      }
      if(ck==0){
        printf("NOt palindrome\n");
      }
      else
        printf("Palindrome\n");
    }



 return 0;
}
