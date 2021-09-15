//Peter Williams
//9-13-21

#include <iostream>
#include <string>

using namespace std;

static void divisible(int a, int b)
{
    for (int i = 1; i <= 1000; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << "\n";
        }
    }
}

static void wordReversal(const string& s)
{
    string t;

    for (int i = 0; i < s.size(); i++)
    {
        t = s[i] + t;
    }

    cout << s << " => " << t << "\n";
}

static void vowelRemomval(const string& s)
{
    string r;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            r += s[i];
        }
    }

    cout << s << " => " << r << "\n";
}

int main()
{
    string s = "";
    int a = 0;
    int b = 0;

    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "\nProblem 1: divisible numbers\n";
    divisible(a, b);
    cout << "\nProblem 2: reversing words\n";
    wordReversal(s);
    cout << "\nProblem 3: vowel removal\n";
    vowelRemomval(s);
}