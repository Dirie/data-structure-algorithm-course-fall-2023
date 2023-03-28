
def printEvenNumber1(limit):
    numbers = 0
    while numbers <= limit:
        if numbers%2 ==0:
            print(numbers)
        numbers=numbers+1

def printEvenNumber2(limit):
    numbers = 0
    while numbers <= limit:
        print(numbers)
        numbers=numbers+2

def main():
    limit = 100
    printEvenNumber1(limit)
    printEvenNumber2(limit)

main()