
def linearSearch(a,x):
    n = len(a)
    for i in range(0,n):
        if a[i] == x:
            return i
    return -1

def main():
    a =[1,3,4,4,6,17,79,81,90]
    if linearSearch(a,90) != -1:
        print("item was found!")
    else:
        print("item was not found!")

main()