//랜덤 값 맞추기
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i; // 랜덤 값을 돌릴 포문 i에 들어갈 변수
	int rand_num[5];// 랜덤 값 5개를 생성할 배열
	int count = 0;// 몇 번의 시도를 통해 맞추었는지를 판별
	char real[10]; // 컴퓨터가 예상한 숫자가 맞는지를 입력
	char ready[10]; // 게임의 시작 여부 
	int orignal_num; // 컴퓨터가 예측한 숫자를 이미 
	int level; // 게임의 난이도 조절
	int flag = 0; // flag의 값이 1일 때 종료

	srand((unsigned)time(0)); //프로그램을다시동작할 때 같은 값이 발생하지 않게 랜덤 시드 (Seed)값 설정
	
		printf("숫자 맞추기 게임 : 시작한다(yes), 종료한다(no)\n");
		scanf("%s", &ready);
		if(!strcmp(ready,"yes"))
		{
			printf("게임을 시작합니다.\n");

		}
		else {
			printf("게임을 종료합니다.\n");
			return 0;
		}
		printf("게임 방법: 다섯 번 안에 컴퓨터가 당신이 생각한 숫자를 맞추어내면 컴퓨터의 승리, 그렇지 못하면 사용자의 승리\n");
		printf("시작 할 준비가 되셨습니까? ('yes' or 'no')===> ");
		scanf("%s", &ready);
		printf("게임 난이도를 설정해주세요.\n");
		printf("<초급>: 0~50 까지의 숫자 중 컴퓨터가 맞춤.(1: level 1)\n");
		printf("<중급>: 0~30 까지의 숫자 중 컴퓨터가 맞춤.(2: level 2)\n");
		printf("<고급>: 0~10 까지의 숫자 중 컴퓨터가 맞춤.(3: level 3)\n");
		scanf("%d", &level);
		printf("level %d(을)를 선택하셨습니다. \n", level);

		for (i = 0; i < 5; i++) 
		{
			if (level == 1)
			{
				rand_num[i] = rand() % 50;
			}
			else if (level == 2)
			{
				rand_num[i] = rand() % 30;
			}
			else if (level == 3)
			{
				rand_num[i] = rand() % 10;
			}
		
			count++;
			printf("당신이 생각한 숫자는 %d입니까? (yes , no) ==> ", rand_num[i]);
			scanf("%s", &real);
			if (!strcmp(real, "yes"))
			{
			printf("%d번 시도하여 맞추었습니다!\n\n",count);
			printf("컴퓨터의 승리!\n");
			flag++;
			if (flag == 1)
			{
				break;
			}
			
			}
		}
	if(flag==0)
		{
			printf("으악! 컴퓨터가 졌습니다.. 당신이 생각했던 숫자는 무엇인가요?");
			scanf("%d", &orignal_num);
			for (i = 0; i < 5; i++)
			{
				if (rand_num[i] == orignal_num)
				{
					printf("당신이 생각했던 숫자를 이미 맞추었습니다. ===> 컴퓨터의 승리!\n");
				}
			}
		}
	puts("");
	printf("플레이 해주셔서 감사합니다. made by L.Y.S\n");
}
			
				
			
			
		
