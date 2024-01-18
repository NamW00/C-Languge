#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>	
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x, y };

	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

typedef struct Player
{
	int x;
	int y;
	const char* shape;

}Player;

void CreateMaze()
{
	// 0 : �� ���� (" ") -> but Ư�� ���ڰ� 2byte�̹Ƿ� 2�� �������Ѵ�.
	// 1 : �� (��)
	// 2 : Ż�ⱸ (��)

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1000100001");
	strcpy(maze[2], "1110001101");
	strcpy(maze[3], "1110101001");
	strcpy(maze[4], "1000101111");
	strcpy(maze[5], "1010100001");
	strcpy(maze[6], "1110111101");
	strcpy(maze[7], "1000001001");
	strcpy(maze[8], "1011101111");
	strcpy(maze[9], "1000100021");
	strcpy(maze[10], "1111111111");
}

void Render()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++) {
			switch (maze[i][j])
			{
			case '0':
				printf("  ");
				break;
			case '1':
				printf("��");
				break;
			case '2':
				printf("��");
				break;
			default:
				break;
			}
			/*if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("��");
			}
			else if  (maze[i][j] == '2')
			{
				printf("��");
			}*/
			//	printf("%c", maze[i][j]);		//�� �� maze�� ���ڰ� �ƴ� ���ڿ��̹Ƿ� %c�� �����
		}
		printf("\n");
	}

}

void Keyboard(char map[WIDTH][HEIGHT], Player* player)
{
	char key = 0;

	if (_kbhit()) //Ű���� �Է�Ȯ�� (true/false)
	{

		key = _getch();	// key �Է��� �޾��ִ� �Լ�

		system("cls");

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: if (maze[player->y - 1][player->x / 2] != '1') { player->y--; }
			   break;
		case LEFT: if (maze[player->y][player->x / 2 - 1] != '1') { player->x -= 2; }
				 break;
		case RIGHT: if (maze[player->y][player->x / 2 + 1] != '1') { player->x += 2; }
				  break;
		case DOWN: if (maze[player->y + 1][player->x / 2] != '1') { player->y++; }
				 break;
		}
	}
}

//typedef struct Student
//{
//	char name[10];
//}Student;

int	main()
{
#pragma region strcpy
	//Student student;

	//student.name;

	//// student.name = "KIM";  �ּҰ��� �ּҸ� �ִ� �� ��ü�� ���� �ȵǴ� ��

	////strcpy �Ű������� �ΰ��� ��
	//// ù��° �Ű����� : ������� ���� �迭�� �־��ݴϴ�.
	//// �ι�° �Ű����� : �����ų ���ڿ��� �־��ݴϴ�.
	//strcpy(student.name, "KIM");

	//printf("student.name�� �� : %s\n", student.name);

	//strcpy(student.name, "NAM");

	//printf("student.name�� �� : %s\n", student.name);

#pragma endregion
	//Player player = {2,1,"��"};

	//// 1. �� �����͸� �����մϴ�.
	//CreateMaze();

	//while (1)
	//{
	//	// 2. �� �����Ϳ� �ִ� ������ ���� ����մϴ�.
	//	Render();

	//	Keyboard(maze, &player);	//map[][]�� �ϳ��� �����Ͷ�� �ش�ȴ�. maze�� Keyboard �Լ��� char 

	//	GotoXY(player.x, player.y);
	//	printf("%s", player.shape);

	//	Sleep(100);
	//	system("cls");
	//}

	return 0;
}