def bubble_sort(a_list):
    length = len(a_list) - 1
    for i in range(length):
        for j in range(length-i):
            if a_list[j] > a_list[j+1]:
                a_list[j], a_list[j+1] = a_list[j+1], a_list[j]      
    return a_list
                    


if __name__ == "__main__":
    unsorted_list = [2,13,2,1,8,6,3]
    sorted_list = bubble_sort(unsorted_list)
    print(sorted_list)