#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
    srand(time(nullptr));
    string szMove;
    cout << "---- Rock Paper Scissors Game ----" << endl;
    coSut << "Ready to rock, paper, scissors? What is your move?" << endl;
    cin >> szMove;
    int myMove,randMove = rand() % 3 + 1;
   for(int i; i < szMove.length(); i++) {
       szMove[i] = tolower(szMove[i]);
   }
    if(szMove == "rock") myMove = 1;
   else if(szMove == "paper") myMove = 2;
   else if(szMove == "scissors") myMove = 3;
   else {
       cout << "Invalid move. Please enter rock, paper, or scissors.";
       return 1;
   }
    switch(randMove) {
        case 1:
            cout << "Computer chose: Rock" << endl;
            break;
        case 2:
            cout << "Computer chose: Paper" << endl;
            break;
        case 3:
            cout << "Computer chose: Scissors" << endl;
            break;
    }

   if(myMove == 1 && randMove == 3 || myMove == 2 && randMove == 1 || myMove == 3 && randMove == 2) {
       cout << "You win!" << endl;
   } else if(myMove == randMove){
       cout << "Tie!";
   } else {
       cout << "You Lose!";
   }
    return 0;
}
