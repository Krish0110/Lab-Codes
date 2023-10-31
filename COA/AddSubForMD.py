#Adder and Subtracter for divisor and multiplier

def ReverseString(Str,n):
    revStr=""
    for i in range(n-1,-1,-1):
        revStr+=Str[i]
    return revStr

def OR(a,b):
    if a==b==0:
        return 0
    else:
        return 1

def AND(a,b):
    if a==b==1:
        return 1
    else:
        return 0

def XOR(a,b):
    if a==b:
        return 0
    else:
        return 1   

def Adder(a,b,n):
    sum=""
    carry=0
    for i in range(0,n):
        sum+=str(XOR(carry,XOR(int(a[i]),int(b[i]))))
        carry=OR(AND(int(a[i]),int(b[i])),OR(AND(int(a[i]),carry),AND(int(b[i]),carry)))
    #print ("sum",sum)
    return sum,carry

def LeftShift(str,Msb,n):
    newStr=""
    for i in range(1,n):
        newStr+=str[i]
    
    newStr+=Msb
    return newStr

def twosComplement(str,n):
    compStr=""
    for i in range (len(str)):
        if(str[i]=='0'):
            compStr+='1'
        else:
            compStr+='0'
    #print("one",compStr)
    one='1'.zfill(n)
    one=ReverseString(one,n)
    compStr,carry=Adder(compStr,one,n)
    return compStr

def RightShift(Str,Lsb,n):
    newStr=""
    for i in range (n-2,-1,-1):
      newStr+=Str[i]

    newStr+=Lsb
    num=n
    newStr=ReverseString(newStr,num)
    return newStr

def subtracter(str1,str2,n):
    compStr2=twosComplement(str2,n)
    #print("Two",compStr2)
    diff,carry=Adder(str1,compStr2,n)
    if carry==0:
        burrow=1
    else:
        burrow=0
    #print("Diff",diff)
    return diff,burrow,carry