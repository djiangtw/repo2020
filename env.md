# Installation in ubuntu

## Ubuntu

- resize disk in virtualbox
    - url: http://derekmolloy.ie/resize-a-virtualbox-disk/
    - command(take 80GB as example)
        - `VBoxManage modifymedium disk myvdi.vdi --resize 81920`
        - launch GParted and allocate the spare space to the disk.

- cloc
    - url: https://github.com/AlDanial/cloc
    - command
        - `apt-get install cloc`
    - count lines of code

## Python

- gprof2dot installation
    - url: https://github.com/jrfonseca/gprof2dot
    - command
        - `apt-get install python3 graphviz`
        - `pip install gprof2dot`
    - ~/.bashrc
        - `export PY_USER_BIN=$(python -c 'import site; print(site.USER_BASE + "/bin")')`
        - `export PATH=$PY_USER_BIN:$PATH`

- grip installation
    - command
        - `pip install grip`
    - usage
        - `grip -b env.md &`


