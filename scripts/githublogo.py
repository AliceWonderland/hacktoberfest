import turtle as t

t.begin_fill()
t.fillcolor("black")

t.penup()
t.goto(-80,-200)
t.pendown()
t.left(90)

for i in range(50):
    t.right(0.1)
    t.forward(1)


t.left(90)

for i in range(50):
    t.right(1)
    t.forward(1)

for i in range(50):
    t.left(1)
    t.forward(1)

for i in range(30):
    t.right(5)
    t.forward(1)

for i in range(50):
    t.right(2)
    t.forward(1)

for i in range(50):
    t.left(2)
    t.forward(1.2)

t.left(50)

for i in range(40):
    t.right(0.5)
    t.forward(1)

t.left(90)

for i in range(100):
    t.right(1)
    t.forward(2)

t.left(90)

for i in range(50):
    t.right(1)
    t.forward(1)

t.right(90)

for i in range(38):
    t.right(1)
    t.forward(2)

t.left(90)

for i in range(40):
    t.right(2)
    t.forward(3)

t.left(80)

for i in range(30):
    t.right(1)
    t.forward(2)

t.right(90)

for i in range(50):
    t.right(1)
    t.forward(1)

t.left(90)

for i in range(100):
    t.right(1)
    t.forward(2)

t.left(50)

for i in range(130):
    t.right(0.1)
    t.forward(1)

t.left(130)

for i in range(600):
    t.left(0.5)
    t.forward(2)

t.left(130)

for i in range(20):
    t.right(0.1)
    t.forward(1)

t.end_fill()
t.hideturtle()

t.done()