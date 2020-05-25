omments

Popular posts from this blog
Regula-Falsi Program in C++
March 14, 2014
>>> Regula-Falsi Program in C++<<<
#include<iostream.h>
#include<conio.h>
#include<math.h>

float f (float x)
{
    float fx1;
    fx1 = pow(x,3) + pow(x,2) - (3*x) - 3; // f(x) = x^3 - x^2 - 3x - 3;
    return (fx1);
}

void main()
{
    float x1,x2,x3;
    int count = 0;
    int iter;

    cout <<"Enter x1 = ";
    cin >> x1;
    cout <<"Enter x2 = ";
    cin >> x2;
    cout <<"Enter number of iterations = ";
    cin >> iter;

    do
    {
        if(count == iter)
        {
            break;
        }

        x3 = x1 - (f(x1)*((x1 - x2) / f(x1) - f(x2))); //This is formula of Regular false method

        cout <<"x1=" << x1 <<" | x2="<< x2 <<" | x3=" << x3 <<" | " << "  f(x1)=" << f(x1) << " |  f(x2)=" << f(x2) << " |  f(x3)=" << f(x3) << endl << endl;

        …
        READ MORE
        SIMPSON 3/8 rule in C++ Programming
        April 03, 2014
        /* Code for SIMPSON 3/8 rule in C++ Programming */#include<iostream.h>
#include<conio.h>
        void simpson(float[],float,float);
        void main()
        {
            static float ax[20],ay[20];
            float h;
            float i,n;
            clrscr();
            cout<<"enter the limit: ";
            cin>>n;
            cout<<"enter the value of x";
            for(i=0; i<n; i++)
                cin>>ax[i];
            cout<<"\n enter the value of y";
            for(i=0; i<n; i++)
            {
                cin>>ay[i];
            }
            h=ax[1]-ax[0];
            simpson(ay,h,n);
            getch();
        }


        void simpson(float ay[],float h,float n)
        {
            float sum=0;
            sum=ay[0]+ay[n-1];
            for(int i=1; i<=n-2; i++)
            {
                if(i%3!=0)
                    sum+=3*ay[i];
                else
                    sum+=2*ay[i];
            }
            sum*=(3.0*h)/8;
            cout<<"\nintegration value- "<<sum;
        }
        READ MORE
        Powered by Blogger
        Theme images by Veronica Olson

        Archive
        Report Abuse


