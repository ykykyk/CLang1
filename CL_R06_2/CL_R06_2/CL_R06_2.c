/* 作成者：1T3(11) 木村優里 */
/* 課題名：課題06_2 */

#include <stdio.h>

double calcBMI(double, double);

void main(void)
{
	double height, weight, BMI;
	printf("身長を入力してください：");
	scanf("%lf", &height);
	printf("体重を入力してください：");
	scanf(" %lf", &weight);
	BMI = calcBMI(height, weight);
	if (BMI < 18.5)
	{
		printf("測定結果\n%fcm、%fkg → やせ体型\n", height, weight);
	}
	else if(BMI < 25.0) 
	{
		printf("測定結果\n%fcm、%fkg → 標準体型\n", height, weight);
	}
	else
	{
		printf("測定結果\n%fcm、%fkg → 肥満体型\n", height, weight);
	}
}

double calcBMI(double height, double weight)
{
	double BMI;
	BMI = height / 100;
	BMI *= BMI;
	BMI = weight / BMI;
	return BMI;
}