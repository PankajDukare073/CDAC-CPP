#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Book
{
    private:
    int id;
    char bname[20];
    public:
    void acceptdat(int id,char *bname)
    {
        this->id=id;
        strcpy(this->bname,bname);
    }
    void display()
    {
        cout<<"the book details are id:"<<id<<" name:"<<bname<<endl;
    }
    int getId()
    {
        return id;
    }
    void setName(char *bane)
    {
       strcpy(this->bname,bane);
    }
};
int main()
{



    cout<<"this is book store program"<<endl;
    Book b1;
    cout<<"enter id and book name:"<<endl;
    int id;
    char bname[20];
    cin>>id>>bname;
    b1.acceptdat(id,bname);
    b1.display();

//write
    ofstream out("abc.txt",ios::binary|ios::app);
    Book b3;
    strcpy(bname,"python");
    b3.acceptdat(45,bname);
     out.write((char *)&b3,sizeof(Book));
    out.write((char *)&b1,sizeof(Book));
    out.write((char *)&b1,sizeof(Book));
    out.close();
//read
    Book b2;
    ifstream inp("abc.txt",ios::binary);
    inp.read((char *)&b2,sizeof(Book));
    b2.display();

//read continuis data
    
    while(inp.read((char *)&b2,sizeof(Book)))
    {
        
        if(b2.getId()==45)
        {
            cout<<"the 05 python finedddddddddddd"<<endl;
            strcpy(bname,"m");
            b2.setName(bname);
        }
        b2.display();
    }

    return 0;
}