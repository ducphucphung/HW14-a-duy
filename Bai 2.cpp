#include <set>
using namespace std;
struct unique;
{
	bool cmp() (int x, int y)
	{
		return x>y;
	}
};
int main()
{
	set<int> myset1;
	set<int,unique> myset2;
	int arr[]={1, 3, 5, 4, -1, 1};
	int n=5;
	for(int i=0; i<n; i++)
	{
		myset1.insert(a[i]);
	}	
	for (set<unique>::iterator it=myset2.begin(); it!=myset2.end(); it++)
	{
		cout<<"mang duyet theo chieu xuoi"<<(*it);
	}	
	for (set<unique>::iterator rit=myset2.begin(); rit!=myset2.end(); rit++)
	{
		cout<<"mang duyet theo chieu nguoc"<<(*rit);
	}	
	for(int i=0; i<n; i++)
	{
		myset2.insert(a[i]);
	}
	for (set<unique>::iterator it=myset2.begin(); it!=myset2.end(); it++)
	{
		cout<<"mang dinh nghia lai"<<(*it);
	}
	int k;
	cout<<"Nhap so k:"
	cin>>k;
	if(myset1.find(k)!=myset1.end())
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"NOPE";
	}
	
	
	
	
}
