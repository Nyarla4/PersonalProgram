#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class EBox
{
public:
	int Max;
	int P;
	int N;
};
void Laetitia(char a)
{
	if (a == 'N')
	{
		cout << "Little Witch Monster" << endl;
	}
}
int Job(int M, int p)
{
	int E_Box = 0;
	for (int i = 0;i < M;i++)
	{
		int Result = rand() % 100 + 1;
		if (Result <= p)
			E_Box++;
	}
	return E_Box;
}
char Result_Laeti(int E)
{
	if (E >= 11)
		return 'G';
	else if (E >= 7)
		return 'N';
	else
		return 'B';
}
int main()
{
	srand((unsigned int)time(NULL));
	EBox Laeti;
	Laeti.Max = 16;Laeti.P = 0;Laeti.N = 0;
	int job = 0;
	while (1)
	{
		char Result = 0;
		int E_box = 0;
		cout << endl << "�� �۾��� �����Ͻÿ�" << endl << "1.����\n2.����\n3.����\n4.���" << endl;
		cin >> job;
		switch (job)
		{
		case 1:
			E_box = Job(Laeti.Max, 50);
			Result = Result_Laeti(E_box);
			break;
		case 2:
			E_box = Job(Laeti.Max, 50);
			Result = Result_Laeti(E_box);
			break;
		case 3:
			E_box = Job(Laeti.Max, 75);
			Result = Result_Laeti(E_box);
			break;
		case 4:
			E_box = Job(Laeti.Max, 10);
			Result = Result_Laeti(E_box);
			break;
		case 0:
			return 0;
		default:
			break;
		}
		cout << "��� : ";
		switch (Result)
		{
		case 'G':
			cout << "����" << endl;
			break;
		case 'N':
			cout << "����" << endl;
			break;
		case 'B':
			cout << "����" << endl;
			break;
		default:
			break;
		}
		cout << "PE Box : " << E_box << endl;
		Laetitia(Result);

	}
	return 0;
}