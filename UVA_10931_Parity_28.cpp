/*
Sample Input
1
2
10
21
0
Sample Output
The parity of 1 is 1 (mod 2).
The parity of 10 is 1 (mod 2).
The parity of 1010 is 2 (mod 2).
The parity of 10101 is 3 (mod 2).
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	
	int input;
	while(cin>>input) //값 입력; 
	{
		vector<int>save; //vector로 1,0저장; 
		int size=0,count=0; //size는 출력용, count는 1몇개 나왔는지; 
		while(input>0)
		{
			size++;
			if(input%2==1)
			{
				save.push_back(1); //1이면 입력; 
				count++;
			}
			else if(input%2==0)
			{
				save.push_back(0);
			}
			input/=2; //나누기2 
		}
		cout<<"The parity of ";
		for(int j=size-1;j>=0;j--) //거꾸로 출력해야함; 
		{
			cout<<save[j];
		}
		cout<<" is "<<count<<" (mod 2)."<<endl;
	}

return 0;
}

