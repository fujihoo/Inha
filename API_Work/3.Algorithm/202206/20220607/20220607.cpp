/*
Q2. 다음의 함수를  사용하여 int 값을 역으로 화면에 출력하는 코드를
    작성하라.
    void reverseDisplay(int value)
    ex > reverseDisplay(12345
    출력결과 > 54321

    void reverseDisplay(const string& s)
    ex > reverseDisplay("abcd")
    출력결과 > dcba
*/

#include <iostream>

int digit_length(int value);
void reverseDisplay(int value);

int main()
{
    using namespace std;
    int value;

    cout << "반전할 숫자를 입력하시오: ";
    cin >> value;
    reverseDisplay(value);

    return 0;
}

//int digit_length(int value)
//{
//    int ans = 0;
//
//    while (value)
//    {
//        value /= 10;
//        ans++;
//    }
//    return ans;
//}

void reverseDisplay(int value)
{
    using namespace std;
    /* int length = digit_length(value);*/
    if (value % 10 == 0)
    {
        reverseDisplay(value / 10);
    }
    else
    {
        return;
    }
}