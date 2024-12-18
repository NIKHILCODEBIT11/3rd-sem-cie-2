class Queue:
    def __init__(self):
        self.queue = []  # Initialize an empty list to represent the queue

    def enqueue(self, item):
        """Add an item to the end of the queue."""
        self.queue.append(item)

    def dequeue(self):
        """Remove an item from the front of the queue."""
        if self.is_empty():
            return "Queue is empty"  # Handle empty queue
        return self.queue.pop(0)  # Remove and return the first element

    def peek(self):
        """View the item at the front of the queue without removing it."""
        if self.is_empty():
            return "Queue is empty"
        return self.queue[0]

    def is_empty(self):
        """Check if the queue is empty."""
        return len(self.queue) == 0

    def size(self):
        """Return the number of elements in the queue."""
        return len(self.queue)

    def __str__(self):
        """Return the string representation of the queue."""
        return str(self.queue)
# Create a queue instance
q = Queue()

# Enqueue some items
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
print("Queue after enqueuing:", q)

# Peek at the front item
print("Front item:", q.peek())

# Dequeue an item
print("Dequeued item:", q.dequeue())
print("Queue after dequeuing:", q)

# Check if the queue is empty
print("Is the queue empty?", q.is_empty())

# Get the size of the queue
print("Size of the queue:", q.size())
