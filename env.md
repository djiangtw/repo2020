# Installation in ubuntu

- gprof2dot installation
    - url: https://github.com/jrfonseca/gprof2dot
    - command
        - apt-get install python3 graphviz
        - pip install gprof2dot
    - ~/.bashrc
        - export PY_USER_BIN=$(python -c 'import site; print(site.USER_BASE + "/bin")')
        - export PATH=$PY_USER_BIN:$PATH

