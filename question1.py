import random

items = ['가위','바위','보']

#랜덤한 정수 결정. 0 = 가위, 1 = 바위, 2=보
def scissorsRockBo():
    random_int = random.randint(0,3)
    myresult = input("가위 바위 보를 선택하세요 \n 0 : 가위, 1: 바위, 2: 보 :")

    return random_int,int(myresult)


#지정된 난수(컴퓨터 선택)와 유저 선택에 따른 결과
def result(n1,n2):
    #게임 결과가 0이면 내 승리, 1이면 컴퓨터의 승리, 2이면 비김
    game_result = ""
    #나(n1) 이 가위일때
    if (n1 == 0 and n2 == 0):
        game_result = "비김"
    elif (n1 == 0 and n2 == 1):
        game_result = "컴퓨터 승리!"
    elif (n1 == 0 and n2 == 2):
        game_result = "플레이어 승리!"
    #나(n1) 이 바위일때
    elif (n1 == 1 and n2 == 0):
        game_result = "플레이어 승리!"
    elif (n1 == 1 and n2 == 1):
        game_result = "비김"
    elif (n1 == 1 and n2 == 2):
        game_result = "컴퓨터 승리!"
    #나(n1) 이 보일때
    elif (n1 == 2 and n2 == 0):
        game_result = "컴퓨터 승리!"
    elif (n1 == 2 and n2 == 1):
        game_result = "플레이어 승리!"
    elif (n1 == 2 and n2 == 2):
        game_result = "비김"

    return game_result


#출력 관련 함수
def printItem(n1,n2):
    computer_choice = ""
    player_choice = ""
    if n1 == 0:
        player_choice = "가위"
    elif n1 == 1:
        player_choice = "바위"
    elif n1 == 2:
        player_choice = "보"

    if n2 == 0:
        computer_choice = "가위"
    elif n2 == 1:
        computer_choice = "바위"
    elif n2 == 2:
        computer_choice = "보"

    game_result = result(n1,n2)
    print("Com :" + computer_choice + " User : " + player_choice + " " + game_result )


if __name__ == "__main__":
    asdf = scissorsRockBo()
    printItem(asdf[1],asdf[0])

