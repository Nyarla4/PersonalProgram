#include<iostream>
using namespace std;
class Place
{
public:
	int x, y;
private:

};
int main()
{
	char a_;
	Place a;
	a.x = 0;a.y = 0;
	while (1)
	{
		cin >> a_;
		switch (a_)
		{
		case'w':a.y -= 1;
			break;
		case's':a.y += 1;
			break;
		case'a':a.x -= 1;
			break;
		case'd':a.x += 1;
			break;
		case'0':
			return 0;
		default:
			break;
		}
		if (a.x > 4)
		{
			a.x = 4;
		}
		else if (a.x < 0)
		{
			a.x = 0;
		}
		if (a.y > 4)
		{
			a.y = 4;
		}
		else if (a.y < 0)
		{
			a.y = 0;
		}
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 5;j++)
			{
				if (a.x == j&&a.y == i)
				{
					cout << "X";
				}
				else
				{
					cout << "O";
				}
			}
			cout << endl;
		}
		cout << "(" << a.x << "," << a.y << ")\n";
	}
}