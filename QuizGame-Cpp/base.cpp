#include <iostream>
#include <string>
using namespace std;
int start_quiz () {
    int score=0;
    char x; char s,S;
    cin >> x;                           /*Call fuction*/
    if (x=='s'||x=='S')
    {
        cout << "GOOD LUCK" << endl << endl;
        cout << "Q.1 A = x% of y and B = y% of x, then which of the following is true? \n" << "A is smaller than B." << endl;
    }
    else {
        cout << "Try again";
    }
    return 0;
}
int main () {
        cout << "-----------------WELCOME TO MY C++ QUIZ-----------------" << endl;
        cout << "---------You need to answer 10 questions from here (4 Pass marks)----------" << endl;
        cout << "-------You will get +1 credit for each correct answer, here is no negetive marking-------" << endl;
        cout << "----------To start this quiz press 'S'----------" << endl;
        start_quiz ();
}