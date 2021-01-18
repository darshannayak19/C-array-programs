/*#include <stdio.h>
#include <stdlib.h>

int main()
{int large,small,i;
 int s[5];
 printf("enter the elements of array");
 for(i=0;i<=4;i++)
 {
  scanf("%d",&s[i]);
 }
 large=small=s[0];
 for(i=1;i<=4;i++)
 {
     if(large<s[i]||small>s[i])
     {
         large=s[i];

     }
 else
 {   small=s[i];

 }

 }
 printf("smallest number is:%d\n",small);

printf("largest number is:%d",large);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,sum,l,r;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>sum;
	for(int i=0;i<n;i++){
		for(int l=i+1,r=n-1;l<n,r>i;){
			if(arr[i]+arr[l]+arr[r]==sum){
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r];
			}
			else if(arr[i]+arr[l]+arr[r]>sum){
				r--;
			}
			else if(arr[i]+arr[l]+arr[r]<sum){
				l++;
			}
		}
	}
	return 0;
}
