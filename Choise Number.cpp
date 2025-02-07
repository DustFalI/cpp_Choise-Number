#include <iostream>
#include <vector>
using namespace std;
int n,k,arr[25],account=0;
vector<int> num;
bool judge(int sum)
{
	for(int i=sum-1;i>1;i--)
	{
		if(sum % i == 0)
		{
			return false;
		}
	}
	return true;
}
void fuc(int start,int depth,int sum)
{
	if(depth == k)
	{
		if(judge(sum))
		{
			account++;
		}
		return;
	}
	for(int i=start;i<n;i++)
	{
		fuc(i + 1,depth + 1,sum + arr[i]);
	}
	num.pop_back();
	return;
}

int main()
{
	cin>>n>>k;
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	fuc(0,0,0);
	cout<<account;
	return 0;
}
