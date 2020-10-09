from django.shortcuts import render
from django.http import HttpResponse
from demoapp1.models import User

# Create your views here.
def index(request):
    user=User.objects.order_by('First_name')
    my_det={'users':user,'var1':'HELLO SHAHZAIB AHMAD!','var2':'THIS IS YOUR DATABASE'}
    return render(request,"demoapp1/index.html",context=my_det)


def home(request):
    return HttpResponse("<h1 style='color:blue; text-align:center;'><a href='http://localhost:8000/demoapp1/'>HELLO WELCOME TO THIS WORLD!</h1>")
