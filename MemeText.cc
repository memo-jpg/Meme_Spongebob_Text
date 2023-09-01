#include<iostream>
#include<string>
#include<vector>
using namespace std;

string meme(string &s){
int size = s.length();
cout << size << endl;
for(int i = 0; i < size; i++){
	if( (i%2) == 0) { s[i] = toupper(s[i]); } //first letter uppercase, so on so forth
	else { s[i] = tolower(s[i]); } //second letter lowercase, so on so forth
}
	return s;
}

//Program to spongebobify text
int main(){
//string shit = "Haha Im so quirky haha i play vidja and watch anime and those are my only two personality traits haha epic cool gamer haha";
		//Program works when it's a predetermined sting, but only works up until the first space " " in a cin-ed string.
cout << "Enter thy text to memeify: \n";
string shit;
getline(cin, shit);
meme(shit);
cout << shit << endl;
}

