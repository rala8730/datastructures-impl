class Node:
    def __init__(self,data,next,prev):
        self.data=data
        self.next=next
        self.prev=prev

class Linked_list:
    def __init__(self):
        self.head=None
        self.tail=None


    def Insert(self,adddata):
        new_node=Node(adddata,None,None)
        if(self.head==None):
            self.head=self.tail=new_node
        else:
            new_node.next=self.head
            new_node.prev=None
            self.head.prev=new_node
            self.head= new_node
            print ("%s added to list" %str(adddata))
    def look(self,lookdata):
        new_node=self.head
        while(new_node.data!=lookdata):
            new_node=new_node.next
        return new_node
    def remove(self,deldata):
        if(self.head==None):
            return "empty list cannot delete"
        else:
            searched=self.look(deldata)
            if(searched.data==None):
                print("cannot find value to delete")
            elif(searched.next!=None):
                searched.next.prev=searched.prev
                print ("%s deleted" %str(searched.data))
            elif(searched.prev!=None):
                searched.prev.next=searched.next
                print ("%s deleted" %str(searched.data))

if __name__=='__main__':
    list=Linked_list()
    list.Insert(5)
    list.Insert(6)
    list.Insert(3)
    list.Insert(2)
    list.remove(6)
    list.remove(2)
    list.remove(3)
    list.remove(5)


