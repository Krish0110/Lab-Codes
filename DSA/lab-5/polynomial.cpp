//addition of two polynomials
#include<iostream>
#include<cstdlib>

using namespace std;

struct terms{
  float coefficient;
  int exponent;
  terms *next;
};

class polynomial
{
  private:
      terms *start;
      int numTerms;
  public:
       polynimial()
       {
        start=NULL;
       }

       bool isEmpty()
       {
        return(start==NULL);
       }

       terms *CreatePolynimial(float data,int power)
       {
        terms *Newnode= new terms;
        if(Newnode==NULL)
            throw("Node cannot be created");
        else
        {
             Newnode->coefficient=data;
             Newnode->exponent=power;
             Newnode->next=NULL;
        }
        return Newnode;
       }

       void InsertTermsInPolynimial(float data,int power)
       {
        terms *ptr,*newnode;
        newnode=CreatePolynimial(data,power);
        ptr=start;
        if(start==NULL)
        {
          start=newnode;
        }
        else
        {
        while(ptr->next!=NULL)
        {
          ptr=ptr->next;
        }
        ptr->next=newnode;
        }
        cout<<endl<<"Term with coefficient "<<data<<" and power "<<power<<" is inserted"<<endl;
       }
       void GetPolynomial()
       {
            cout<<endl<<"Enter the number of terms of  polynomial:";
            cin>>numTerms;
            float coeff;
            int expo;
            for(int i=numTerms;i>0;i--)
            {
              cout<<endl<<"Enter the coefficient and exponent of given polynomial:";
              cout<<endl<<"Exponent:";
              cin>>expo;
              cout<<endl<<"Coefficient:";
              cin>>coeff;
              InsertTermsInPolynimial(coeff,expo);
            }
       }

       void display()
       {
             if(start==NULL)
             throw("Polynimial doesnot exist");
             else
             {
              terms *ptr=start;
              cout<<endl<<"The given polynomial is:";
              cout<<endl<<"Coefficient \t Exponent";
              while(ptr->next!=NULL)
              {
                  cout<<endl<<ptr->coefficient<<" \t "<< ptr->exponent;
                  ptr=ptr->next;
              }
             }
       }

       polynomial AddPolynomial(polynomial *p,polynomial *q)
       {
           terms *ptrP=p->start,*ptrQ=q->start;
           while(ptrP->next!=NULL && ptrQ!=NULL)
           {
            if(ptrP->exponent==ptrQ->exponent)
            {
              this->InsertTermsInPolynimial(ptrP->coefficient+ptrQ->coefficient,ptrP->exponent);
              ptrP=ptrP->next;
              ptrQ=ptrQ->next;
            }
           else  if(ptrP->exponent>ptrQ->exponent)
            {
              this->InsertTermsInPolynimial(ptrP->coefficient,ptrP->exponent);
              ptrP=ptrP->next;
            }
            else if(ptrP->exponent<ptrQ->exponent)
            {
              this->InsertTermsInPolynimial(ptrQ->coefficient,ptrQ->exponent);
              ptrQ=ptrQ->next;
            }
           }
           while(ptrP->next!=NULL || ptrQ->next!=NULL)
           {
            if(ptrP->next!=NULL)
            {
              this->InsertTermsInPolynimial(ptrP->coefficient,ptrP->exponent);
              ptrP=ptrP->next;
            }
            else
            {
              this->InsertTermsInPolynimial(ptrQ->coefficient,ptrQ->exponent);
              ptrQ=ptrQ->next;
            }
           }
       }
};

int main()
{
  polynomial P;
  try{
  cout<<endl<<"Enter the data of first polynomial:"<<endl;
  P.GetPolynomial();
  polynomial Q;
  cout<<endl<<"Enter the data of next polynomial:"<<endl;
  Q.GetPolynomial();
  polynomial R;
  R.AddPolynomial(&P,&Q);
  cout<<endl<<"Given polynomial P is:"<<endl;
  P.display();
  cout<<endl<<"Given polynomial Q is:"<<endl;
  Q.display();
  cout<<endl<<"The polynomial obtained after adding them is:";
  R.display();
  }
  catch(const char * error)
  {
    cout<<error;
  }
  return 0;


}
