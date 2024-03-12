#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "Calculator" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
        case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;

        case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;

        case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;

        case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;

        // case '%': cout << num1  << operation << num2 << "=" << num1 % num2; break;
        // that one gives an error "expression must have integral or unscoped enum type"
        // We have to make sure that in this case, it's two integers, not float

        case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1);   // 5 == 5.0 is true   
            // the first 5 had a chopped off decimal part. 
            // The user entered 5.0
            isNum2Int = ((int)num2 == num2);

            if (isNum1Int && isNum2Int)
                cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
            else
                cout << "This operation is not valid!";
            break;
        default: cout << "Not valid operation!" << endl;
    }


}