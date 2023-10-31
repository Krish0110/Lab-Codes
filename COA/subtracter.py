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

def twosComplement(str):
   compStr=""
   for i in range (len(str)):
      if str[i]=='0':
         compStr+='1'
      else:
         compStr+='0'
   #print(compStr)
   compStr,carry=Adder(compStr,'1')
   return compStr

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

def Subtracter(str1,str2):
   str2=StringReverse(AddZero(StringReverse(str2)))
   #print(str2)
   compStr2=twosComplement(str2)
   #print (compStr2)
   diff,carry=Adder(str1,compStr2)
   if carry==0:
      burrow=1
   else:
      burrow=0
   return diff,burrow

Difference,Burrow=Subtracter(num1,num2)
print("The difference of given number ",num1," and ",num2," is:")
if Burrow==1:
   print(f"Difference:{Difference}   Burrow:{Burrow}")
   Difference=twosComplement(Difference)
   print(f"Difference:-{Difference}   Burrow:{Burrow}")
else:
   print(f"Difference:{Difference}   Burrow:{Burrow}")