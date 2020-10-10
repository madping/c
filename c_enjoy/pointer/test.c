//데이터 타입 *포인터 변수명
//포인터 변수는 주소값을 저장 하므로
//unsigned int로 선언한 것과 같다

//아래의 변수들은 크기가 동일 하다

/*
void *v_ptr;
char *c_ptr;
int *i_ptr;
struct tm *t_ptr;
*/

//8비트 avr의 경우 2바이트 크기를 가진다
//단지 포인터가 가리키는 메모리의 크기와 모양이
//모두 다르게 보일뿐이다.
//메모리에 저장된 값은 전혀 바뀌지 않는
//상태에서 모양만 다르게 보인다는 것에 주의
//void형으로 포인터를 선언 하면 아무 모양이 없는것과 같음
//char로 선언하면 그 포인터가 가르키는 곳은 전부 char
//int도 마찬가지....
//마지막줄 구조체가 가리키는 주소의 메모리를 바라보면..

/*
struct tm { int tm_sec;  
			int tm_min;  
			int tm_hour;  
			int tm_mday;  
			int tm_mon;  
			int tm_year;  
			int tm_wday;  
			int tm_yday;  
			int tm_isdst; 
		  };
*/

#include <stdio.h>
#include <stdint.h>

//포인터 변수에 같은 메모리 주소를 할당
void *v_prt = (void *)0x10000;
char *c_ptr = (char *)0x10000;
int *i_prt = (int *)0x10000;
struct tm *t_ptr = (void *)0x10000;

// 다음과 같이 정의 하여도 된다.
/*
   void *v_ptr=(void *)0x10000;
   char *c_ptr=(char *)v_ptr;
   int *i_ptr=(int *)v_ptr;
   struct tm *t_ptr=(void *)v_ptr;
   */

int (*callback)(int, char *);
//callback 이라는 포인터 변수는 데이터가 있는
//메모리 주소를 가리키는 것이 아니고 함수의 주소를 저장
//그 함수의 모양은 return 값이 int형이고 int와 char *를 입력으로 받는 함수
int foo(int num, char *name)
{
        int i;
        for (i = 0; i < num; i++)
                printf(name);
        return i;
}

int main(void)
{
        callback = foo;
        callback(2, "han\n");

        return 0;
}
