#include<iostream>
#include<string>
using namespace std;
// class Solution
// {
// public:
//     string reverseLeftWords(string s, int n)
//     {
//         string temp;
//         for (int i = 0; i < n; i++)
//         {
//             temp[i]=s[i];
//         }
//         for (int i = 0,j=n; i < s.size()-n,j<s.size(); i++,j++)
//         {
//             s[i]=s[j];
//         }
//         for (int i =s.size()-n,j=0; i < s.size(),j<n; i++,j++)
//         {
//             s[i]=temp[j];
//         }
        
//         return s;
//     }
// };
//大量数据时无用
class Solution{
    public:
    string reverString(string s,int start,int end){
        if (s.empty())
        {
            return NULL;
        }
        
        for (int i = start-1,j=end-1; i <j; i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        return s;
    }
    string reverseLeftWords(string s, int n){
        s=reverString(s,1,s.size());
        s=reverString(s,s.size()-n+1,s.size());//注意一共反转的数目是n，故移动n-1格
        s=reverString(s,1,s.size()-n);
       return s;
    }
};