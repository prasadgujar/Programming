/** https://www.codechef.com/problems/BRACKETS **/
/**
FUNCTION F( S - a valid parentheses sequence )
    BEGIN
        balance = 0
        maxbalance = 0
        FOR index FROM 1 TO LENGTH(S)
        BEGIN
            if S[index] == '(' then balance = balance + 1
            if S[index] == ')' then balance = balance - 1
            maxbalance = max( maxbalance, balance )
        END
        RETURN maxbalance
    END
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    std::cin>> t;
    while(t--)
    {
        string s;
        std::cin>> s;
        int length = s.size();
        int Balance = 0 , Max_Balance = 0;  //set initial value
        for(int i=0; i < length ; i++)
        {
            if(s[i] == '(') // if open Bracket found then increase balance
            {
                Balance++;
                if( Balance > Max_Balance ) // if balance is greater than max_balance than increase max_balance
                    Max_Balance++;
            }
            else // if close bracket found than decrease the bracket
                Balance--;
    }

    for (int i = 0; i <  Max_Balance; i++) // print open brackets
        std::cout << '(';

    for (int i = Max_Balance ; i > 0 ; i--) //print closing brackets
        std::cout << ')';
    std::cout << '\n'; // for print every test cases on new line
    }

   return 0;

}

/***
Example
Input:
1
()((()()))

Output:
((()))
***/
