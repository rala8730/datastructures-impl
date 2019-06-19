class Queue:
    def __init__(self,capacity):
        self.front=self.size=0
        self.rear=capacity-1
        self.Q=[None]*capacity
        self.capacity=capacity
    def isFull(self):
        return self.size==self.capacity
    def isEmpty(self):
        return self.size==0
    def Enqueue(self, item):
        if self.isFull():
            print("FULL")
            return
        self.rear=(self.rear +1)%(self.capacity)
        self.Q[self.rear]=item
        self.size=self.size+1
        print("%s enqueueed" %str(item))
    def Dequeue(self):
        if self.isEmpty():
            print("Empty")
            return
        print("%sdequeued" %str(self.Q[self.front]))
        self.front=(self.front+1)%(self.capacity)
        self.size=self.size-1

if __name__=='__main__':
    x=Queue(30)
    x.Enqueue(10)
    x.Enqueue(20)
    x.Enqueue(30)
    x.Dequeue()
    x.Dequeue()