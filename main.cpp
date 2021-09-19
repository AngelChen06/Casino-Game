#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

void rules();

void rules(){
  cout << "\t\t |_____CASINO NUMBER GUESSING RULES!_____|\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. If you win, you get 2 times of the money you bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}
int main(){
string name;
int betnum;
int balance;
int guess;
int dice;
char choice;
srand(time(0));
cout<<"What's your name? \n";
getline(cin,name);
cout<<"\nʕ•́ᴥ•̀ʔっ Welcome to the Casino "<<name<<"! )^o^(\n\n";
cout<<"Enter your balance to play: \n";
cin>>balance;
do{
  rules();
  cout<<"Your current balance is: $"<<balance<<"\n\n";

do{
  cout<<"Enter how much money you want to bet: \n";
  cin>>betnum;
  if(betnum>balance)
  cout<<"Your betting amount can't be greater than your balance, please re-enter your betting number \n";
}while(betnum>balance);

do{
cout<<"Guess any number between 1 and 10: \n";
cin>>guess;
if(guess<=0 || guess>10)
cout<<"The number should be between 1 and 10. Please re-enter your guess \n";
}while(guess<=0 ||guess>10);
dice = rand()%10 + 1;
if(dice==guess){

cout<<"Congrats! You have won $"<<betnum*2<<" (っ＾▿＾) <3\n";
balance=balance+betnum*2;
}else{
  cout<<"You didn't guess the number correctly! You have lost $"<<betnum<<" (╥﹏╥)\n\n";
  balance=balance-betnum;
}
cout<<"\nThe dice number was "<<dice<<"\n\n";
cout<<name<<", you have a balance of $"<<balance<<"\n\n";
if(balance==0){
  cout<<"Unfortunately, you don't have any more money left to play \n";
  break;
}
cout<<"Do you want to play again?(y/n) (ɔ◔‿◔)ɔ ♥\n";
cin>>choice;
}while(choice=='Y'||choice=='y');
cout<<"\n\n";
cout<<"Thanks for playing "<<name<<"!"<<" Come again soon! :)";
  
return 0;
}