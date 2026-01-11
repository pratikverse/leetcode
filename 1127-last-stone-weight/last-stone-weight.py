import heapq

class Solution:
    def lastStoneWeight(self, stones):
        # create max heap using negatives
        heap = []

        i = 0
        while i < len(stones):
            heap.append(-stones[i])
            i += 1

        heapq.heapify(heap)

        while len(heap) > 1:
            x = -heapq.heappop(heap)   # largest
            y = -heapq.heappop(heap)   # second largest

            if x != y:
                heapq.heappush(heap, -(x - y))

        if len(heap) == 1:
            return -heap[0]
        else:
            return 0
