#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <malloc.h>
#define LESSONS 3 // p140
int print(void)
{
printf("------------------------------------------------------------------------------------------------------------------------\n");
printf("-----------------------------------------hahahahahahahaahhahahahahaahah-------------------------------------------------\n");
printf("------------------------------------------------------------------------------------------------------------------------\n");
return 0;
}


void BMI(void)
{
float hight;
int weight;
double BMI;

printf("키를 입력하세요.\n");
scanf_s("%f", &hight);
printf("몸무계를 입력하세요.\n");
scanf_s("%d", &weight);
BMI = weight / (hight * hight);
printf("\n당신의 비만지수는 %f 입니다. \n", BMI);

if (BMI < 18.5)
{
printf("당신은 체중미달입니다.\n");
}
else if (BMI < 23.0)
{
printf("당신은 표준체중입니다.\n");
}
else if (BMI < 25.0)
{
printf("당신은 과체중입니다.\n");
}
else if (BMI < 30.0)
{
printf("당신은 비만입니다 입니다.\n");
}
}

void fnVal()
{
int val;

int max;
int val1 = 3, val2 = 2;

printf("max value = %d\n", val1 > val2 ? val1 : val2);

if (val1 > val2)
{
printf("%d\n", val1);

}
else
{
printf("%d\n", val2);
}

val = 5;
val = val++ + ++val;
printf("%d\n", val);
val = 5;
printf("전위형 증가: %d\n", ++val);     // 6가 된 후 출력
val = 1;
printf("후위형 증가: %d\n", val++);    // 출력 후 2가 됨

val = 13;
printf("전위형 감소: %d\n", --val);    // 0이 된 후 출력
val = 1;
printf("후위형 감소: %d\n", val--);    // 출력 후 0이 됨

}

int fnVal2()
{
unsigned char fourBitVall = 0x05, fourBitVa12 = 0x07;
unsigned char eightBitVal;
   

eightBitVal = fourBitVall << 4;
eightBitVal |= fourBitVa12;


printf("%x, %x -> %x\n", fourBitVall, fourBitVa12, eightBitVal);
    return 0;

}



void datatype(void)
{
unsigned long one = 2500000000;
unsigned long two = 2500000000;

unsigned long three = (one + two);
typedef unsigned int UNT;
UNT ui;
ui = three;
printf("%u", ui);
}


void cost(void)
{
int year = 365;
int age;
    printf("나이를 입력하세요.:");
scanf_s("%d", &age);
int val = (year * age) * 3 * 3000;
printf("지금까지 먹은 밥값은 = %d", val);
}


void CandF(void)
{
int F1, C1;
for (C1 = 10; C1 <= 10; )
{
F1 = (9 * C1 / 5) + 32;
printf("섭씨 %3d도: 화씨 %3d도\n", C1, F1);
++C1;
}
}

void gugudan(void)
{
int a, i;
for (a = 2; a <= 9; a++)
{
for (i = 1; i <= 9; i++)
{
printf("%d * %d = %d\n", a, i, a * i);
}
}

}
void gugudancustom1(void)
{
int a, i, e;
printf("시작할 단을 입력하세요.\n최소 1단까지:");
scanf_s("%d", &a);

do {
printf("마지막 단을 입력하세요.\n최대 9단까지:");
scanf_s("%d", &e);
  } while (e > 9 || e < a);

for (; a <= e; a++)
{
for (i = 1; i <= 9; i++)
{
printf("[%d x %d] = %d\n", a, i, a * i);
}
}
}

void gugudancustom2(void)
{
int a, i;

for (i = 1;i<= 9; i++)
{
for (a = 2; a <= 5; a++)
{
printf("%dx%d=%2d ", a, i, a * i);
}
printf("\n");
}
printf("---------------------------\n");
for (i = 1; i <= 9; i++)
{
for (a = 6; a <= 9; a++)
{
printf("%dx%d=%2d ", a, i, a * i);
}
printf("\n");
}
}

