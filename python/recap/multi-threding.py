from time import sleep, perf_counter
from threading import Thread

start = perf_counter()


def job1():
    for i in range(1, 6):
        print(i)
        sleep(1)


def job2():
    for i in range(6, 11):
        print(i)
        sleep(1)


# enable multithreading
task1 = Thread(target=job1)
task2 = Thread(target=job2)
# job1()
# job2()
task1.start()
task2.start()
task1.join()
task2.join()
end = perf_counter()

print(f"Time take {end-start}")
