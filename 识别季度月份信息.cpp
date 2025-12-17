#include<stdio.h>
int main(void)
{
	int month;
	printf("请输入一个月份（1-12）");
	scanf_s("%d", &month);

	printf("月份：%d月\n", month);

	switch (month)
	{
	case 12://千万记得字符常量是单引号，而整数常量不需要括起来
	case 1:
	case 2:
		printf("季节：冬季\n");
		printf("特点：寒冷，需要保暖");
		break;
	case 3:
	case 4:
	case 5:
		printf("季节：春季\n");
		printf("特点：温暖\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("季节：夏季\n");
		printf("特点：炎热\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("季节：秋季");
		printf("特点：丰收");
		break;

	default:
		printf("无效的月份，请重新输入");
		break;
	}
	


	return 0;

}