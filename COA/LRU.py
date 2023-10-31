#Page replacement algorithm using LRU

pages=[]
pageNo=int(input("Enter the number of pages:"))
cacheBlocks=set()
blocksSize=int(input("Enter the number of cache blocks:"))
indexes={}

for k in range(0,pageNo):
    pages. append(int(input("Enter page: ")))

print(pages)
hit=0
i=0
for k in range(0,pageNo):
    if pages[k] in cacheBlocks:
        hit+=1
        recentIndex=indexes[pages[k]]

        for page in cacheBlocks:
            if(indexes[page]<recentIndex):
                indexes[page]+=1    
        indexes[pages[k]]=0
    else:
        if(len(cacheBlocks)<blocksSize):
            for page in cacheBlocks:
                indexes[page]+=1 
            cacheBlocks.add(pages[k])
            indexes[pages[k]]=0
        else:
            lru=0
            j=-1
            for page in cacheBlocks:
                j+=1
                if indexes[page] > lru:
                    lru=indexes[page]
                    val=page
            cacheBlocks.remove(val)
            cacheBlocks.add(pages[k])

            for page in cacheBlocks:
              if(indexes[page]<blocksSize):
                indexes[page]+=1    
              indexes[pages[k]]=0
    print(cacheBlocks)
    print(indexes)

print("HIT: ", hit)
print("HIT RATIO:" ,hit/pageNo)


                
                
            
        
        
        
        

