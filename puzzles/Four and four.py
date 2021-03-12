'''Problem
Given a python list of integers, you need to print True if 4 contains another 4 next to it in the list. If such thing doesn't occur then print False.'''

def result(a):

    for i in range(0,int(len(a))):
            if(a[i] is 4 and a[i+1] is 4):
                return True
            return False
if __name__ == "__main__":
    a = [5, 4, 4, 2,1]
    print(result(a))
    
