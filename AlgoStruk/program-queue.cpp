#include <iostream>

using namespace std;

#define MAX 5
class queue
{
    private:
        int t[MAX];
        int al;
        int dl;

    public:
        queue()
        {
            dl=-1;
            al=-1;
        }
    void del()
    {
        int tmp;
        if(dl==-1)
        {
            cout<<"Queue kosong";
        }
        else
        {
            fot(int j=0;j<=al;j++)
            {
                if((j+1)<=al)
                {
                    tmp=t[j+1];
                    t[j]=tmp;
                }
                else
                {
                    al--;
                    if(al==-1)
                    dl=-1;
                    else
                    dl=0;
                }
            }
        }
    }
    void add(int item)
    {
        if(dl==-1 && al==-1)
        {
            dl++;
            al++;
        }
        else
        {
            al++;
            if(al==MAX)
            {
                cout<<"Queue penuh\n";
                al--;
                return;
            }
        }
        t[al=item;]
    }
    void display()
    {
        if(dl!=-1)
        {
            for(int iter=0; iter<=al ; iter++)
            cout<<t[iter]<<" ";
        }
        else
        cout<<"Kosong";
    }
};

int main()
{
    queue a;
    int data[5]={32,23,45,99,24};

    cout << "queue sebelum penambahan elemen    :   "; a.display();
    cout << endl;

    for(int iter = 0; iter < 5 ; iter++)
    {
        a.add(data[iter]);
        cout << "Penamabah angka    :   "<<(iter+1)<<"  :   ";
        a.display();
        cout << endl << endl;
    }
    cout<<endl;
    cout<<"queue setelah penambahan elemen  :   ";
    a.display();
    cout<<endl<<endl;

        for(int iter=0 ; iter < 5 ; iter++)
        {
            a.del();
            cout <<"Penghapusan Angka   :   " <<(iter+1)<<" :   ";
            a.display();
            cout << endl;
        }
        system("pause");
        return 0;
    
}