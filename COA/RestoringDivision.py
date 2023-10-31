#Division of two unsigned binary number using restoring division

import AddSubForMD

print("Enter the two number to divide:")
num1=input("num1(Dividend): ")
num2=input("num2(Divisor): ")
n=max(len(num1),len(num2))



def divide(a,b):
    Q=a.zfill(n)  #dividend And quotient
    M=b.zfill(n)  #divisor
    A=''.zfill(n) #Remainder

    revM=AddSubForMD.ReverseString(M,n)
    revQ=AddSubForMD.ReverseString(Q,n)
    #print("num",revM,revQ)

    for i in range(0,n):
        burrow=0
        carry=0
        A=AddSubForMD.RightShift(A,revQ[-1],n)

        A,burrow,carry=AddSubForMD.subtracter(A,revM,n)

        if(A[-1]=='1'):
            revQ=AddSubForMD.RightShift(revQ,'0',n)

            #restoring
            A,carry=AddSubForMD.Adder(A,revM,n)
            print("one",revQ)
  
        elif(A[-1]=='0'):
            revQ=AddSubForMD.RightShift(revQ,'1',n)
            print("zero",revQ)

    quotient=AddSubForMD.ReverseString(revQ,n)
    remainder=AddSubForMD.ReverseString(A,n)
    return quotient,remainder

Quot,Rem=divide(num1,num2)
print(f"The output of {num1} divided by {num2} is: \n Quotient={Quot} \n Remainder={Rem}")






