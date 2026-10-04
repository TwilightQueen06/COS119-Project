

## [Project and Portfolio I: Computer Science - Online]

- **[Ashley Richards]**
- **[10/04/2026]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- clear : Clear the Screen
- pwd : Print the "Working Directory"
- ls : List files and folders
- ls -a : List files and folders, including invisible files
- ls -lh : List all files and folders, in human readable form
- cd [directory] : Change directory
- cd / : Change directory, go to root directory
- cd ~ : Change directory and go to user home directory
- cd .. : Change directory, go up one folder level
- cd ../.. : Change directory, go up two folder levels
- cd~/Desktop : Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

 From my testing, I have noticed that typing "cd" and then dragging a folder changes what directories Terminal looks through. 

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

 Local Version Control : Tracks different versions of files on a single local computer.

Centralized Version Control: Stores the version history on a central server that users access to retrieve and submit changes.

Distributed Version Control: Gives each user a complete copy of the repository and its history, allowing changes to be made locally and synchronized with a remote repository. Git is an example of this.

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- git clone REPOSITORY-URL : Clone a repository
- git config --global user.name "Your Name" : Set-up a global user name
- git config --global user.email "your-email@example.com" : Set-up a global email address (to match my GitHub account email)
- git status : Shows the current state of your directory and staging area
- git add . : Add modified files to the next commit
- git commit -m "Your Commit message" : Make a commit with a new message
- git log : Show my commit history
- git help : Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

To connect Terminal to Github repository using HTTPS, I first clone the repo using its HTTPS URL with git clone. Then I use git config to set my Github username and email. After making changes to the files, I use git add to stage the changes, git commit -m to commit the changes, and the git push to push everything to the repository on Github.

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  The ".gitignore" file tells Git which files and folders should not be tracked or included in commits made by the user. It is to prevent unnecessary, temporary, or sensitive files from being added to the repository.

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  ".DS_Store" is a hidden file automatically created by macOS to store information about how folders are displayed in Finder. It is not needed for the project so it should be ignored to prevent unnecessary files from being added to the repository.

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  I would add the "bin/" and "obj/" folders to the ".gitignore" because they contain generated build files that can be recreated when the project is built. They do not need to be stored in the Git repository.

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

The Git documentation was the most helpful resource I found because it provides clear explanations of Git, version control, and the commands used in Terminal. The GitHub documentation was also helpful for understanding how Git connects to GitHub using HTTPS and how repositories are cloned and synchronized.

**Terminal Commands**  
[Git Reference - Command Documentaion](https://git-scm.com/docs?utm_source=chatgpt.com)

**Three Types of Version Control**  
[Git - About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control.html?utm_source=chatgpt.com)

**Git Commands**  
[Git Reference - Command Documentation](https://git-scm.com/docs?utm_source=chatgpt.com)

**Connecting to GitHub using Terminal**  
[Github - About Remote Repositories](https://docs.github.com/en/get-started/git-basics/about-remote-repositories?utm_source=chatgpt.com)

**Using .gitignore and Why it's Important**  
[Git - gitignore Documentation](https://git-scm.com/docs/gitignore/?utm_source=chatgpt.com)
