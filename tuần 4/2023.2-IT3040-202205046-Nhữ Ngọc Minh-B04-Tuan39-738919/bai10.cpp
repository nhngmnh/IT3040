// Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
int F(string t,string d)
{   int count=0;
    string tmp;
    stringstream ss(d);
    while(getline(ss,tmp,','))
    if (t==tmp) count++;
    return count;
}
int MAX(string d)
{   vector<string> tmp;
string tmp1;
int max=0;
    stringstream ss(d);
    while(getline(ss,tmp1,','))
    tmp.push_back(tmp1);
    for (auto i: tmp)
    if (F(i,d)>max) max=F(i,d);
    return max;
}
int DF(string t,vector<string> Q)
{
    int count=0;
    for (auto i:Q) 
    if (F(t,i)) count++;
    return count;
}
double TF(string t,string d)
{   if(F(t,d)==0) return 0;
    return 0.5+0.5*(static_cast<double>(F(t,d)))/MAX(d);
}
double IDF(string t,vector<string> Q)
{   
    if (DF(t,Q)==0) return 0;
    return log2(static_cast<double>(Q.size())/DF(t,Q));
}
int main()
{
    int n,q;
    cin>>n;
    vector<string> document(n);

    for (int i=0;i<n;i++)
    cin>>document[i];
    cin>>q;
    vector<string> query(q);
    double score[q][n];
    for (int i=0;i<q;i++)
    for (int j=0;j<n;j++) score[i][j]=0;
    for (int i=0;i<q;i++)
    cin>>query[i];int r=0;
    for (auto j: query)
        {   
            stringstream ss(j);
            string tmp;
            
         while(getline(ss,tmp,','))
        { 
            for (int i=0;i<n;i++)
        {
            score[r][i]=score[r][i]+TF(tmp,document[i]); 
        }     
        }
        r++;
}
    for (int i=0;i<q;i++)
    {   double maxx=0; int tmp2=0;
        for (int j=0;j<n;j++)
        {   
            if (score[i][j]>maxx) 
            {maxx=score[i][j]; tmp2=j;}
        }
        cout<<tmp2+1<<"\n";
    }
return 0;

}