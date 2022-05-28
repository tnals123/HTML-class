def find_Prime(num):   
    for i in range(2, num):  
        if num % i == 0:     
            return False   
    else:                        
        return False            

num = input("숫자를 입력해 주세요!: ")

if find_Prime(int(num)):
    print("소수입니다")
else:
    print("소수가 아닙니다.")