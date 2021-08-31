//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct point
//{
//	int x;
//	int y;
//	point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//};
//
//void judgeGo(vector<vector<int>>& test, int x, int y)
//{
//	queue<point> temp;
//	temp.push(point(x, y));
//	int xMax = test.size() - 1;
//	int yMax = test[0].size() - 1;
//	while (!temp.empty())
//	{
//		point k = temp.front();
//		if (k.y - 1 >= 0 && test[k.x][k.y - 1])
//		{
//			temp.push(point(k.x , k.y - 1));
//		}
//		if (k.y + 1 <= yMax && test[k.x][k.y + 1])
//		{
//			temp.push(point(k.x, k.y + 1));
//		}
//		if (k.x + 1 <= xMax && test[k.x + 1][k.y])
//		{
//			temp.push(point(k.x + 1, k.y));
//		}
//		if (k.x - 1 >= 0 && test[k.x - 1][k.y])
//		{
//			temp.push(point(k.x - 1, k.y));
//		}
//		test[k.x][k.y] = 0;
//		temp.pop();
//	}
//}
//
//int main()
//{
//	int x;
//	int y;
//	int result = 0;
//	vector<vector<int>> test;
//	cin >> x;
//	cin >> y;
//	for (int i = 0; i < x; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j < y; j++)
//		{
//			int tempp;
//			cin >> tempp;
//			temp.push_back(tempp);
//		}
//		test.push_back(temp);
//	}
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (test[i][j] == 1)
//			{
//				judgeGo(test, i, j);
//				result += 1;
//			}
//		}
//	}
//	cout << result;
//}


#include <iostream>
using namespace std;
int main()
{
	int xMin1 = 100000;
	int xMax1 = -100000;
	int yMin1 = 100000;
	int yMax1 = -100000;
	int xMin2 = 100000;
	int xMax2 = -100000;
	int yMin2 = 100000;
	int yMax2 = -100000;
	for (int i = 0; i < 4; i++)
	{
		int tempx;
		int tempy;
		cin >> tempx;
		cin >> tempy;
		if (tempx < xMin1)
		{
			xMin1 = tempx;
		}
		if (tempx > xMax1)
		{
			xMax1 = tempx;
		}
		if (tempy < yMin1)
		{
			yMin1 = tempy;
		}
		if (tempy > yMax1)
		{
			yMax1 = tempy;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		int tempx;
		int tempy;
		cin >> tempx;
		cin >> tempy;
		if (tempx < xMin2)
		{
			xMin2 = tempx;
		}
		if (tempx > xMax2)
		{
			xMax2 = tempx;
		}
		if (tempy < yMin2)
		{
			yMin2 = tempy;
		}
		if (tempy > yMax2)
		{
			yMax2 = tempy;
		}
	}

}