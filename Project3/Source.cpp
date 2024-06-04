/*
	3 Жучки: що неправильно у наступній програмі?
*/



int main()
{
	unsigned short SomeArray[5][4];//треба поміняти місцями 5 і 4
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			SomeArray[i][j] = i + j;

}
