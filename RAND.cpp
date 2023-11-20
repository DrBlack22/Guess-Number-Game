#include <iostream>
#include <cstdlib>
using namespace std;

void guess_Num();
bool correct_Guess(int,int);

int main(){
	guess_Num();
	cout << "\a";
	return 0;
}

void guess_Num()
{
	int guess;
	int answer;
	char response;
do{
	answer = 1 + (rand() % 1000);
	cout << "I hide a number bw 1 & 1000 in my mighty hand\nCan you guess what could it be?\n\a";
	cin >> guess;
	while(!correct_Guess(guess,answer))
	cin >> guess;

	cout << "You did it!\nWould like to try again?\nHit y to play again, n to exit: \a";
	cin >> response;
	cout << endl;
  }while(response == 'y');
}

bool correct_Guess(int g, int a){
	if(g == a)
	     return true;

	if(g < a){
	     cout << "	    ____________________\n\a";
	     cout << "	<<< Too Low!  Try again!|\n";
	     cout << "	    `````````````````````\r";}
	else
	     {cout << "	    ____________________\n\a";
	     cout << "	<<< Too High! Try again!|\n";
	     cout << "	    `````````````````````\r";}

	return false;
}
