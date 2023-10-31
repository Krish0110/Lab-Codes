#Page replacement algorithm using FIFO

pages=[]
frameSize=int(input("Enter the frame size: "))
pageNo = int(input("Enter the number of pages:"))
frame=[]
for i in range(0,frameSize):
    frame.append(0)

for k in range(0,pageNo):
    pages. append(int(input("Enter page: ")))

print(pages)
i =0
hit = 0
for k in range(0,pageNo):
    if pages[k] in frame: hit+=1
    else:
        if i==frameSize:
            i=0
        frame[i]= pages[k]
        if i<frameSize:
            i = (i+1)
            
    print(frame)


print("HIT: ", hit)
print("HIT RATIO:" ,hit/pageNo)

