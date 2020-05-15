# Git Notes

## archive without .git info
```
git archive --format=tar --prefix=git-1.4.0/ v1.4.0 | gzip >git-1.4.0.tar.gz
```
or
```
tar --exclude-vcs -zcvf foo.tar.gz ./folder
```
