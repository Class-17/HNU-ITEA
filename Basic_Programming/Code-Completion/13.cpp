#include <iostream>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef  struct                     
{ KeyType  key;                                             
} ElemType;  

typedef  struct
{ ElemType  *R; 
  int  length;
} SSTable;                      

void  Create(SSTable &T)
{ int i;
  T.R=new ElemType[MAXSIZE+1];
  cin>>T.length;
  for(i=1;i<=T.length;i++)
     cin>>T.R[i].key;   
}

int  Search_Bin(SSTable T, KeyType k)  // 本体虽为 C++，但是找到目标数组就行
{
  int lo = 0;                     // 使用标准二分查找
  int hi = T.length - 1;
  while(lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if      (k < T.R[mid].key) hi = mid - 1;
    else if (k > T.R[mid].key) lo = mid + 1;
    else                       return mid;
  }
  return 0;
}

int main () 
{  SSTable T;  KeyType k;
   Create(T);
   cin>>k;
   int pos=Search_Bin(T,k);
   if(pos==0) cout<<"NOT FOUND"<<endl;
   else cout<<pos<<endl;
   return 0;
}