#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Solution
{
public:
    string replaceSpace(string s)
    {
        int count=0;
        int len=s.size();
        for (char c:s)
        {
            if (c==' ')
            {
                count++;
            }
        }
        s.resize(len+2*count);
        for (int i = len-1,j=s.size()-1; i >0,j>0 ; i--,j--)
        {
            if (s[i]==' ')
            {
                s[j]='0';
                s[j-1]='2';
                s[j-2]='%';
                j=j-2;//只在有空格时才会一次性往前进俩格。
            }else{
                s[j]=s[i];
            }
            
        }
        return s;
    }
};
