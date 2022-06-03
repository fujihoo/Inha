#define _CRT_SECURE_NO_WARNINGS
/*
 Q1. 임의의 한 단어를 생성하고 사용자가 한 번에 한 문자만을
     추측하도록 해서 단어를 맞추는 게임을 작성하라.(행맨)
     단어의 각 문자는 '*' 으로 표시된다.
     사용자가 올바른 추측을 하였을 때 실제 문자가 화면에 표시된다.
     사용자가 단어 맞추기를 끝냈을 때는 실수한 횟수를 표시하고,
     다른 단어로 계속할 것인지를 묻도록 한다.
     ex > 생성된 단어 -> apple
          단어중 한 글자를 입력하시오. ***** > a
                                       a*****
          단어중 한 글자를 입력하시오. a**** > r
          r은 단어에 포함되지 않습니다.
          단어중 한 글자를 입력하시오. a**** > a
          a는 이미 단어에 포함되어 있습니다.
          단어중 한 글자를 입력하시오. a**** > e
                                       a***e
          .....
          총 xx번 실패 oo번 만에 정답! apple
 */


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string Make_Word(int choice);
//
//
//int main()
//{
//    using namespace std;
//    
//
//
//}
//
//string Make_Word(int choice)
//{
//    FILE* fp;
//    FILE* fp2;
//    string Type_of_Animal = "init";
//
//    fp = fopen("./Type_of_Animal", "r");
//    if (fp == NULL)
//    {
//        cout << "파일이 없습니다.\n";
//        return ;
//    }
//    while (1)
//    {
//        cout << "동물의 타입을 선택하세요.\n" << "1.Pets, 2.Farm_Animals, 3.Wild_Animals, 4.Mammals, 5.Sea_Animals, 6.Birds 7.Insects\n";
//        cin >> Type_of_Animal;
//
//        if (Type_of_Animal == "Pets")
//        {
//            fp2 = fopen("./Pets", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Farm_Animals")
//        {
//            fp2 = fopen("./Farm_Animals", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Wild_Animals")
//        {
//            fp2 = fopen("./Wild_Animals", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Mammals")
//        {
//            fp2 = fopen("./Mammals", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Sea_Animals")
//        {
//            fp2 = fopen("./Sea_Animals", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Birds")
//        {
//            fp2 = fopen("./Birds", "r");
//            break;
//        }
//        else if (Type_of_Animal == "Insects")
//        {
//            fp2 = fopen("./Insects", "r");
//            break;
//        }
//        else
//        {
//            cout << "숫자를 제외한 동물의 타입을 다시 입력하세요\n";
//        }
//    }
//
//    srand((unsigned int)time(NULL));
//
//}



