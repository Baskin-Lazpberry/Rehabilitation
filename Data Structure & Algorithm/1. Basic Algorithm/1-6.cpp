#include<iostream>

using namespace std;

int main()
{
    int i, n;
    int sum;
    cout << "1���� n������ ���� ���մϴ�.\n";
    
    do{
    cout << "n�� �� : ";
    cin >> n;
    } while(n<= 0);

    sum = 0;
    i = 1;
    while(i<=n)
        sum += i++;
    
    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;

    return 0;
}