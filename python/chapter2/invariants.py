
def findMax(n):
    max = n[0]
    for i in range(0, len(n)):
        if n[i] > max:
            max = n[i]
    return max

def findMin(n):
    min = n[0]
    for i in range(0, len(n)):
        if n[i] < min:
            min = n[i]
    return min

def main():
    n = [1, 4, 17, 3, 90, 350, 4, 6, 81]
    print("maximun item in the array is " + str(findMax(n)))
    print("minimum item in the array is " + str(findMin(n)))

main()