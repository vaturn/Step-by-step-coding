#include <stdio.h>

int main(){
  
  //입력 Input
  int A, B;
  scanf("%d %d", &A, &B);

  //출력 Output
  if(A > B) //If문은 조건(e.g. A>B)이 참이 되면 지정된 명령을 실행한다.
    printf(">"); //If function executes the specified command when the condition (e.g. A>B) is true.
  else if(A < B){ //이전의 조건에 거짓일 때만 다시 조건을 검사하고 싶다면 'else' 를 써야한다.
    printf("<"); //If you want to check the condition again only when the previous condition is false, use 'else'.
   } //If문은 조건이 참이면 다음 {} 안에 있는 모든 명령어를 실행한다.
     //If function executes all instructions in the following {} if the condition is true.
  else if(A == B) //If문은 중괄호가 없으면 조건이 참일 때 다음 한 줄만 실행하게 된다.
    printf("=="); //If function is without ' {} ', only the next line is executed when the condition becomes true.
}
