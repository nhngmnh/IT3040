//cau13
//Nhữ Ngọc Minh- 20225046
#include<bits/stdc++.h>
using namespace std;
struct bigNum
{
    char sign;
    char num[127];
    friend ostream& operator<<(ostream& out,bigNum x)
    {
        out<<x.sign;
        for (int i=0;i<strlen(x.num);i++) out<<x.num[i];return out;}};
void reverse(char* tmp)
{    int len=strlen(tmp);
    for (int i=0;i<strlen(tmp)/2;i++)
    {
        char tmp1=tmp[i];
        tmp[i]=tmp[len-i-1];
        tmp[len-i-1]=tmp1;
    }
}
void chuyendoi(char* tmp)
{   int m=strlen(tmp);
    tmp[0]=106-tmp[0]; 
    for (int i=1;i<strlen(tmp);i++)
    {
        tmp[i]=105-tmp[i];
    }
}
void adjust(char* tmp,int n)
{   reverse(tmp);int dai=strlen(tmp);
    for (int i=0;i<n;i++)
    tmp[i+dai]='0';
    reverse(tmp);
}
bigNum operator+(bigNum a, bigNum b)
{ 
    char tmp1=a.sign, tmp2=b.sign;
    int alen=strlen(a.num),blen=strlen(b.num);
    if (alen!=blen)
    {
    if (alen<blen) {adjust(a.num,blen-alen); alen=blen;}
    else {adjust(b.num,alen-blen); blen=alen;}
    }
    bigNum* tmp=new bigNum();
    if (tmp1==tmp2)
    {   for (int i=0;i<blen;i++) 
       (*tmp).sign=tmp1; 
       char nho=0;
       for(char i=0;i<alen;i++)
       {   
          int tmp3=((int)(a.num[alen-1-i])+(int)(b.num[blen-1-i])-48-48+nho);
          if (0<=tmp3 && tmp3 <=9) 
          {
              nho=0;
              (*tmp).num[i]=(tmp3)+48; 
          }
          else
          {
              nho=1;tmp3=tmp3-10;
              (*tmp).num[i]=(tmp3)+48; 
          }
       }
       if (nho) (*tmp).num[alen]='1'; 
       reverse((*tmp).num); 
    }
    else 
    {   
        if (alen!=blen)
    {
    if (alen<blen) {adjust(a.num,blen-alen); alen=blen;}
    else {adjust(b.num,alen-blen); blen=alen;}
    }
       int nho=0;
       for (int i=0;i<alen;i++)
       {
          char tmp3=((a.num[alen-1-i])-(b.num[blen-1-i])-nho);
          if (0<=tmp3 && tmp3 <=9) 
          {
              nho=0;
              (*tmp).num[i]=(char)(tmp3)+48;
          }
          else
          {
              nho=1;tmp3=tmp3+10;
              (*tmp).num[i]=(char)(tmp3)+48;
          }
       }
      
       if (nho) {chuyendoi((*tmp).num);}
       if (a.sign=='0'&& nho) (*tmp).sign='1';
       else if (nho!=0||a.sign=='0') (*tmp).sign='0';
       else (*tmp).sign='1';
       reverse((*tmp).num);
       
    }
    bigNum result1=(*tmp);
    free(tmp);
    return result1;
}
bigNum mulunsignchar(char* a, char j)
{   
    char alen=strlen(a),nho='0';
    bigNum ketqua1; 
    bigNum* ketqua= new bigNum();
   
    (*ketqua).sign='1';
    for (char i=0;i<alen;i++)
    {   
        char tmp=(a[alen-i-1]-48)*(j-48)-48+nho; 
        (*ketqua).num[i]=tmp%10+48; 
        nho=(tmp/10)+48; 
    }
  
    if (nho!=48)
    {  
        (*ketqua).num[alen]=nho;
    }
    reverse((*ketqua).num);  
    ketqua1=*ketqua;
    free(ketqua);
    return ketqua1;
}
bigNum operator*(bigNum a, bigNum b)
{
    
    char asign=a.sign;
    bigNum result;
    bigNum* tmp0=new bigNum(); (*tmp0).sign='1';
    
    
    int blen=strlen(b.num); 
    for (int i=0;i<blen;i++)
    {
        bigNum *tmp1=new bigNum();
      
        (*tmp1)=mulunsignchar(a.num,b.num[blen-i-1]); 
        char tmp1len=strlen((*tmp1).num);
        for (char j=0;j<i;j++)
        (*tmp1).num[tmp1len+j]='0'; 
        (*tmp0)=(*tmp0)+(*tmp1);
       
       free(tmp1);
    } 
    if (a.sign==b.sign) (*tmp0).sign='1';
    else (*tmp0).sign='0';
    result=*tmp0;
    free(tmp0);
    return result;
}
int main()
{   
    bigNum a,b,ketqua,kq;
    cin>>a.sign;
    cin>>a.num;
    cin>>b.sign;
    cin>>b.num;
    bigNum* amba=new bigNum();
    (*amba).sign='0'; (*amba).num[0]='3';
    bigNum* bon=new bigNum(); 
    (*bon).sign='1';(*bon).num[0]='4';
   
   kq=a*b+a*(*amba) + b*(*bon);
   cout<<kq;
    return 0;
}

