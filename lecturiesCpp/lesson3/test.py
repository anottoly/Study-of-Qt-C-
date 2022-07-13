import subprocess
import time
#import ./qprog/build/pro

def run(command):
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    out = process.stdout.readlines()
    code = process.wait()
    return code, out

def test(command, expected_code, expected_value):
    print (command)
    code, out = run(command)
    if code != expected_code:
        print ('return value', expected_code, '(expected) !=', code)
        return
    if expected_code != 255:
        i = 0
        for line in out:
            try:
                if int(line) != expected_value[i]:
                    print (expected_value[i], '(expected) !=', out[0])
                    return
                i += 1
            except ValueError:
                print ('invalid output')
                return
            except IndexError:
                print ('invalid output')
                return
        if i != len(expected_value):
            print ('empty output')
            return
    print ('ok')

adres = "./qtprog/build/pro"

test(adres + ' 12 18', 0, [ 1 ])
test(adres + ' 1 99999', 0, [ 9344 ])
test(adres + ' 25 25', 0, [ 0 ])
test(adres + ' 30 29', 0, [ 0 ])
test(adres + ' 99999 1', 0, [ 0 ])
test(adres + ' 97 62285', 0, [ 4539 ])
test(adres + ' 41753 91449', 0, [ 7288 ])
test(adres + ' 3 99993', 0, [ 9343 ])
test(adres + ' 3', 255, [])
test(adres + ' ', 255, [])
test(adres + ' 3 3 3', 255, [])
test(adres + ' 12 18 1 99999', 0, [ 1, 9344 ])

print ('bencmarking')
start = time.time()
run(adres + ' 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999 1 99999')
finish = time.time()
print (finish - start, 'sec')
