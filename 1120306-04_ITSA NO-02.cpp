// 1120306-04_ITSA NO-02.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>  
#include <iomanip>  
using namespace std;

int main()
{
    int km;
    cout << "請輸入公里數： ";
    cin >> km;
    double sum = km * 1.6;
    cout << fixed << setprecision(1) << sum << endl;
    
}
