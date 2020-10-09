from django.conf.urls import url
from demoapp1 import views

urlpatterns=[
    url(r'^$',views.index,name='index'),
]
