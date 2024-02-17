#!/usr/bin/env python3
import sys

DEF = "source = \""

def is_replace(c):
	return c == '"' or c == '\n' or c == '\t'

def generate_string(source, print_function):
	source = source.replace("REPLACE", print_function)
	source_string = ""
	for i, c in enumerate(source):
		if source[i-len(DEF):i] == DEF:
		 	source_string += "%s"
		if is_replace(c):
			source_string += "%c"
		else:
			source_string += c

	print("source string:")
	print(source_string)

def generate_print(source):
	print_function = "printf(source"
	for i, c in enumerate(source):
		if source[i-len(DEF):i] == DEF:
			print_function += ", source"
		if is_replace(c):
			print_function += f", {ord(c)}"

	print_function += ");"

	print("print function:")
	print(print_function)
	return print_function

if __name__ == "__main__":
	if len(sys.argv) < 2:
		print("Usage: ./generate.py <source_file>")
		sys.exit(1)
	with open(sys.argv[1], "r") as f:
		source = f.read()
		print_function = generate_print(source)
		generate_string(source, print_function)
