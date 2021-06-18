/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[],int n)
{ int t=a[0];
for(int i=0;i<n;i++)
{if(a[i]>t)
{
t=a[i];
}
}
return t;
}

int min(int a[],int n)
{int l=a[0];
for(int i=0;i<n;i++)
{if(a[i]<l)
l=a[i];
}
return l;
}

float average(int a[],int n)
{float avg=0.0;
for(int i=0;i<n;i++)
{avg=avg+a[i];
}
return (avg/n);
}

int mode(int a[100], int n)
{
  int mode=a[0];
  int count=0;
  int max=0;
  if(n==1)
    return a[0];
  for(int i=0;i<n;++i)
  {
    for(int j=i+1;j<n;++j)
    {
      if(a[i]==a[j])
        count++;
    }
    if(count>max)
    {
     max=count;
     mode=a[i];
    }
    }
return mode;
}

int factors(int n, int a[])
{
  int count=0;
  for(int i=0;i<100;i++)
  {
    if(n>0 && n!=1)
    {
      for(int j=2;j<100;j++)
      {
        if(n%j==0)
        {
          a[i]=j;
          count++;
          n=n/j;
          break;
        }

      }
    }
    else
      break;
  }
    return count;
}
