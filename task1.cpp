#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Gussing number game between 1-100;
    cout<<"Enter the number between 1-100: \n";
    int num=0, guess=0, score=100;
    //num= random computer number. guess= user given number;
    //score will be start at 100. For each wrong attempt it will decreasing -1;
    srand((unsigned int) time(0));
    //using unsigned for positive random value. time(0) for each time random value;
    num= (rand()%100)+1;
    do{
        cin>>guess;
        if(guess>num)
        {
            cout<<"Your guessing number is too high \n";
        }
        else if(guess<num)
        {
            cout<<"Your guessing number is too low \n";
        }
        score--;
    }while(guess!=num);
     cout<<"Your guess is correct! \n";
     cout<<"Your score is: "<<score;
}
