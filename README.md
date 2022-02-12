# 18845 Internet Service - Individual Project

The project has three parts:

Part I:

> Implement a baseline concurrent Web server in C (recommended) or another language of your choice (be careful).

Part II:

> Design an efficient protocol for serving dynamic content, and then implement an optimized version of the baseline concurrent server that uses your protocol.

Part III:

> Evaluate the performance of your baseline and optimized servers, characterizing the performance improvement of your new server.

Terminal Command

* Install:

        $ make

* Baseline Server: 
  
        $ ./base <PORT>

* Baseline Server Test:
  
        $ cd Downloads/httpd-2.4.52/
        $ ab -n <TOTAL_REQUEST> -c <TOTAL_CLIENT> "http://localhost:8010/cgi-bin/starter?oper1=2&submit=submit"

* Uninstall:

        $ make clean

* Find if a port is occupied:

        $ sudo lsof -i :<PORT>

* Close the port if needed:

        $ sudo kill -9 <PID>