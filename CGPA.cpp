#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void TGPA(int n)
{
    system("cls");
    cout << "==============================================\n";
    cout << "                T.GPA Calculator              \n";
    cout << "==============================================\n";
    int credit[n];
    string grade[n];
    int score[n];
    float Tcredit = 0.0;
    cout << "Enter the Credit of Subject and Grade : ";
    for (int i = 0; i < n; i++)
    {
        cout << "\nSubject " << i + 1 << " : ";
        cin >> credit[i] >> grade[i];
        Tcredit = Tcredit + credit[i];
    }
    int point;
    float Tscore = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (grade[i] == "O")
        {
            point = 10;
        }
        else if (grade[i] == "A+")
        {
            point = 9;
        }
        else if (grade[i] == "A")
        {
            point = 8;
        }
        else if (grade[i] == "B+")
        {
            point = 7;
        }
        else if (grade[i] == "B")
        {
            point = 6;
        }
        else if (grade[i] == "C")
        {
            point = 5;
        }
        else if (grade[i] == "D")
        {
            point = 4;
        }
        else
        {
            point = 0;
        }
        score[i] = credit[i] * point;
        Tscore = score[i] + Tscore;
    }
    float SGPA;
    SGPA = Tscore / Tcredit;
    cout << "The TGPA of student is " << fixed << setprecision(2) << SGPA;
    system("timeout /t 20 > nul");
}
int main()
{
    system("cls");
    cout << "==============================================\n";
    cout << "                T.GPA Calculator              \n";
    cout << "==============================================\n";
    int n;
    cout << "\n\nHow many subjects are there : ";
    cin >> n;
    TGPA(n);
}