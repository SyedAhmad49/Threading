class fcfs1():
    def __init__(self):
        processname=" "
        arrival_t = 0
        burst_t = 0
        start_t = 0
        run_t=0





mainlist = []
nop = input('enter no of processe')
fcfs=[fcfs1() for i in range(nop)]
for i in range(nop):

    fcfs[i].processname = input('enter name of prcoess p')
    fcfs[i].arrival_t = int(input('enter arrival time for process p' + str(i)))
    fcfs[i].burst_t = int(input('enter burst time for processp' + str(i)) )
    fcfs[i].start_t = 0
    fcfs[i].run_t=0

mainlist.sort(key=lambda x :x.burst_t[i])
total=0
for i in range(nop):
    chk=False
    while(fcfs[i].run_t!=fcfs[i].burst_t):
        if(fcfs[i].arrival_t>total):
            while(True):
                total+=1
                if(fcfs[i].arrival_t==total):
                    break
        else:
            if(fcfs[i].start_t==0 and chk==False):
               fcfs[i].start_t=total
               chk=True
            total+=1
            fcfs[i].run_t+=1
for i in range(nop):
    print('process name', fcfs[i].processname,'   ' ,'arrival time', fcfs[i].arrival_t ,"   ",'burst time', fcfs[i].burst_t ,"   " , 'termination time', fcfs[i].start_t+fcfs[i].burst_t , "   " , 'turnaround time' ,(fcfs[i].start_t+fcfs[i].burst_t) - fcfs[i].arrival_t , "   " , 'waiting time' ,fcfs[i].start_t-fcfs[i].arrival_t)






