#include<iostream.h>

class patient{
    private:
        char patid[5];
        char name[15];
    public:
        void getdata(){                        {
            cout<<"Enter patid";        
            cin>>patid;
            cout<<"Enter Name:";
            cin>>name;
            }

        void putdata()
                      cout<<patid<<endl<<name;

                        }

 

 

};



class ward:public patient

{

            private:

                        int wardno;

                        int bedno;

            public:

                        void getdata()

                        {

                           patient::getdata();

                           cout<<"Enter wardno and bedno:";

                           cin>>wardno>>bedno;

                        }

                        void putdata()

                        {

                           patient::putdata();

                           cout<<wardno<<endl<<bedno;

                        }

 

};

class payment:public ward

{

            private:

               float  amount;

            public:

               void getdata()

               {

                          ward::getdata();

                          cout<<"Enter Amount:";

                          cin>>amount;

               }

               void putdata()

               {

                          ward::putdata();

                          cout<<endl<<amount;

               }

};



void main()

{

   payment obj1;

   obj1.getdata();

   obj1.putdata();

   getch();

}