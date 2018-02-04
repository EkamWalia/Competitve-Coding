  // Author : Ekam Walia
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0 ; i<n ;i++) scanf("%d",&a[i]);

    int lis[n];
    for(int i=0 ; i<n ;i++) lis[i] = 1;

    for(int i=1 ; i<n ; i++)
    {
      for(int j=0; j< i ; j++)
      {
        if(a[j] < a[i])
        {
          if(lis[j] + 1 > lis[i])
            lis[i] = lis[j] + 1;
        }
      }
    }

    int maxi = lis[0];
    for(int i=1 ; i<n ; i++) maxi = max(lis[i] , maxi);

    printf("%d\n" , maxi);

    return 0;
  }
