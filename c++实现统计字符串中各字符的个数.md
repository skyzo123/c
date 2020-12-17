# c++实现统计字符串中各字符的个数

```c++

#include<iostream>
#include<string>
 
using namespace std;
 
void tongji(char*,int);
 
int main()
{
	char a[100];
	cout<<"请输入字符串:";
	gets_s(a);
	int n=strlen(a);
	cout<<"输出字符串:"<<endl;
	cout<<a<<endl;
	tongji(a,n);
	system("pause");
	return 0;
}
 
 
void tongji(char s[],int s1)
{
	int num=0,str=0,space=0,other=0;
	for(int i=0;i<s1;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			++str;
		else if(s[i]>='0'&&s[i]<='9')
			++num;
		else if(s[i]==' ')
			++space;
		else ++other;
	}
	cout<<"字母:"<<str<<endl;
	cout<<"数字:"<<num<<endl;
	cout<<"空格:"<<space<<endl;
	cout<<"其他字符:"<<other<<endl;
}
```

