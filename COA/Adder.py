#Addition of two unsigned binary integer numbers
print("Enter two number for addition:")
num1=input("num1: ")
num2=input("num2: ")

maxlen=8
def StringReverse(str):
   revStr=""
   for i in range ((len(str)-1),-1,-1):
      revStr+=str[i]
   return revStr

def AddZero(str):
   for i in range(len(str),maxlen):
      str+='0'
   return str

def AND(data1,data2):
    if data1==1==data2==1:
      return 1
    else:
      return 0
      
def OR(data1,data2):
    if data1==0==data2==0:
      return 0
    else:
      return 1
    
def XOR(data1,data2):
   if data1==data2:
      return 0
   else:
      return 1
   
def Adder(str1,str2):
   sum=""
   carry=0
   a=AddZero(StringReverse(str1))
   b=AddZero(StringReverse(str2))
   for i in range (0,maxlen):
      sum+=str(XOR(carry,XOR(int(a[i]),int(b[i]))))
      carry=OR(AND(int(a[i]),int(b[i])),AND(carry,XOR(int(a[i]),int(b[i]))))
   revSum=StringReverse(sum)
   return revSum,carry

actualSum,Carry=Adder(num1,num2)
print("The sum of given number ",num1," and ",num2," is:")
print("Sum:",actualSum)
print("Carry:",Carry)