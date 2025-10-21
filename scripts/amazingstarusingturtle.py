import turtle as t

t.penup()
t.goto(-200,50)
t.pendown()
t.color("yellow")
t.bgcolor("black")
t.speed("fastest")

def star(turtle,size):
    if size <=10:
        return
    else:
        turtle.begin_fill()
        for i in range(5):
            turtle.forward(size)
            star(turtle, size / 3)
            turtle.left(216)
            turtle.end_fill()

star(t,360)
t.done()