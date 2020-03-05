"#Common setting
set tags=tags

set tabstop=4
set shiftwidth=4
set nobackup
set nu
set nocompatible
"set backspace=indent,eol,start
set autoindent
" auto match blanket
set backspace=2
set smartindent
set expandtab
"exec "set listchars=tab:\uBB\uBB,trail:\uB7,nbsp:~"
"set list
"set clipboard=unnamedplus

"#cscope setting
"
if has("cscope")
    set csprg=/usr/bin/cscope
    set csto=1
    set cst
    set nocsverb
    " add any database in current directory
    if filereadable("cscope.out")
        cs add cscope.out
    endif
    set csverb
endif

:set cscopequickfix=s-,c-,i-,t-,e-
" nmap <C-_>s :csfind s <C-R>=expand("<cword>")<CR><CR>
" F5: find c symbol; F6: find string; F7: find function caller
nmap <silent> <F5> :cs find s <C-R>=expand("<cword>")<CR><CR>
nmap <silent> <F6> :cs find t <C-R>=expand("<cword>")<CR><CR>
nmap <silent> <F7> :cs find c <C-R>=expand("<cword>")<CR><CR>

"#Tagbar
let g:tagbar_width=25
autocmd BufReadPost *.cpp,*.c,*.h,*.cc,*.cxx call tagbar#autoopen()

"#Vundle manage
"
set nocompatible
filetype off

" set the runtime pah to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
Plugin 'majutsushi/tagbar' " Tag bar
Plugin 'scrooloose/nerdtree'


" All of your Plugins must be added before the following line
call vundle#end()	" required
filetype plugin indent on


