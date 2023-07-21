
def selectionsort(array):
    array = [64, 19, 9, 8, 7]

    for i in range(len(array)):
        minIndex = i
        for j in range(i + 1, len(array)):
            if array[j] < array[minIndex]:
                minIndex = j
    array[i], array[minIndex] = array[minIndex], array[i]
