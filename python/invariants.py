n = [1, 4, 17, 3, 90, 350, 4, 6, 81]
max = n[0]

for i in range(0, len(n)):
    if n[i] > max:
        max = n[i]
    
print(max)