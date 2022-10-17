def doSomething(work):
    print("Starting the Work ")
    work()
    print("Work Done ")


def working():
    print("_____________")
    print("!!!!!!!!!!!!!")
    print("-------------")
    print("!!!!!!!!!!!!!")
    print("_____________")


doSomething(working)


def outerFunc(num):
    print("Outer Function Runed")

    def innerFunction():
        print("Inner Function Runned", num)
        num.append(56)
    return innerFunction


secondFunc = outerFunc([12])
secondFunc()
secondFunc()

secondFunc()
secondFunc()
