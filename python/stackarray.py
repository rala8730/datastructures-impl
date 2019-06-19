from sys import maxsize

def createstack():
    stack=[]
    return stack
def isEmpty(stack):
    return len(stack)==0
def push(stack,item):
    stack.append(item)
    print(item,"pushed to stack")
def pop(stack):
    if(isEmpty(stack)):
        return str(-maxsize -1)
    return stack.pop()

stack=createstack()
push(stack,20)
push(stack,30)
pop(stack)
pop(stack)
pop(stack)

       
