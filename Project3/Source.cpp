/*
	3 ∆учки: що неправильно у наступн≥й програм≥?
*/



int main()
{
	unsigned short SomeArray[5][4];//треба пом≥н€ти м≥сц€ми 5 ≥ 4
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			SomeArray[i][j] = i + j;

}