/*
	3 �����: �� ����������� � �������� �������?
*/



int main()
{
	unsigned short SomeArray[5][4];//����� ������� ������ 5 � 4
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			SomeArray[i][j] = i + j;

}