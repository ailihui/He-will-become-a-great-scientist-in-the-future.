#include <stdio.h>
int main() {
	int age ;
	printf("请输入你的年龄");
	scanf_s("%d", &age);
	int result;
	// 判断年龄是否大于18
	result = (age > 18);
	printf("年龄：%d\n", age);
	printf("大于18岁的判断结果：%d\n", result); // 输出1（真）
	
	result = (age > 18);
	printf("年龄：%d\n", age);
	printf("大于18岁的判断结果：%d\n", result); // 输出0（假）
	return 0;
}