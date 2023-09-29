if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    if(arr[0]>arr[1]):
        w=arr[0]
        ru=arr[1]
    elif(arr[0]<arr[1]):
        w=arr[1]
        ru=arr[0]
    else:
        w=arr[0]
        ru=-101
        
    for i in range(2,len(arr)):
        if arr[i]>w:
            ru=w
            w=arr[i]
        elif arr[i]>ru and arr[i]<w:
            ru=arr[i]
            
    print(ru)
    