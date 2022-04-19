board = [[ '1', '2', '3' ], [ '4', 'X', '6' ], [ '7', '8', '9' ]]
##
## 4.7.1.2 Tic-Tac-Toe
##
from random import randrange

def displayBoard(board):

    for i in range(0,3):
        print('+-------+-------+-------+')
        print('|       |       |       |')
        print('|   ' + board[i][0] + '   |   ' + board[i][1] + '   |    ' + board[i][2] + '  |')
        print('|       |       |       |')
        print('+-------+-------+-------+')

def enterMove(board):

    while True:

        move = int(input('Please pick a number within the range of squares (1-9): '))

        if move < 1 or move > 9:
            print('Please pick a number in the range of 1 through 9')
            continue
        elif str(move) not in board[0] and str(move) not in board[1] and str(move) not in board[2]:
            print('Sorry, that square is already taken! Please select another square!')
            continue
        for row in range(0,3):
            for column in range(0,3):
                if board[row][column] == str(move):
                    board[row][column] = 'O'
        break

def makeListofFreeFields(board):
    
    global free_squares
    free_squares = [ ]

    for row in range(0,3):
        for column in range(0,3):
            if board[row][column] == 'X' or board[row][column] == 'O':
                pass
            else:
                free_squares.append(([row],[column]))
    print(free_squares)

def victoryFor(board, sign):

    print('Checking to see if Player', sign, 'is the winner!')
    if board[0][0] == sign and board[0][1] == sign and board[0][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[1][0] == sign and board[1][1] == sign and board[1][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[2][0] == sign and board[2][1] == sign and board[2][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[0][0] == sign and board[1][0] == sign and board[2][0] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[0][1] == sign and board[1][1] == sign and board[2][1] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[0][2] == sign and board[1][2] == sign and board[2][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[0][0] == sign and board[1][1] == sign and board[2][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    elif board[2][0] == sign and board[1][1] == sign and board[0][2] == sign:
        print('Player', sign, 'is your winner!!!')
        return True
    else:
        print('We DO NOT have winner yet!')
        return False

def drawMove(board):

    while True:

        row = randrange(3)
        column = randrange(3)

        if ([row], [column]) not in free_squares:
            continue
        else:
            board[row][column] = 'X'
            return

board = [ [ '1', '2', '3' ], ['4', 'X', '6' ], [ '7', '8', '9' ] ]
numberOfMoves = 1
human = 'O'
computer = 'X'

print('Hello and Welcome to Tic-Tac-Toe the Pythonic Way!!!')
print('Here is the current status of our game board: ')
displayBoard(board)
print()

while numberOfMoves < 9:

## The following code covers the computer's turn each round.
    
    try:
     enterMove(board)
    except Exception as e:
        print("ERROR : "+str(e))
    numberOfMoves += 1
    displayBoard(board)

    if victoryFor(board, human) == True:
        print('You crushed the computer! You are a super human! Woot woot!')
        break
    else:
        print('Here is the current list of free squares on our board and the statuse: ')
        makeListofFreeFields(board)
        print()
        displayBoard(board)

## The following code covers the computer's turn each round.

    print()
    print('Now it is time for the computer to make its move!')
    drawMove(board)
    numberOfMoves += 1
    displayBoard(board)
    print()

    if victoryFor(board, computer) == True:
        print('The computer has outsmarted you once again, Human! Better luck next time!')
        break
    else:
        print('Here is the current list of free squares on our board and the status: ')
        makeListofFreeFields(board)
        print()
        displayBoard(board)