#include "ONAIR.h"

void gotoxy(int x, int y)

{
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void Renewer_chat(FILE* fp)
{
	for (int i = 19; i > 0; --i)
	{
		memset(str[i], ' ', 128);

		if (str[i] == NULL)
		{
			continue;
		}
		strcpy(str[i], str[i - 1]);
		gotoxy(132, 22 - i);
		printf("                                                                   ");
		gotoxy(132, 22 - i);
		printf("%s", str[i]);
	}
	fgets(str[0], sizeof(str[0]), fp);

	gotoxy(132, 22);
	printf("                                                              ");
	gotoxy(132, 22);
	printf("%s", str[0]);
}

int ONAIR_Day(int* i_Day, int* cnt1)
{
	if (*cnt1 == 0)
	{
		gotoxy(5, 1);
		printf("Day:%d", *i_Day);
		gotoxy(5, 47);
		printf("현재 시청자 수 : 0");
	}
	(*cnt1)++;
	return (*cnt1);
}

int ONAIR_Viewer_Loop(int* i_Inc_View, int* i_Dec_View, int* i_Now_View, int* i_All_View, int* i_Day)
{
	srand((unsigned)time(NULL));

	int diff = 100 * (*i_Day - 1);
	int V_Time = 5000 - diff;



	static int NewTime = 0;
	static int OldTime = 0;

	NewTime = clock();



	if (NewTime - OldTime < V_Time)
	{
		return 1;
	}
	OldTime = NewTime;
	*i_Inc_View += *i_Day * rand() % (4 * (*i_Day));
	*i_Now_View = *i_Inc_View - *i_Dec_View;
	*i_All_View += *i_Inc_View;
	*i_Dec_View += *i_Day * rand() % (2 * (*i_Day));
	if (*i_Now_View >= 0)
	{
		gotoxy(5, 47);
		printf("                      ");
		gotoxy(5, 47);
		printf("현재 시청자 수 : %d", *i_Now_View);
	}
	else
	{
		*i_Now_View = 0;
		return *i_Now_View;
	}
	return 1;
}

int ONAIR_Chat_Loop(int* i_Day, FILE* fp)
{
	int diff = 100 * (*i_Day - 1);
	int C_Time = 10000 - diff;
	static int NewTime = 0;
	static int OldTime = 0;

	NewTime = clock();

	if (NewTime - OldTime < C_Time)
	{
		return 1;
	}
	OldTime = NewTime;
	Renewer_chat(fp);

	return 0;
	/**cnt = Renewer_Chat(*cnt2, fp);
	(*cnt)++;*/
}

int ONAIR_Dona_Loop(int* i_Dona, int* i_Now_Dona, int* i_All_Dona, int* i_Day)
{
	srand(time(NULL));

	int diff = 100 * (*i_Day - 1);
	int D_Time = 40000 - diff;
	char str[256] = { 0 };
	char viewer[28][128] = { "몽", "memooo1989", "ㅇ_ㅇ7", "정말랑말랑", "발장", "하연♬피아노" "헤이즐럿Hi",
						 "최규인", "맹수", "콩토마토", "백묘사", "낙타닮은사람", "페피폐피", "빰바밤빠바",
						 "별의_목소리", "Autozz", "[HP]망냐뇽이", "확진자ㅠㅠㅠ", "Nudiustertians", "루기아짱", "namj9748",
						 "마늘껍데기", "edhu_the_king", "안씨92" "MarillinKarynh11", "후지필름", "짱", "감스트" };
	static int NewTime = 0;
	static int OldTime = 0;

	NewTime = clock();

	if (NewTime - OldTime < D_Time)
	{
		return 1;
	}
	OldTime = NewTime;
	*i_Dona = (rand() % (300 * (*i_Day))) * 100;
	*i_Now_Dona += *i_Dona;
	*i_All_Dona += *i_Dona;
	gotoxy(150, 1);
	printf("%s님이 %d원을 후원하셨습니다.\n", viewer[rand() % 28], *i_Dona);
	Sleep(3000);
	gotoxy(150, 1);
	printf("                                                  ");
}

int ONAIR_Image(int* cnt2, FILE* fp2)
{
	if (*cnt2 == 0)
	{
		fp2 = fopen("image.txt", "r");
		for (int i = 0; i < 25; i++)
		{
			char ASCII[30][128];
			gotoxy(150, 25 + i);
			fgets(ASCII[i], sizeof(ASCII[i]), fp2);
			printf("%s", ASCII[i]);
		}
	}
	else
	{
		return 1;
	}
	(*cnt2)++;
	return (*cnt2);
}