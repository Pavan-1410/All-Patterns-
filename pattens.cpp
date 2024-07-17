# include <iostream>
using namespace std;
void print_1(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        { 
            cout<<"* ";
        }cout<<endl;
    }
}
void print_2(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        { 
            cout<<j+1;
        }cout<<endl;
    }
}
void print_3(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }cout<<endl; 
    }
}
void print_4(int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print_5(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }cout<<endl; 
    }
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}
void print_6(int n)
{
    for (int i=1;i<=2*n-1;i++)
    {   int star=i;
        if (i>=n)
        {
            star=2*n-i;
        }
        for(int j=0;j<star;j++)
        {
            cout<<"*";
        }cout<<endl;
    }
}
void print_7(int n)
{
    for (int i=1;i<=n;i++)
    {  int num=1;
        if(i%2==0)
        {
            num=0;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" " ;
            num = 1-num;
        }cout<<endl;
    }
}
void print_8(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=2*(2*n-2*i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }cout<<endl;
        
    }
}
void print_9(int n)
{   int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }cout<<endl;
    }
}
void print_10(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (char j='A';j<'A'+i;j++)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
}
void print_11(int n)
{
    for(int i=n;i>0;i--)
    {
        for(char j='A';j<'A'+i;j++)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
}
void print_12(int n)
{
    for (int i=0;i<n;i++)
    {   char ch='A'+i;
        for (int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }cout<<endl;
    }
}
void print_13(int n)
{
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<(n-i);j++)
        {
            cout<<"  ";//we use twice space
        }
        for(int j=0;j<=i;j++)
        {
            char ch='A'+j;
            cout<<ch<<" ";
        }
        int k=i-1;
        for( int j=0;j<i;j++)
        {   
            char ch='A'+k;
            cout<<ch<<" ";
            k--;
        }cout<<endl;
    }
    
}
void print_14(int n)
{   char key ='A'+n-1;
    for (int i=0;i<n;i++)
    {   
        for (char j=key-i;j<=key;j++)
        {
            cout<<j<<" ";

        }cout<<endl;
    }
}
void print_15(int n)
{
    for (int i=n;i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        for (int j=0;2*j<2*(n-i);j++)
        {
            cout<<"    ";
        }
        for (int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        for (int j=0;j<2*(n-i-1);j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
void print_16(int n)
{ 
    int spaces = 2*n-2;
    for ( int i=1;i<=2*n-1;i++)
    {   int stars= i;
        if (i>n) stars=2*n-i;
        for (int j = 1;j<=stars;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
        }cout<<endl;
        if(i<n) {spaces-=2;}
        else {spaces+=2;}
    }

}
void print_17(int n)
{   int spaces = 2*n-2;
    for ( int i=1;i<=2*n-1;i++)
    {   int stars= i;
        if (i>n) stars=2*n-i;
        for (int j = 1;j<=stars;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
        }cout<<endl;
        if(i<n) {spaces-=2;}
        else {spaces+=2;}
    }

}
void print_18(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0 || j==n-1 || i==0||i==n-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}
void print_19(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter value of n:-";
    cin>>n;
    print_1(n);                 //you can call any of about function to see the resultant pattern.
    return 0;
}