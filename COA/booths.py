#Multiplication of two number using booth's algorithm
import AddSubForMD

print("Enter the two number to multiply:")
num1=int(input("num1(Multiplicand): "))
num2=int(input("num2(Multiplier): "))

def decinalTObinary(num):
    biNum=""
    quot=num
    while quot!=0:
        rem=str(quot%2)
        quot=int(quot/2)
        biNum+=rem
    biNum+='0'
    if(num>=0):
        return AddSubForMD.ReverseString(biNum,len(biNum))
    else:
        return AddSubForMD.ReverseString(AddSubForMD.twosComplement(biNum,len(biNum)),len(biNum)) #pailai reverse ma store vako xa 
    
def binaryTOdecimal(STR):
    num=0
    digit=len(STR)

    for i in range (0,digit):
        num=num+(int(STR[i])*pow(2,digit-i-1))
    return num


biNum1=decinalTObinary(num1)
biNum2=decinalTObinary(num2)

maxLen=max(len(biNum1),len(biNum2))
    

def Booths(a,b):
    B=a.zfill(maxLen)  #multiplicand
    Q=b.zfill(maxLen)  #multiplier
    A="".zfill(maxLen)
    Q1='0'
    burrow=0
    carry=0

    revB=AddSubForMD.ReverseString(B,maxLen)
    revQ=AddSubForMD.ReverseString(Q,maxLen)

    for i in range(0,maxLen):
        if(Q1==revQ[0]):
            #ASR
            Q1=revQ[0]
            revQ=AddSubForMD.LeftShift(revQ,A[0],maxLen)
            A=AddSubForMD.LeftShift(A,A[-1],maxLen)
        elif(revQ[0]=='1' and Q1=='0'):
            A,burrow,carry=AddSubForMD.subtracter(A,revB,maxLen)
            Q1=revQ[0]
            revQ=AddSubForMD.LeftShift(revQ,A[0],maxLen)
            A=AddSubForMD.LeftShift(A,A[-1],maxLen)
            
        elif(revQ[0]=='0' and Q1=='1'):
            A,carry=AddSubForMD.Adder(A,revB,maxLen)
            Q1=revQ[0]
            revQ=AddSubForMD.LeftShift(revQ,A[0],maxLen)
            A=AddSubForMD.LeftShift(A,A[-1],maxLen)

    upper=AddSubForMD.ReverseString(A,maxLen)
    lower=AddSubForMD.ReverseString(revQ,maxLen)
    return upper,lower

Pupper,Plower=Booths(biNum1,biNum2)
print(f"The Product of two number {num1} and {num2} is: {Pupper} {Plower}")

output=Pupper+Plower
print(output)

if((num1<0 and num2>=0)or(num1>=0 and num2<0)):
    output=AddSubForMD.ReverseString(AddSubForMD.twosComplement(AddSubForMD.ReverseString(output,len(output)),len(output)),len(output))
    print(f"The Product of two number {num1} and {num2} is: - {output}")
    num=-(binaryTOdecimal(output))
else:
    num=binaryTOdecimal(output)

print(f"The Product of two number {num1} and {num2} is: {num}")





            
    

