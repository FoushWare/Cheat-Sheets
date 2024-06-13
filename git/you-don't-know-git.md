
=========================================

Subjects you can see here in the link 

---> https://blog.gitbutler.com/git-tips-1-theres-a-git-config-for-that/


1. Conditional Configs
2. Git Blame and Log with Line Ranges
3. Git Blame with Following
4. Word Diff
5. Resolution Reuse


-> My notes <- 

=> git log 

* if you want to get the history of a function you can use 

```
  git log -L <start-line-number,end-line-number>:path/to/file

```

=> git reflog


`git reflog` is a powerful command that logs every change to the tips of your branches, helping you recover lost commits and understand the sequence of changes in your repository as it shows [commiting,checkout,merge] all the steps. It is an essential tool for Git users to manage and troubleshoot their repositories effectively.

=> git diff --word-diff

you can use it especially when working with tailwindcss to see what class added as the `git diff` will not show you the specific change but the all line change 
![image](https://github.com/FoushWare/Cheat-Sheets/assets/18531447/a5061161-49c9-4b05-9d7e-46f59c882526)

with word-diff

![image](https://github.com/FoushWare/Cheat-Sheets/assets/18531447/73d3363e-5162-4426-86c0-d55a57dcd693)


========================================

New Stuff in Git 

==> branches

- if you type `git branch | head -5 ` it will get you all branches under each other 
![image](https://github.com/FoushWare/Cheat-Sheets/assets/18531447/d7b9127a-0b0f-4ca9-b1f1-e57f60dbebd0)

- and not ordered with the last commited

- so
 ```
git config --global column.ui auto
git config --global branch.sort --committerdate

```

will help us resovle this issue 


==>


==================

shortcut for git rebase : 

Setting up the alias : 
```
git config --global alias.up '!git fetch && git rebase origin/$(git symbolic-ref --short HEAD)'

```
Using the alias:
```
git up

```






