#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

//  //// /fns/// 
// if (n == 0) 
//     { 
//         res.append(str); 
//         return; 
//     } 
  
//     int len = str.length(); 
  
//     // If there are more characters to remove than string 
//     // length, then append nothing to result 
//     if (len <= n) 
//         return; 
  
//     // Find the smallest character among first (n+1) characters 
//     // of str. 
//     int minIndex = 0; 
//     for (int i = 1; i<=n ; i++) 
//         if (str[i] < str[minIndex]) 
//             minIndex = i; 
  
//     // Append the smallest character to result 
//     res.push_back(str[minIndex]); 
  
//     // substring starting from minIndex+1 to str.length() - 1. 
//     string new_str = str.substr(minIndex+1, len-minIndex); 
  
//     // Recur for the above substring and n equals to n-minIndex 
//     buildLowestNumberRec(new_str, n-minIndex, res); 

void recur(string num ,int n,string &res)
{
    if(n==0)
    {
        res.append(num);
    }
    int len=num.length();
    if(len<=n)
    return ;
    // find smallest digit in n+1
    int minid=0;
    for (int  i = 1; i < n+1; i++)
    {  
        if(num[i]<num[minid])
        {
            minid=i;
        }
    }
    res.push_back(num[minid]);
    string newstr= num.substr(minid+1,len-minid);
    recur(newstr,n-minid,res);   

}

 string lowestNRemoval(string num,int n)
{
    string res="";
    recur(num,n,res);

    return res;
}
////  /fns///
 
int main()
{
    OJ
    string num;
    int n;
    cin>>num>>n;
    cout<<lowestNRemoval(num,n);
    return 0;
   
}