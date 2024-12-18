class Node:
    def __init__(self, data, priority):
        self.data = data  # Data of the node
        self.priority = priority  # Priority of the node
        self.next = None  # Pointer to the next node

class PriorityQueue:
    def __init__(self):
        self.front = None  # Initially, the queue is empty

    def enqueue(self, data, priority):
        new_node = Node(data, priority)  # Create a new node
        
        # If the queue is empty or the new node has higher priority (lower number)
        if self.front is None or self.front.priority > new_node.priority:
            new_node.next = self.front
            self.front = new_node
        else:
            # Traverse the queue to find the correct position based on priority
            temp = self.front
            while temp.next is not None and temp.next.priority <= new_node.priority:
                temp = temp.next
            new_node.next = temp.next
            temp.next = new_node

    def dequeue(self):
        # If the queue is empty, return None
        if self.front is None:
            return None
        
        # Remove the front node (highest priority)
        temp = self.front
        self.front = temp.next
        return temp.data  # Return the data of the dequeued node

    def display(self):
        if self.front is None:
            print("Queue is empty")
            return
        temp = self.front
        while temp:
            print(f"Data: {temp.data}, Priority: {temp.priority}", end=" --> ")
            temp = temp.next
        print("None")


# Testing the PriorityQueue implementation
pq = PriorityQueue()

# Enqueue elements with priorities
pq.enqueue("Task A", 2)
pq.enqueue("Task B", 1)  # Higher priority, smaller value
pq.enqueue("Task C", 3)

# Display the queue
pq.display()

# Dequeue elements
print(f"Dequeued: {pq.dequeue()}")
pq.display()
print(f"Dequeued: {pq.dequeue()}")
pq.display()
