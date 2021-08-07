#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void show(const int count[][2],const int& head)
{
				int i;
				cout << "N" << "\t" << "count" << endl;
				for (i = head; i >= 0; i--)
				{
								cout << count[i][0] << "\t" << count[i][1];

								cout << endl;
				}
				return;
}
int seperate(int count[][2],const vector<int> num)
{
				int temp,i,head=0;
				temp = num[0];
				count[0][0] = temp;
				count[0][1]++;
				for (i = 1; i < num.size(); i++)
				{
								if (num[i] != temp)
								{
												temp = num[i];
												head++;
												count[head][0] = temp;
								}
								count[head][1]++;
				}
				//cout << head << endl;
				return head;
}
int main()
{
				vector<int> num;
				int input,head=0;
				int count[100][2] = { 0 };
				while (cin >> input)
				{
								num.push_back(input);
				}
				sort(num.begin(), num.end());
				head = seperate(count, num);
				show(count, head);
}