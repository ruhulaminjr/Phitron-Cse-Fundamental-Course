""" Problem 3

In the famous Rock Paper Scissor game - Rock wins against scissors, paper wins
against rock, and scissors wins against paper.
Write a python program that takes two user inputs and returns who wins the game.
Sample Input:
> Player 1: rock
> Player 2: paper
Sample Output:
> Player 2 is the winner """


def calc(str):
    if str == "rock":
        return 1
    elif str == "paper":
        return 2
    elif str == "scissors":
        return 3


player1 = input("Player 1 : ")
player2 = input("Player 2 : ")

if calc(player1) > calc(player2):
    print("Player 1 is the winner")
else:
    print("Player 2 is the winner")
