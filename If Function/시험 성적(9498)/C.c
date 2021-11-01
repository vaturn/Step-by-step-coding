#include <stdio.h>

char AnotherWay(int score);

int main()
{
    int score; // 0 <= grade <= 100
    scanf("%d", &score);
    if(score >= 90)
        printf("A");
    else if(score >= 80)
        printf("B");
    else if(score >= 70)
        printf("C");
    else if(score >= 60)
        printf("D");
    else
        printf("F");
        
    //printf("%c",AnotherWay(score));
    
    return 0;
}

char AnotherWay(int score){  // 다른 방식으로 보기에 단순하게 코드를 구현할 수 있다.
    int temp = score / 10;   // Code can be simply implemented in other ways.
    if(temp >= 9)
        return 'A';
    else if(temp >= 8)
        return 'B';
    else if(temp >= 7)
        return 'C';
    else if(temp >= 6)
        return 'D';
    else
        return 'F';
}
