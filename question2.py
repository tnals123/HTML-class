class Bank:
    def __init__(self,n):
        self.name = n
        self.money = 0
        self.hisotry = ''''''

    def deposit(self,m):
        self.money += m
        self.hisotry += ("입금 : " + "+" + str(m) + "  |         잔금 : " + str(self.money) + "\n")
    
    def withdraw(self,m):
        if (self.money < m):
            print("출금할 돈이 부족합니다.")
        else:
            self.money -= m
            self.hisotry +=("출금 : " + "-" + str(m) + "  |         잔금 : " + str(self.money) + "\n")

    def printBalance(self):
        print("-----------------------------------")
        print("계좌 이름 : ", self.name)
        print("-----------------------------------")
        print("잔금 : ", self.money)
        print("-----------------------------------")

    def printHistory(self):
        print("--------------- 입/출금 내역 --------------")
        print(self.hisotry)
        print("-------------------------------------------")

myBank = Bank("윤석민")
myBank.deposit(10000)
myBank.withdraw(5000)
myBank.withdraw(500)
myBank.deposit(50000)
myBank.withdraw(10000)
myBank.printBalance()
myBank.printHistory()


friendBank = Bank("홍길동")
friendBank.deposit(1000000)
friendBank.withdraw(7000)
friendBank.withdraw(50000)
friendBank.printBalance()
friendBank.printHistory()