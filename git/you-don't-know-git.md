
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

=> git diff --word-dif 

you can use it especially when working with tailwindcss to see what class added as the `git diff` will not show you the specific change but the all line change 
![image](https://github.com/FoushWare/Cheat-Sheets/assets/18531447/a5061161-49c9-4b05-9d7e-46f59c882526)

with word-dif 
![image](https://github.com/FoushWare/Cheat-Sheets/assets/18531447/73d3363e-5162-4426-86c0-d55a57dcd693)


========================================





