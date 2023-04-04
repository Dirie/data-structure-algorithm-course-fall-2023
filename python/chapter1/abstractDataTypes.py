

class students:
    def __init__(self, i, n, s):
        self.id = i
        self.name = n
        self.score = s


def main():
    """
    this program presents the diference between abstract data type and primitive data type
    """
    std1 = students(101, "ali", 86.5)
    std2 = students(106 ,"farhiyo", 34)

    print('list of the students: ')
    print(std1.id,std1.name,std1.score)
    print(std2.id,std2.name,std2.score)


    #these are a type of premitve data types
    id = 9
    name ='razak'
    age=28
    print('\n\nexample of premitive data type')
    print(id, name, age)

main()