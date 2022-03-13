# Heaven's Gate
DaVinciCTF - Heaven's Gate 


Challange : 


Find your way to open Heaven's Gate.

Host: challs.dvc.tf

Port : 7337

Output of timedatectl on host:

```           Local time: Sat 2022-03-12 18:05:01 UTC
            Universal time: Sat 2022-03-12 18:05:01 UTC
            RTC time: Sat 2022-03-12 18:05:02
            Time zone: Etc/UTC (UTC, +0000)
            System clock synchronized: yes
            NTP service: active
            RTC in local TZ: no
```
The solution :


`gcc chall.c -o doors`

`gcc keys.c -o keys`

to test:

`./keys | ./doors`


to get the key:

`./keys |  nc challs.dvc.tf 7337`

the flag: 

`dvCTF{4Ll_48OU7_71M1n9}`
