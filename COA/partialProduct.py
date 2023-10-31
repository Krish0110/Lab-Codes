#Binary multiplication by partial product method
import AddSubForMD
 
print("Enter the two number to multiply:")
num1=input("num1(Multiplicand): ")
num2=input("num2(Multiplier): ")
n=max(len(num1),len(num2))

#def BinaryConvert(string):
#    binary=""
#     Quot=int(string)
#     while Quot!=0:
#         Rem=str(Quot%2)
#         Quot=int(Quot/2)
#         binary+=Rem
#     return binary

# def DecimalConvert(string):
#     num=0
#     length=len(string)
#     for i in range(0,length):
#         num+=int(string[i])*pow(2,(length-i-1))
#     return num
        

        
def multiply(a,b):
    M=a.zfill(n) #Multiplicand
    Q=b.zfill(n) #Multiplier
    A=''.zfill(n)
    revM=AddSubForMD.ReverseString(M,n)
    #print(revM)
    revQ=AddSubForMD.ReverseString(Q,n)
    #print(revQ)

    for i in range(0,n):
        carry=0
        if revQ[0]=='1':
            A,carry=AddSubForMD.Adder(A,revM,n)
        #print(A,revQ)
        revQ=AddSubForMD.LeftShift(revQ,A[0],n)
        A=AddSubForMD.LeftShift(A,str(carry),n)
        #print(A,revQ)
    Upper=AddSubForMD.ReverseString(A,n)
    Lower=AddSubForMD.ReverseString(revQ,n)
    return Upper,Lower

# Bnum1=BinaryConvert(num1)    
# Bnum2=BinaryConvert(num2) 
# print(Bnum1,Bnum2)
# n=max(len(Bnum1),len(Bnum2))
# Bnum1=ReverseString(Bnum1)
# Bnum2=ReverseString(Bnum2)
# Pupper,Plower=multiply(Bnum1,Bnum2)

# number=Pupper+Plower
# print(DecimalConvert(number))
Pupper,Plower=multiply(num1,num2)
print(f"The Product of two number {num1} and {num2} is: {Pupper} {Plower}")

