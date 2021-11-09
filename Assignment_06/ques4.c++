#include<bits/stdc++.h>
using namespace std;
string FirstAndLast(string str)
{
	string ch = str;
	for (int i = 0; i < ch.length(); i++)
	{
		int k = i;
		while (i < ch.length() && ch[i] != ' ')
			i++;
		ch[k] = (char)(ch[k] >= 'a' && ch[k] <= 'z' ? ((int)ch[k] - 32) : (int)ch[k]);
		ch[i - 1] = (char)(ch[i - 1] >= 'a' && ch[i - 1] <= 'z' ? ((int)ch[i - 1] - 32) : (int)ch[i - 1]);
	}
	return ch;
}
int main()
{
	string str = "kiit university";
	cout << str << "\n";
	cout << FirstAndLast(str);
}