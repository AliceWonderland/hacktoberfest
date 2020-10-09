from django.db import models

# Create your models here.
class User(models.Model):
    First_name=models.CharField(max_length=30)
    Last_name=models.CharField(max_length=30)
    email=models.EmailField()

    def __str__(self):
        return self.First_name
