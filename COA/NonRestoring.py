#Division of two unsigned binary number using non-restoring division

import AddSubForMD

print("Enter the two number to divide:")
num1=input("num1(Dividend): ")
num2=input("num2(Divisor): ")
n=max(len(num1),len(num2))

def divide(a,b):
    Q=a.zfill(n) #dividend and quotient
    M=b.zfill(n) #divisor
    A=''.zfill(n)

    revQ=AddSubForMD.ReverseString(Q,n)
    revM=AddSubForMD.ReverseString(M,n)
    
    burrow=0
    carry=0
    A=AddSubForMD.RightShift(A,revQ[-1],n)
    A,burrow,carry=AddSubForMD.subtracter(A,revM,n)

    for i in range(0,n-1):
        if A[-1]=='1':
            revQ=AddSubForMD.RightShift(revQ,'0',n) 
            A=AddSubForMD.RightShift(A,revQ[-1],n)  
            A,carry=AddSubForMD.Adder(A,revM,n)  
        
        elif A[-1]=='0':
            revQ=AddSubForMD.RightShift(revQ,'1',n) 
            A=AddSubForMD.RightShift(A,revQ[-1],n)  
            A,burrow,carry=AddSubForMD.subtracter(A,revM,n) 
  
    if A[-1]=='1':
      revQ=AddSubForMD.RightShift(revQ,'0',n) 
      A,carry=AddSubForMD.Adder(A,revM,n)  
          
    elif A[-1]=='0':
       revQ=AddSubForMD.RightShift(revQ,'1',n) 

    quotient=AddSubForMD.ReverseString(revQ,n)
    remainder=AddSubForMD.ReverseString(A,n)
    return quotient,remainder

Quot,Rem=divide(num1,num2)
print(f"The output of {num1} divided by {num2} is: \n Quotient={Quot} \n Remainder={Rem}")