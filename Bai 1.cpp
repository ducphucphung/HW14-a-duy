#include <iostream>
#include <map>
using namespace std;
struct cmp
{
	bool principle() (int x, int y)
	{
		return x>y;
	}
};

int main()
{
	map <int, int> mymap;
	int arr[]={1, 3, 5, 4, -1, 1};
	int n=5;
	//cach 1:
	for (int i=0; i<n; i++) 
	{
		mymap.insert(make_pair(arr[i],0));
	}
	for(map<int, int>:: iterator it=mymap.begin(); it!=mymap.end(); it++)
	{
	    cout<<"Mang nhap theo cach 1:"<<(*it).first<<" "<<(*it).second <<endl;
	}
	cout<<endl;
	/*
	cach 2:
	dem so phan tu lap lai
	*/
	
	map <int, int> mymap2;
	for (int i=0; i<n; i++)
	{
		mymap2[arr[i]]++;
	}
	for(map<int, int>:: iterator it=mymap.begin(); it!=mymap.end(); it++)
	{
	    cout<<"Mang nhap theo cach 2:"<<(*it).first<<" "<<(*it).second <<endl;
	}
	cout<<endl;	
	//sap xep giam dan
	sort(mymap.begin(), myarray.end(), principle);
	cout<<"\n sap xep giam dan\n"
	for(map<int, int>:: iterator it=mymap.begin(); it!=mymap.end(); it++)
	{
	    cout<<(*it).first<<" "<<(*it).second <<endl;
	}
	
	//duyet theo chieu xuoi
	for(map<int,int>::iterator it=mymap.begin(); it!=end(); it++)
	{
		cout<<"Duyet xuoi"<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<endl
	//duyet theo chieu nguoc
	for(map<int,int>::iterator rit=mymap.begin(); rit!=mymap.end(); rit++)
	{
		cout<<"Duyet nguoc"<<(*rit).first()<<" "<<(*rit).second()<<endl;
	}
	cout<<endl;
	//tim so k
	int k;
	cout<<"nhap so k:"<<endl;
	cin<<k;
	if (mymap.find(k)!=mymap.end())
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
