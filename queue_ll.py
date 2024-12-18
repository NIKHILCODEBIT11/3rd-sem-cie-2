class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class queue:
    def __init__(self):
        self.front=None
        self.rear=None

    def enqueue(self):
        x=int(input('Enter value to be inserted : '))
        new=Node(x)
        if self.rear is None:
            self.front=new
            self.rear=new
        else:
            self.rear.next=new
            self.rear=new

    def display(self):
        if self.front is None:
            print('Queue is empty')
        else:
            temp=self.front
            while temp:
                print(temp.data,end=" ")
                temp=temp.next

    def delete(self):
        if self.front is None:
            print('Queue is empty')
        else:
            temp=self.front
            print('Element deleted is :',temp.data)
            self.front=temp.next

q=queue()
q.enqueue()
# q.display()
q.enqueue()
q.enqueue()
q.display()
q.delete()
q.display()
q.delete()
q.display()
q.delete()
q.display()