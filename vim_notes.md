This file search index 🔥 🚀
- search and replace
- multicursors 
- show line numbers in vim 
- folding 
- duplicate lines
- new Tabs
- merge lines 
- write quick comments






========= move to character in the quote
'f' and 'F' commands that move the cursor forward and backward to the character you press after the command.

So press f" to move to the next " character and F" to move to the previous one.
============

====Move to the begin & end of the current word ====
b => begin 
e => end



=======================
🖱️ vscode & vim muiltiple🖲️ cursor 🪤🐭 ?
1) select the word i wanted  in the visual mode
2) use gb to go to the next match word
==========
❌ Delete from cursor to end of line in `vi`?
d$
===============
move line -> delete it then paste it  [dd p]

search and mode -> :/search_Key/+1m -> move one line below
search and mode -> :/search_Key/-2m -> move one 2line above

===========
go to the last cursor -> g;

========
indent lines -> from 2 to 8 $ :2,8> 

========
show numbers in vim file 
$ :set number
$ :set nonumber -> opisite of set number
========
run command in vim :
`:!ls` -> this will make $ ls  -> like in bash terminal


>>>>>>set vim as the default editor in unix>>>>>>
sudo update-alternatives --config editor
# Type the number which corresponds to Vim here (after installing it) then press Enter.

>>>>>>>>>>>>>>>delete annoying spellcheck<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
----> :hi clear SpellBad

>>>>>>>>>>>>>>>folding<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
(manually)
:set foldmethod=manual 
--> (v) for visual mode and hightlight what you want then press (zf) for folding and (za) for unfolding .....(zR) to unfold every folded in the page mean unfold recursifly  
 
>>>>>>>>>>>>>>>>>>dublicate a line<<<<<<<<<<<<<<<<<<<<<<<<<<
yy ---> to copy a line + p  ==> dublicate the line  
(D)OR(dd) ==>delete a line 
P => to past after the cursor
p(small)=> to past before the cursor
>>>>>>>>>>>>>>>>>>>>>incremant the number<<<<<<<<<<<<<<<<<<<<
stand on the number and press ==> ctrl+a

>>>>>>>>>>>>colorscheme && syntax highlight <<<<<<<<<<<
:set colorscheme <name_of_color> ==>to set the color to the vim
:set syntax on =>to enable syntax hightlight
:set syntax off=>to diablae syntax hightlight
:set syn=java  =>to enable syntax hightlight for java 
---------------------NEW TAB------------------------------

:tabe % ==>
Opens a tab, editing the current file-name, % is the name of the current file.
:Te or :tabe %:h==>Opens a tab, show the current file directory.

gt==>Go to next tab.
gT==>Go to last tab.

tabs   =>list all tabs including their display window
(i)gt  =>go to tabe in position i

Ctrl+pgDn => go to the next tabe
Ctrl+pguP => go to the previous tabe

--------------------------------------------/auto save the file------- 
type in vim this command 
:autocmd CursorHold,CursorHoldI * update
-------------------------- Line_moves-------------------------------------------
move To the begging of the line ==>   ^ OR zero OR (shift+i)=> this will go to the begging of the line and switch to insert mode  
move to the end of the line => A     :)
-----------------------------------
---------Select All the code in the vim  -------
:%y+ (% --> All , y-->yand,+ --> copy to clipboard)

---------------------------------------------------------------
 go to specific line    for example  50G

 ---------------------------------------------------------------
 How do I tidy up an HTML file's indentation in VI?
 :filetype indent on
 :set filetype=html           # abbrev -  :set ft=html
 :set smartindent             # abbrev -  :set si
 _________________________________________________________
 How to merge multiple lines into on line in vim: (useful for css)
 [where to beging] j [number_of_lines]
 %j    => (% for all the file)
5j2    => contract from line 5 to the next 2 lines  
if you don't want  to replace the new lines with spaces use !
for example  j!10  

____________________________________________________OR 
 type v to select the lines you want then   shift+j

--------------------------------------------------------------------
How to write comment quickly?
just type  =>  gcc   to comment and uncomment the line 
----------------------------------------------------------
Refresh the page ---> :edit
----------------------------------------------------------
: set wrap ==> to make the words wrap over lines
: set nowrap==> to make the words take the whole line and extended over the line 
_____________________________________________________________________________________
NOte_time:	25/3/2017

:h  => to get the online help 

