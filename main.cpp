#include <iostream>
#include <cmath>
using namespace std;

void function(){    

    cout << "Chose what you want to calculate! The hypotenuse (1), adjacent (2) or the opposite (3)";

    int mode = 1;
    cin >> mode;

    if(mode == 1){
        cout << "Pleas enter a! \n";
        int a;
        cin >> a;

        cout << "Pleas enter b now! \n";
        int b;
        cin >> b;

        double c = sqrt(pow(a,2) + pow(b,2));

        cout << "The lenght of c is equal to: " << c;
    }else if(mode == 2){
        cout << "Pleas enter a! \n";
        int a;
        cin >> a;

        cout << "Pleas enter c now! \n";
        int c;
        cin >> c;

        double b = sqrt(pow(c,2) - pow(a,2));

        cout << "The lenght of b is equal to: " << b;
    }else if(mode == 3){
        cout << "Pleas enter b! \n";
        int b;
        cin >> b;

        cout << "Pleas enter c now! \n";
        int c;
        cin >> c;

        double a = sqrt(pow(c,2) - pow(b,2));

        cout << "The lenght of c is equal to: " << a;
    }else{
        cout << "Thats not valid number! Try again! \n";
        function();
        return;
    }

    cout << "\nDo you want to calculate something else? Yes (1) No(0)";

    int wantToContinue;
    cin >> wantToContinue;

    if(wantToContinue == 1){
        function();
        return;
    }
}

int main(){

    cout << "This is a Pythagoras calculator! ";
    function();
    return 0;
}