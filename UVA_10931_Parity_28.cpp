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
	while(cin>>input) //�� �Է�; 
	{
		vector<int>save; //vector�� 1,0����; 
		int size=0,count=0; //size�� ��¿�, count�� 1� ���Դ���; 
		while(input>0)
		{
			size++;
			if(input%2==1)
			{
				save.push_back(1); //1�̸� �Է�; 
				count++;
			}
			else if(input%2==0)
			{
				save.push_back(0);
			}
			input/=2; //������2 
		}
		cout<<"The parity of ";
		for(int j=size-1;j>=0;j--) //�Ųٷ� ����ؾ���; 
		{
			cout<<save[j];
		}
		cout<<" is "<<count<<" (mod 2)."<<endl;
	}

return 0;
}

