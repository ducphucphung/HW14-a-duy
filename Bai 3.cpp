#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int arr={2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2};
	int k;
	vector <int> vecto(100);
	set <int> set1(100);
	cout<<"Nhap so luong sushi:"<<endl;
	cin>>k;
	for (int i=0; i<k; i++)
	{
		int count;
		if (a[i]==a[i+1])
		{
			count ++;
		}
		else
		{
			for(int j=0; j<k; j++)
			{
				vecto[j].push_back(count)
			}
		}
	}
	for (int i=0; i<k; i++)
	{
		int poss;
		if(vecto[i]>vecto[i+1])
		{
			poss==vecto[i+1];
			set1.insert(poss);
		}
		else
		{
			poss==vecto[i];
			set1.insert(poss);
		}
	}
	cout<<"So thoa man:"<<set1[-1];
	
}
