
def Percentage(iNo1, iNo2):

    if iNo2 == 0 or iNo2 > iNo1:
        return -1
    
    return ((float(iNo2)*100)/float(iNo1))


def main():
    iValue1 = int(input("Enter Total Marks\n"))
    iValue2 = int(input("Enter Obtained Marks\n"))

    fRet = Percentage(iValue1,iValue2)

    if fRet == -1:
        print("Wrong Input")
    else:
        print("Percentage = ",fRet)

if __name__ == "__main__":
    main()