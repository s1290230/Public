#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,head=0,tail=0,num;
  
  //名前を聞くパート
  char name[10];
  printf("Who are you?\n> ");
  scanf("%s",&name);
  printf("Hello, %s\n",name);

  //コイントスのパート
  printf("Tossing a coin...\n");
  
  for(i=0;i<3;i++){
    num=rand()%2;
    if(num==0){
      printf("Round %d: Heads\n",i+1);
      head++;
    }
    else{
      printf("Round %d: Tails\n",i+1);
      tail++;
    }
  }
  printf("Heads: %d, Tails: %d\n",head,tail);

  //勝敗
  if(head>tail) printf("You won\n");
  else printf("You lost\n");
  return 0;
}
