#include <iostream>
using namespace std;
//1、最长连续不重复子序列： 
const int N=1e5+10;
int a[N],b[N],n,res=0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=0;i<n;i++){
        b[a[i]]++;
        while(b[a[i]]>1){
            b[a[j]]--;
            j++;
        }
      res=max(res,i-j+1);
    }
    cout<<res<<endl;
    return 0;
}
//2、数组元素目标和 ： 
#include <iostream>
using namespace std;
const int N=1e5+10;
int a[N],b[N],x,n,m;
int main()
{
    cin>>n>>m>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    for(int i=0,j=m-1;i<n;i++){
        while(j>=0 && a[i]+b[j]>x)  j--;
        if(a[i]+b[j]==x){
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
//3、判断子序列：
#include <iostream>
using namespace std;
const int N=1e5+10;
int a[N],b[N],n,m,flag=0;
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j]){
                // i++;
                flag++;
                break;
                
            }
        }
    }
    if(flag==n){
          printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}  

 
