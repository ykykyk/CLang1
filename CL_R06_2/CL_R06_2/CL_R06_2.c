/* �쐬�ҁF1T3(11) �ؑ��D�� */
/* �ۑ薼�F�ۑ�06_2 */

#include <stdio.h>

double calcBMI(double, double);

void main(void)
{
	double height, weight, BMI;
	printf("�g������͂��Ă��������F");
	scanf("%lf", &height);
	printf("�̏d����͂��Ă��������F");
	scanf(" %lf", &weight);
	BMI = calcBMI(height, weight);
	if (BMI < 18.5)
	{
		printf("���茋��\n%fcm�A%fkg �� �₹�̌^\n", height, weight);
	}
	else if(BMI < 25.0) 
	{
		printf("���茋��\n%fcm�A%fkg �� �W���̌^\n", height, weight);
	}
	else
	{
		printf("���茋��\n%fcm�A%fkg �� �얞�̌^\n", height, weight);
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