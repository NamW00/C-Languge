#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef int INT64;

typedef struct Vector2
{
	int x;
	int y;
}Vector2;
//일반 구조체에 typedef를 사용해 재정의 시킨다음 마지막에 바꿀 이름을 입력하면 
//위 구조체는 Vector2로 main 함수에서도 사용가능하다.

int main()
{
#pragma region 이차원 배열
	//// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	//int array2D[3][3] =
	//{
	//	{0,1,2},
	//	{3,4,5},
	//	{6,7,8}
	//};

	//// 2차원 배열은 행과 열로 구분되며 앞에 있는 배열은
	//// 열을 의미하고, 뒤에 있는 배열은 행을 의미한다
	//// 
	//// printf("array2D[0][0] = %d", array2D[0][0]);

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++) {
	//		printf(" array2D[%d][%d] = %d ", i, j, array2D[i][j]);
	//	}
	//	printf("\n");
	//}


	//// 2차원 배열 또한 연속적인 메모리 공간의 형태로
	//// 저장되며, 2차원 배열의 크기를 생략할 때 배열의 열의
	//// 크기만 생략할 수 있습니다.
#pragma endregion
#pragma region typedef
	//INT64 integer = 100;

	//Vector2 vector2;

	//vector2.x = 10;
	//vector2.y = 5;

	//Vector2 * structPtr = &vector2;	//구조체 자료형 * structPtr(8byte) = &해당하는 값;

	//structPtr->x = 99;
	//structPtr->y = 100;

	//printf("integer 변수의 값 : %d\n", integer);
	//printf("vector2.x 변수의 값 : %d\n", vector2.x);
	//printf("vector2.y 변수의 값 : %d\n", vector2.y);
#pragma endregion




	return 0;
}