void gugudancustom3(void)
{
int a, i, k=1;

for (k = 1; k <= 6; k+=4)
{
for (i = 1; i <= 9; i++)
{
for (a = 1; a < 5; a++)
{
printf("%dx%d=%2d ", a+k, i, (a+k) * i);
}
printf("\n");
}
printf("\n");
}
}


void printstar01(void)
{
int row, col;
char str[2] = "*";

for (row = 0; row < 10; row++)
{
for (col = 0; col <= row; col++)
{
printf("%c", str[0]);
}
printf("\n");
}

}


void printstar02(void)
{
int row, col;
char str = '*';

for (row = 0; row <= 10; row++)
{
for (col = 10-row; col >=0; col--)
{
printf("%c", str);
}
printf("\n");
}

}

void printstar03(void)
{
int row, col;
char str[2] = "*";

int sw = 1;

if (sw != 0)
{
for (row = 1; row <= 10; row++)
{
for (col = 0; col <= 10-row; col++)
{
printf(" ");
}
for (col = 0; col <= row; col++)
{
printf("%c", str[0]);
}
printf("\n");
}
}
{
for (row = 10; row >= 0; row--)
{
for (col = 0; col <= row; col++)
{
printf(" ");
}
for (col = row; col <= 10; col++)
{
printf("%c", str[0]);
}
printf("\n");
}
}
}

void printstar04(void)
{
int row, col;
char str[2] = "*";

for (row = 10; row >= 0; row--)
{
for (col = 0; col <= row; col++)
{
printf(" ");
}
for (col = row; col <= 10; col++)
{
printf("%c", str[0]);
}
printf("\n");
}

}
void  scorecirculator(void)
{
int students, s, sum = 0;
// int *score = NULL;
char str[100] = { NULL, };
int score[10];
printf("성적 처리할 학생 수를 입력하세요 (최대10명까지): ");
// scanf_s("&d", &students);
gets_s(str);
students = atoi(str);


// score = (int*)malloc(sizeof(int) * students);
if (students >= 10) students = 10;



printf("학생의 성적을 입력하세요.\n");

for (s = 0; s < students; s++)
{
fflush(stdin);
printf("%d번 학생: ", s + 1);


gets_s(str);
score[s] = atoi(str);
printf("\n");
}

printf("----------------------\n");
for (s = 0; s < students; s++)
{
sum += score[s];
printf("%d번 학생: %3d\n", s + 1, score[s]);
}
printf("----------------------\n");
printf("총점: %3d\n", sum);
printf("평균: %3.2f 점\n", (double)sum / students);

// free(score);

}

void p140(void)
{
int students;    // 학생 수
int sum = 0;     // 합계
int 1, s;        // for루프를 위한 임시변수
int scoer[][LESSONS] = {
{85, 90, 95},          //1번째 학생의 점수
{70, 82, 60},          //2번째 학생의 점수
{92, 82, 60},          //3번째 학생의 점수
{94, 75, 79},          //4번째 학생의 점수
{95, 68, 78},          //5번째 학생의 점수
{82, 79, 88},          //6번째 학생의 점수
{68, 80, 95},          //7번째 학생의 점수
{78, 84, 92} };

students = sizeof(scoer) / sizeof(scoer[0]);  //학생 수 계산
for (1 = 0; 1 < LESSONS; 1++)                 //과목 수만큼 루프
{
sum = 0;
for (s = 0; s < students; s++)            //학생 수만큼 루프
{
sum += scoer[s][1];                   //과목별 총합 계산
}
printf("[%d] Total: %d, ", 1, sum);
printf("Average: %0.2f\n", (double)sum / students);
}

}

int main(void)
{

    p140();
   
printf("이용해 주셔서 감사합니다.\n이 창을 닫으려면 아무 키나 누르세요...\n");
_getch();
return 0;
}
