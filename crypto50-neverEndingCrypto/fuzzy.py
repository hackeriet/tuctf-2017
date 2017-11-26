import socket
import re
import string
 
sobj = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
sobj.connect(("neverending.tuctf.com",12345))
sobj.recv(1024)
 
re_question = re.compile(r"is (?P<question>.*) decrypted")
re_match = re.compile(r"a encrypted is (?P<chr>.)")
def workit():
    sobj.send("a\n")
 
    hint =  sobj.recv(1024)
    print "hint", repr(hint)
    c = re_match.match(hint).groupdict()["chr"]
 
# What is :BB7RJBE>^R@BE8 decrypted?
    question = re_question.findall(hint)[0]
    print "Question is", question
    answer = ""
    if question[1] == question[10]:
        answer = "how many more??"
    # 012345678901234
    # something here.
    # you got lucky..
    # you have skills
    # good work, more
    # 012345678901234
    # welcome, hacker
    # you crypto wiz!
    # how many more??
    # dont forget to
    # 012345678901234
    if question[11] == question[13]:
        answer = "something here."
    if question[1] == question[5]:
        answer = "you got lucky.."
    if question[12] == question[13]:
        answer = "you have skills"
    if question[1] == question[2]:
        answer = "good work, more"
    if question[1] == question[9]:
        answer = "you crypto wiz!"
    if question[13] == question[14] and question[1] == question[10]:
        answer = "how many more??"
    if question[1] == question[13]:
        answer = "welcome, hacker"
    if question[1] == question[6] and question[1] == question[13] and question[3] == question[10]:
        answer = "dont forget to "
    if answer == "":
        print "I DO NOT KNOW"
        import sys
        sys.exit()
    print answer
    sobj.send(answer + "\n")
while True:
    workit()
    print sobj.recv(1024)
