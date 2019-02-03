#include <stdio.h>
int Astrlen(char *a){
  int x = 0;
  int l = 0;
  while (a[x] != '\0'){
    l++;
    x++;
  }
  return l;
}
int Astrcmp(char *s1, char *s2){
  int x = 0;
  int y = 0;
  while(s1[x] == s2[y]){
    x ++;
    y ++;
    if (Astrlen(s1) == x){
        if (Astrlen(s2) == y){
          return 0;
        }
        else{
          return -1;
        }
    }
    if (Astrlen(s2) == y){
      return 1;
      }
    }
  if(s1[x] > s2[y]){
    return 1
  }
  if s1[x] < s2[y]){
    return -1
  }
}

int main(){
  char same1[20] = hello;
  char same2[20] = hello;
  char larger1[20] = zap;
  char larger2[20] = yip;
  char smaller1[20] = asdf;
  char smaller2[20] = asfg;
  printf("same %d\n", Astrcmp(same1,same2));
  printf("same %d\n", Astrcmp(larger1,larger2));
  printf("same %d\n", Astrcmp(smaller1,smaller2));

}
