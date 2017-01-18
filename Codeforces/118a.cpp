#include<bits/stdc++.h>
#include<string>
using namespace std;
int findVowel(char x)
{
	char vowel[]={'a','e','i','o','y','u'};
    for(int i=0;i<6;i++)
    {
    	if((vowel[i]==x)||(vowel[i]==tolower(x))) return 0;
    }   
	return 1;
}

int main(int argc, char const *argv[])
{   
	int flag,i=0,j=0;
	string input;
	cin>>input;
	int length=input.length();
	char output[2*length];
    
	for(i=0;i<length;i++)
	{
        flag=findVowel(input[i]);
        if(flag==0) 
       	    continue;
        else if(flag==1) 
        {  
            output[j]='.';
            j++;
            output[j]=tolower(input[i]);
            j++;
          
       	}
    }

    output[j]='\0';
    cout<<output<<endl;
	return 0;
}