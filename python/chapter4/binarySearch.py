
def binarySearch(a,x):
    n = len(a)
    left=0
    right=n-1
    while left < right :
        mid = int((left+right)/2)
        if (x > a[mid]):
            left = mid + 1
        else:
            right = mid
    if a[left] == x:
        return left
    else:
        return -1

def main():
    a =[1,3,4,4,6,17,79,81,90]
    if binarySearch(a,709) != -1:
        print("item was found!")
    else:
        print("item was not found!")

main()