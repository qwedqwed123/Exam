// Exam1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
using namespace std;

#include <iostream>

int main()
{
    int mouth = 1;
    string result = "";
    cout << "請輸入月份(1~12):";
    cin >> mouth;

    if (mouth < 1 || mouth>12) {
        cout << "請輸入有效月份" << endl;
    }
    else
    {
        if (mouth >= 3 && mouth <= 5) result = "春季";
        else if (mouth >= 6 && mouth <= 8) result = "夏季";
        else if (mouth >= 9 && mouth <= 11) result = "秋季";
        else   result = "冬季";
        cout << "本月是" << result << endl;

    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
