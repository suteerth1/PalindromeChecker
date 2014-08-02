#include<iostream>
using namespace std;
string Reverse(string);
string norm(string);
int main()
	{
	cout << "Begin program:"<< endl;
	string in = "T";
	cin >> in;
	cout<< endl << Reverse(norm(in)) <<endl;
	return 0;
	}

string Reverse(string s)
	{
	if(s.length()==0||s.length()==1)
		return "true";

	else if(s[0]==s[s.length()-1])
		return Reverse(s.substr(1,s.length()-2));

	else
		return "false";
	}
string norm(string s)
	{
	int i =0;
	while(s[i]=toupper(s[i]) , i++<s.length());
		;
	return s;
	}
