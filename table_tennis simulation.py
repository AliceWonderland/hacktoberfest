from random import *
def table_tennis():
    print('This program simulates the game of table tennis.')
    games = eval(input('Please enter the number of games you want to play: '))
    prob = eval(input('Please enter the probabilty of first player winnig against player2: '))
    pointA =0
    pointB =0
    serving ='A'
    for i in range(1,games+1):
        scoreA=0
        scoreB=0
        while not((scoreA>=11 or scoreB>=11) and abs(scoreA-scoreB)>=2) or (scoreA== 7 and scoreB ==0) or (scoreA== 0 and scoreB ==7) :
            if scoreA+scoreB%4==1 or  scoreA+scoreB%4==2:
                serving ='A'
            else:
                serving='B'
            a = random()
            if a < prob:
                scoreA =scoreA+1
            else:
                scoreB =scoreB+1            
                    
        if scoreA > scoreB or (scoreA==7 and scoreB==0):
            pointA = pointA+1
            
        else:
            pointB =pointB+1
    print('First player winning rate',round(pointA/games,3),pointA,'games winned by first player')
    print('Second player winning rate',round(pointB/games,3),pointB,'games winned by second player')

table_tennis()
