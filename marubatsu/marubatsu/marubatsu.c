#include <stdio.h>

int masu[3][3] = {2};


　//ボード初期化
　//ターン判定
　//空きマス判定
　//ボード表示
　//入力待ち
　//入力されたマスを埋める
　//ひっくり返るかの判定
　//全部埋まったかの判定
　//埋まったらゲーム結果の表示
　//埋まらなかったらターン判定に戻る

void turn_h(int*);
void hyouji(void);
void hyouji_h(int, int, int*);
void aki_h(void);

 void main(void)
{
	int turn = 1, aki = 9;

	printf("～　○×ゲーム　～\n\n");
	while (aki > 0)
	{
		turn_h(&turn);
		hyouji();
		aki_h();
		aki =- 1;
	}

}
void turn_h(int* turn)
{
	*turn = *turn ^ 1;
	if (turn == 0)
	{
		printf("○の番です\n");
	}
	else
	{
		printf("×の番です\n");
	}
}

void hyouji(void)
{
	int i, j, cnt = 0;
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			hyouji_h(i, j, &cnt);
		}
		printf("\n");
	}

}

void hyouji_h(int i, int j, int* cnt)
{
	if (masu[i][j] == 0)
	{
		printf("○");
	}
	else if (masu[i][j] == 1)
	{
		printf("×");
	}
	else
	{
		switch (*cnt)
		{
		case 0:
			printf("①");
			break;
		case 1:
			printf("②");
			break;
		case 2:
			printf("③");
			break;
		case 3:
			printf("④");
			break;
		case 4:
			printf("⑤");
			break;
		case 5:
			printf("⑥");
			break;
		case 6:
			printf("⑦");
			break;
		case 7:
			printf("⑧");
			break;
		case 8:
			printf("⑨");
		}
	}
}

void aki_h(void)
{
	
}