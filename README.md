# nssfucknitkc

## 使い方

/etc/nsswitch.confを以下のように編集する。resolveかdnsの前に`fucknitkc [unavail=return]`と書いておけばよい。

```
$ cat /etc/nsswitch.conf 
...
hosts: files mymachines myhostname fucknitkc [unavail=return] resolve [!unavail=return] dns
...
```
