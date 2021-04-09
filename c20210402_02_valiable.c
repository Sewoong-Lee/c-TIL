#include <stdio.h>

int main() {
	//// 정수형 변수명을 선언
	//int a;
	//// 이후 a에 10을 넣어 초기화(처음 데이터를 넣을때)
	//a = 10;
	//printf("%d\n",a);

	//// 실수형 변수명 선언
	//float f; //4byte
	//double d; //8byte
	//f = 3.14156483515; //초기화
	//d = 3.14156483515; //초기화
	//printf("%.100f\n",f);
	//printf("%.100f\n", d);

	//문자형
	/// char c = '@'; 선언과 동시에 초기화 가능
	//char c;
	//c = '@';
	//printf("문자는 %c  %d\n",c,c);

	//데이터형의 바이트수 계산
	//int a = 100;
	//printf("정수형 : %d\n",sizeof(a));
	//float f = 3.14;
	//double d = 3.14;
	//printf("실수형 :f는 %d d는 %d\n", sizeof(f), sizeof(d));
	//char c = 'a';
	//printf("%d", sizeof(c));

	//문자열
	//문자열이하는 형은 없음
	//배열의 이름은 주소를 가지고 있다. :상수
	//char c[6]="hello";  //글자 마지막에 (\0)nul문자가 들어가므로 하나의 공간을 더 만들어야댐(글자는 5개지만 공간은 6필요)
	//배열의 크기는 문자열의 크기 +1
	//선언과 동시에 초기화 시에는 배열의 크기 생략 가능
	//char c[] = "hello";
	//printf("%s\n", c);

	//char c[6];
	//c = "hello"; //얘처럼은 안댐 아래의 c는 상수라서 안됨

	//char* p;
	//p = "hello"; // 이렇게 만들면 문장이 p안에 들어감
	//printf("%s",p);

	//char c[] = "hello";*/
	//printf("5번 %c",c[2]) //인덱스를 이용하여 글자 하나 출력
	//printf("%s  %d\n", c,sizeof(c));


	return 0;
}