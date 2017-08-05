#include<bits/stdc++.h>
using namespace std;
int insquare(int q, int p, float x[],float y[])
{
  float line1,mp1;
  line1=(q-x[1])-((y[1]-y[2])/(x[1]-x[2]))*(p-x[1]);
  mp1=(x[0]-x[1])-((y[1]-y[2])/(x[1]-x[2]))*(p-x[1]);
  if(line1>0 && mp1<0) return 1;
   else if(line1<0 && mp1>0) return 1;


  float line2,mp2;
  line2=(q-x[2])-((y[2]-y[3])/(x[2]-x[3]))*(p-x[2]);
  mp2=(x[0]-x[2])-((y[2]-y[3])/(x[2]-x[3]))*(p-x[2]);
  if(line2>0 && mp2<0) return 1;
  else if(line2<0 && mp2>0) return 1;


  float line3,mp3;
  line3=(q-x[3])-((y[3]-y[4])/(x[3]-x[4]))*(p-x[3]);
  mp3=(x[0]-x[3])-((y[3]-y[4])/(x[3]-x[4]))*(p-x[3]);
  if(line3>0 && mp3<0) return 1;
  else if(line3<0 && mp3>0) return 1;


  float line4,mp4;
  line4=(q-x[4])-((y[4]-y[1])/(x[4]-x[1]))*(p-x[4]);
  mp4=(x[0]-x[4])-((y[4]-y[1])/(x[4]-x[1]))*(p-x[4]);
  if(line4<0 && mp4>0) return 1;
  else if(line4>0 && mp4<0) return 1;
  else return 0;

}
int main()
  { float distance;
    int h,w;
    cin>>w>>h;
    int xc,yc,r;
    cin>>xc>>yc>>r;
    float x[5],y[5];
    cin>>x[1]>>y[1]>>x[3]>>y[3];
    x[2]=(x[1]+x[3]+y[3]-y[1])/2;
    y[2]=(y[1]+y[3]+x[1]-x[3])/2;
    x[4]=(x[1]+x[3]+y[1]-y[3])/2;
    y[4]=(y[1]+y[3]+x[3]-x[1])/2;
    x[0]=(x[1]+x[3])/2;
    y[0]=(y[1]+y[3])/2;

    for(int i=0;i<h;i++)
    {
      for (int j=0;j<w;j++)
      {
        distance=sqrt((xc-j)*(xc-j)+(yc-i)*(yc-i));
        if(distance<=r)
        {
          printf("#");
          continue;
        }
        distance=insquare(i,j,x,y);
        if(distance==0)
        cout<<"#";
        else
        cout<<".";
      }
      cout<<endl;
    }
    return 0;
  }
