#include<bits/stdc++.h>
using namespace std;

int ReverseDigit(int num)
{
    int rev_num  = 0;
    while(num>0)
    {
        rev_num = rev_num*10+num%10;
        num = num/10;
    }
    return rev_num;
}
int main()
{
    std::ios::sync_with_stdio(false);
    int num;
    std::cin>>num;
    std::cout<<ReverseDigit(num);
    return 0;
}
/* Step's:
input:number

1.initialize rev_number  = 0
2.loop while number >  0
  (a) multiply rev_number by 10 and remainder of number divide by 10 to reverse_number
   Formula = reverse_number =  reverse_number * 10 + number  % 10;
  (b)Divide number by 10
3.Return reverse_number
*/

/* Example:
num = 4562
rev_num = 0

rev_num = rev_num *10 + num%10 = 2
num = num/10 = 456

rev_num = rev_num *10 + num%10 = 20 + 6 = 26
num = num/10 = 45

rev_num = rev_num *10 + num%10 = 260 + 5 = 265
num = num/10 = 4

rev_num = rev_num *10 + num%10 = 265 + 4 = 2654
num = num/10 = 0
*/

