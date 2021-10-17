# LANGUAGE: GDScript
# AUTHOR: Marcos Paulo
# GITHUB: https://github.com/mr-soulfox

extends Node

func _ready():
	write_msg("Hello, World!")

func write_msg(msg):
	print(msg)
