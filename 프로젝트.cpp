//���� �� ���߱�
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i; // ���� ���� ���� ���� i�� �� ����
	int rand_num[5];// ���� �� 5���� ������ �迭
	int count = 0;// �� ���� �õ��� ���� ���߾������� �Ǻ�
	char real[10]; // ��ǻ�Ͱ� ������ ���ڰ� �´����� �Է�
	char ready[10]; // ������ ���� ���� 
	int orignal_num; // ��ǻ�Ͱ� ������ ���ڸ� �̹� 
	int level; // ������ ���̵� ����
	int flag = 0; // flag�� ���� 1�� �� ����

	srand((unsigned)time(0)); //���α׷����ٽõ����� �� ���� ���� �߻����� �ʰ� ���� �õ� (Seed)�� ����
	
		printf("���� ���߱� ���� : �����Ѵ�(yes), �����Ѵ�(no)\n");
		scanf("%s", &ready);
		if(!strcmp(ready,"yes"))
		{
			printf("������ �����մϴ�.\n");

		}
		else {
			printf("������ �����մϴ�.\n");
			return 0;
		}
		printf("���� ���: �ټ� �� �ȿ� ��ǻ�Ͱ� ����� ������ ���ڸ� ���߾�� ��ǻ���� �¸�, �׷��� ���ϸ� ������� �¸�\n");
		printf("���� �� �غ� �Ǽ̽��ϱ�? ('yes' or 'no')===> ");
		scanf("%s", &ready);
		printf("���� ���̵��� �������ּ���.\n");
		printf("<�ʱ�>: 0~50 ������ ���� �� ��ǻ�Ͱ� ����.(1: level 1)\n");
		printf("<�߱�>: 0~30 ������ ���� �� ��ǻ�Ͱ� ����.(2: level 2)\n");
		printf("<���>: 0~10 ������ ���� �� ��ǻ�Ͱ� ����.(3: level 3)\n");
		scanf("%d", &level);
		printf("level %d(��)�� �����ϼ̽��ϴ�. \n", level);

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
			printf("����� ������ ���ڴ� %d�Դϱ�? (yes , no) ==> ", rand_num[i]);
			scanf("%s", &real);
			if (!strcmp(real, "yes"))
			{
			printf("%d�� �õ��Ͽ� ���߾����ϴ�!\n\n",count);
			printf("��ǻ���� �¸�!\n");
			flag++;
			if (flag == 1)
			{
				break;
			}
			
			}
		}
	if(flag==0)
		{
			printf("����! ��ǻ�Ͱ� �����ϴ�.. ����� �����ߴ� ���ڴ� �����ΰ���?");
			scanf("%d", &orignal_num);
			for (i = 0; i < 5; i++)
			{
				if (rand_num[i] == orignal_num)
				{
					printf("����� �����ߴ� ���ڸ� �̹� ���߾����ϴ�. ===> ��ǻ���� �¸�!\n");
				}
			}
		}
	puts("");
	printf("�÷��� ���ּż� �����մϴ�. made by L.Y.S\n");
}
			
				
			
			
		
