#Omar Elsayed 202002099

#5a
n=int(input("Enter number of integars you want to add: "))
i=0
sum=0
while True:
   if i == n:
       print(sum)
       break
   else:
       i += 1
       sum=sum+i

#5b
n=int(input("Enter number of integars you want to add: "))
i=1
sum=0
while True:
   if i >= 2*n:
       print(sum)
       break
   else:
       sum=sum+i
       i += 2

#5c
n=int(input("Enter number to add: "))
sum=0
while True:
   if n == 999:
       print(f"Number 999 reached! Number not added to Sum! Final sum is {sum}")
       break
   else:
       sum=sum+n
       print(f"Current sum is: {sum}")
       n=int(input("Enter another number: "))

#5d
n=int(input("Enter number: "))
i=0
while True:
    if n!=1 and n%2!=0:
        print("Number can not be divided by 2!")
        print(f"Final number reached: {n}, Number of times Halved: {i}")
        break
    elif n==1:
        print(f"Number was halved {i} times.")
        break
    else:
        n=n/2
        i+=1
        pass

#Bonus Task
ln1=input("Enter n, b, and d with only spaces between numbers: ")
ln2=input("Enter Orange sizes with only spaces between numbers (If number of sizes does not equal n, the new number will be used instead): ")
ln1=ln1.split(" ")
ln2=ln2.split(" ")
n = len(ln2)
b = int(ln1[1])
d = int(ln1[2])
sum=0
cl=0
for i in ln2:
    if cl == 0:
        if 1 <= n <= 100000 and 1 <= b <= d <= 1000000 and 1 <= int(i) <= 1000000:
            for i in ln2:
                if int(i) <= b:
                    sum =  sum + int(i)
                    #print(i)
                    #print(sum)
                else:
                    pass
            if sum%d==0:
                print(sum-1//d)
            else:
                print(sum//d)
    else:
        break
    cl +=1
