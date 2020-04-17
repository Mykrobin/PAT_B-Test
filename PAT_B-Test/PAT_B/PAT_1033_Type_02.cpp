#include<iostream>
#include<string>
using namespace std;

bool isCharacter(char ch){
	if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
		return true;
	else return false;
}

char upper(char ch){
	if (ch >= 'a'&&ch <= 'z')
		return ch - 32;
	else return ch;
}

bool contain(string str){
	int temp = str.find("+");
	if (temp != -1)
		return 1;
	else return 0;
}

int main(){
	string str1, str2;
	string re = "";
	bool flag = false;
	getline(cin, str1);
	getline(cin, str2);
	if (str1 == "")
		cout << str2 << endl;
	else{
		for (int i = 0; i < str2.length(); i++){
			if (str2[i] >= 'A'&&str2[i] <= 'Z'){
				if (!contain(str1) && str1.find(str2[i]) == -1){
					re += str2[i];
					flag = true;
				}
			}
			else{
				if (str1.find(upper(str2[i])) == -1){
					re += str2[i];
					if (str2[i] != '_')
						flag = true;
				}
			}
		}
		if (flag)
			cout << re;
		cout << endl;
	}
	return 0;
}
