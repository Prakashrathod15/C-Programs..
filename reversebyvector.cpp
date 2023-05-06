#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v, int m )
{
    int start = m+1;
    int end = v.size()-1;
    while(start<=end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start ++;
        end--;
    }
   cout<<" printing the array "<<endl;
   for(int i  = 0; i<v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
void print(vector<int> v )
{
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
   int m;
   cout<<" enter index number where u want to reverse "<<endl;
   cin>>m;

    merge(v,m);



    //print(ans);

    return 0;
}