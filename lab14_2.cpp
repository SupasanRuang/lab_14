#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool paper[N][M],int big ,int px,int py)
{

    for (int i = 0; i < N; i++)
    {
        
        for(int j =0 ;j < M ;j++)
        {
            if(sqrt((pow((i-px),2)+pow((j-py),2)))<=big-1)
            {
                paper[i][j]=1;
            }
           


        }
        
    }

}


void showImage(const bool paper[N][M])
{
    cout<<"------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"|";
        for(int j =0 ;j < M ;j++)
        {
            if(paper[i][j])
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }



        }
        cout<<"|\n";
    }
    

    cout<<"------------------------------------------------------------------------"<<endl;
}