#include <iostream>
#include <string>
using namespace std;
int start_quiz () {
    int score=0; int option;
    char x; char s,S;
    cin >> x;
    if (x=='s'||x=='S')
    {
        std::cout << "Q1 A = x% of y and B = y% of x, then which of the following is true? \n" << "1. A is smaller than B.\n" << "2. A is greater than B. \n" << "3. If x is smaller than y, then A is greater than B.\n" << "4. A is equal to B."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==4)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        } 
        else if (option>4)
        {
            cout << "Option is not valid" << endl << endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q2. Which of the following states is not located in the North? \n" << "1. Jharkhand.\n" << "2. Jammu and Kashmir. \n" << "3. Himachal Pradesh.\n" << "4. Haryana."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==1)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q3. Which word does NOT belong with the others? \n" << "1. inch.\n" << "2. ounce. \n" << "3. centimeter.\n" << "4. yards."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==2)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q4. Which is the largest human cell? \n" << "1. Liver.\n" << "2. Skin. \n" << "3. Spleen.\n" << "4. Ovum."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==4)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q5. Which one of the following is not an element of Noble gases? \n" << "1. Helium.\n" << "2. Hydrogen. \n" << "3. Neon.\n" << "4. Xenon."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==2)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q6. Which among the following states is largest producer of Coffee in India? \n" << "1. Tamilnadu.\n" << "2. Andhra Pradesh. \n" << "3. Karnataka.\n" << "4. Kerala."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==3)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        
        cout << "Q7. Who wrote Bande Mataram? \n" << "1. Rabindranath Tagore.\n" << "2. Bankimchandra Chatterjee. \n" << "3. Sharat chandra chattopadhyay.\n" << "4. None of the above."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==2)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q8. In the third battle of Panipat, who defeated Marathas? \n" << "1. Afghans.\n" << "2. Mughals. \n" << "3. British Army.\n" << "4. None of the above."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==1)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q9. Where did the formation of Azad Hind Fauj take Place? \n" << "1. Thailand.\n" << "2. Singapore. \n" << "3. Russia.\n" << "4. Germany."<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==2)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
        cout << "Q10. Look at this series: 7, 10, 8, 11, 9, 12,__ What number should come next? \n" << "1. 7\n" << "2. 10\n" << "3. 12\n" << "4. 13"<< endl;
        cout << "Your answer ==> "; cin >> option;
        if (option==2)
        {
            cout << "CORRECT !" << endl<< endl;
            score=score+1;
        }
        else if (option>4)
        {
            cout << "Option is not valid" << endl<< endl;
        }
        else
        {
            cout << "WRONG !!" << endl<< endl;
            score=score;
        }
    cout << "==============================" << endl;
    cout << "Your overall score==>  " << score << "/10" << endl;
    cout << "==============================" << endl;
                    if (score>=4)
                    {
                        cout << "STATUS\t" << "PASSED !!" <<endl;
                    }
                    else if (score<4)
                    {
                        cout << "STATUS\t" << "FAILED !!" <<endl;
                    }
    }
    else {
        cout << "Press any key to exit";
    }
    return 0;
}
int main () {
        cout << "--------------------------WELCOME TO MY C++ QUIZ---------------------------" << endl;
        cout << "---------You need to answer 10 questions from here (4 Pass marks)----------" << endl;
        cout << "You will get +1 credit for each correct answer, here is no negetive marking" << endl;
        cout << "--------------------To start this quiz press 'S'---------------------------" << endl;
        cout << "------------------------------ALL THE BEST---------------------------------" << endl;
        start_quiz ();

}