make like bookmark to return to that line again fast =>

If you find yourself editing a file that is larger than one screen, you will appreciate the functionality provided by marks. You can think of a mark in vim as a bookmark – once you place it somewhere, you can go back to it quickly and easily. Suppose you are editing a 300-word configuration file and for some reason need to repeatedly switch between lines 30 and 150 for example.

First, go to line #30 by entering :30 in ex mode, then return to command mode and hit ma (m, then a) to create a mark named “a” in line 30.

Then go to line 250 (with :250 in ex mode) and hit `a (backtick, then a) to return to mark a in line 30. You can use lowercase and uppercase letters to identify marks in vim (now repeat the process to create a mark named A in line #250).

////////////////////////////  Search ///////////////

/[anything]=> to search for anything 



////////////////////vim Sex////////////////
split the screen and /open file explorer in one of them

------------Good video about using spf13 and download pluigins----------
https://www.youtube.com/watch?v=92oOeFl21wE

for 
	tagbar pluigin => to use it type    ,tt 

	it list all variables and function in the file ,so if we are editting large file we can easly viual everthing  

	ctrl+w+l => to go to the right panel 
	p => hightlight the variable 
	enter => to go to the selected variable or function


	AUTOCOMPLETE  pluigin => CTRL+N   to get suggestions from the file 


---------------------------------------files-------------------------------------------

To edit all files in the current folder, use:
	vim *

To edit all files in tabs, use:
	vim -p *

To edit all files in horizontally split windows, use:
	vim -o *


---------------------------------------
parenthesis -braces

%   => to move to the (end or start of braces )
v % => to move to the (end or start of braces ) and select the between 

------------------------start Split long line to multiline-------------------------

visual the line you want then type           => gq


------------------------End Split long line to multiline-------------------------

----------------Start of open files of project while working with it--------


ctrl+E ==> give me the tree of the project while working
ctrl+p ==> similar to ctrl+E but this is better if you know the file name you can start type 
            and this will give you suggestion of files


----------------End of open files of project while working with it--------



----------------------- START autoComplete of file path------------------

first thing type the first chars of the path then ===>

CTRL+X   CTRL+f     => to give you the suggested files
CTRL+n              => to move up through the entries

----------------------- End autoComplete of file path------------------

---------------------start Go to specific line before enter the file --------------

vi +lineNumber fileName

vi +anyword   fileName         make you go to the specific word

---------------------End Go to specific line before enter the file --------------



----basic search and replace-----------
Vim provides the :s (substitute) command for search and replace;
this tip shows examples of how to substitute. On some systems,
gvim has Find and Replace on the Edit menu (:help :promptrepl),
however it is easier to use the :s command due to its command line history and ability
to insert text (for example, the word under the cursor) into the search or replace fields.

The :substitute command searches for a text pattern, and replaces it with a text string. There are many options, but these are what you probably want:

:%s/foo/bar/g
Find each occurrence of 'foo' (in all lines), and replace it with 'bar'.
:s/foo/bar/g
Find each occurrence of 'foo' (in the current line only), and replace it with 'bar'.
:%s/foo/bar/gc
Change each 'foo' to 'bar', but ask for confirmation first.
:%s/\<foo\>/bar/gc
Change only whole words exactly matching 'foo' to 'bar'; ask for confirmation.
:%s/foo/bar/gci
Change each 'foo' (case insensitive due to the i flag) to 'bar'; ask for confirmation.
:%s/foo\c/bar/gc is the same because \c makes the search case insensitive.
This may be wanted after using :set noignorecase to make searches case sensitive (the default).
:%s/foo/bar/gcI
Change each 'foo' (case sensitive due to the I flag) to 'bar'; ask for confirmation.
:%s/foo\C/bar/gc is the same because \C makes the search case sensitive.
This may be wanted after using :set ignorecase to make searches case insensitive.
The g flag means global – each occurrence in the line is changed, rather than just the first. This tip assumes the default setting for the 'gdefault' and 'edcompatible' option (off), which requires that the g flag be included in %s///g to perform a global substitute. Using :set gdefault creates confusion because then %s/// is global, whereas %s///g is not (that is, g reverses its meaning).

When using the c flag, you need to confirm for each match what to do. Vim will output something like: replace with foobar (y/n/a/q/l/^E/^Y)? (where foobar is the replacement part of the :s/.../.../ command. You can type y which means to substitute this match, n to skip this match, a to substitute this and all remaining matches ("all" remaining matches), q to quit the command, l to substitute this match and quit (think of "last"), ^E to scroll the screen up by holding the Ctrl key and pressing E and ^Y to scroll the screen down by holding the Ctrl key and pressing Y. However, the last two choices are only available, if your Vim is a normal, big or huge built or the insert_expand feature was enabled at compile time (look for +insert_expand in the output of :version).

Also when using the c flag, Vim will jump to the first match it finds starting from the top of the buffer and prompt you for confirmation to perform replacement on that match. Vim applies the IncSearch highlight group to the matched text to give you a visual cue as to which match it is operating on (set to reverse by default for all three term types as of Vim 7.3). Additionally, if more than one match is found and you have search highlighting enabled with :set hlsearch, Vim highlights the remaining matches with the Search highlight group. If you do use search highlighting, you should make sure that these two highlight groups are visually distinct or you won't be able to easily tell which match Vim is prompting you to substitute.)






-------------------------------------ctrlP plugin-----------------

ctrlp

Basic Usage

Run :CtrlP or :CtrlP [starting-directory] to invoke CtrlP in find file mode.
Run :CtrlPBuffer or :CtrlPMRU to invoke CtrlP in find buffer or find MRU file mode.
Run :CtrlPMixed to search in Files, Buffers and MRU files at the same time.
Check :help ctrlp-commands and :help ctrlp-extensions for other commands.

Once CtrlP is open:

Press <F5> to purge the cache for the current directory to get new files, remove deleted files and apply new ignore options.
Press <c-f> and <c-b> to cycle between modes.
Press <c-d> to switch to filename only search instead of full path.
Press <c-r> to switch to regexp mode.
Use <c-j>, <c-k> or the arrow keys to navigate the result list.
Use <c-t> or <c-v>, <c-x> to open the selected entry in a new tab or in a new split.
Use <c-n>, <c-p> to select the next/previous string in the prompt's history.
Use <c-y> to create a new file and its parent directories.
Use <c-z> to mark/unmark multiple files and <c-o> to open them.
Run :help ctrlp-mappings or submit ? in CtrlP for more mapping help.

Submit two or more dots .. to go up the directory tree by one or multiple levels.
End the input string with a colon : followed by a command to execute it on the opening file(s):
Use :25 to jump to line 25.
Use :diffthis when opening multiple files to run :diffthis on the first 4 files.
Basic Options

Change the default mapping and the default command to invoke CtrlP:

let g:ctrlp_map = '<c-p>'
let g:ctrlp_cmd = 'CtrlP'
When invoked, unless a starting directory is specified, CtrlP will set its local working directory according to this variable:

let g:ctrlp_working_path_mode = 'ra'
'c' - the directory of the current file.
'r' - the nearest ancestor that contains one of these directories or files: .git .hg .svn .bzr _darcs
'a' - like c, but only if the current working directory outside of CtrlP is not a direct ancestor of the directory of the current file.
0 or '' (empty string) - disable this feature.

Define additional root markers with the g:ctrlp_root_markers option.

Exclude files and directories using Vim's wildignore and CtrlP's own g:ctrlp_custom_ignore:

set wildignore+=*/tmp/*,*.so,*.swp,*.zip     " MacOSX/Linux
set wildignore+=*\\tmp\\*,*.swp,*.zip,*.exe  " Windows

let g:ctrlp_custom_ignore = '\v[\/]\.(git|hg|svn)$'
let g:ctrlp_custom_ignore = {
  \ 'dir':  '\v[\/]\.(git|hg|svn)$',
    \ 'file': '\v\.(exe|so|dll)$',
      \ 'link': 'some_bad_symbolic_links',
        \ 
}
Use a custom file listing command:

let g:ctrlp_user_command = 'find %s -type f'        " MacOSX/Linux
let g:ctrlp_user_command = 'dir %s /-n /b /s /a-d'  " Windows
Check :help ctrlp-options for other options.

====================Things to search about for vim =============
* copy things from file with terminal
 
* Search and Replace words
```
> search and replace in the entire file
:%s/wordtoReplace/newWord/g 

for more info visit https://linuxize.com/post/vim-find-replace/#:~:text=quick%20and%20easy.-,Basic%20Find%20and%20Replace,press%20the%20'Esc'%20key.


```


