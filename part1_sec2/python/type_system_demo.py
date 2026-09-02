# Python: dynamic, strongly-typed
# Same variable name can be re-bound to any type, but mixed-type
# operations that don't make sense are rejected at run time.

def describe(value):
    print(f"{value!r} is of type {type(value).__name__}")

age = 25
describe(age)
age = "twenty-five"   # legal: dynamic typing allows re-binding to a new type
describe(age)

score = 10
bonus = "5"
try:
    total = score + bonus   # int + str: no implicit coercion in Python
except TypeError as e:
    print("TypeError:", e)

print("Correct way:", score + int(bonus))
