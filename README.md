<details>
<summary>Part I</summary>

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).  
[Ссылка на репозиторий](https://github.com/vector2281337/lab2)
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
3. Создайте файл ```hello_world.cpp``` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку ```using namespace std;```.
```sh
vim hello_world.cpp
```
Откроется редактор файлов, в котором будет написана нужная программа.
4. Добавьте этот файл в локальную копию репозитория
```git add hello_world.cpp```
5. Закоммитьте изменения с осмысленным сообщением.
```git commit -m "Initial commit with bad style Hello World"```

```
[master f622b35] Initial commit with bad style Hello World
 1 file changed, 7 insertions(+)
 create mode 100644 hello_world.cpp
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение ```Hello world from @name```, где ```@name``` имя пользователя.\```

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

```
git commit -am "Add user name input"
```
[master 9cf6c5c] Add user name input
 1 file changed, 4 insertions(+), 1 deletion(-)
Ответ на вопрос:
Файл hello_world.cpp уже был добавлен в репозиторий ранее
Git автоматически отслеживает изменения в таких файлах
Флаг -a в git commit -am включает эти изменения в коммит

8. Запуште изменения в удалёный репозиторий.\

```sh
git push origin master
```
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 10 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 405 bytes | 405.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/vector2281337/lab2.git
   f622b35..9cf6c5c  master -> master

9. Проверьте, что история коммитов доступна в удалёный репозитории.\
![Коммиты](https://github.com/vector2281337/lab2/commits)
<details>
<summary>Part II</summary>

1. В локальной копии репозитория создайте локальную ветку ```patch1```.\`
git checkout -b patch1
```
```
Switched to a new branch 'patch1'
```


2. Внесите изменения в ветке ```patch1``` по исправлению кода и избавления от ```using namespace std;```.\
Изменим файл также через vim.
```
3. **commit, push** локальную ветку в удалённый репозиторий.
```sh
git commit -am "Remove using namespace std and improve style"
git push origin patch1
```
[patch1 90569fe] Remove using namespace std and improve style
 1 file changed, 5 insertions(+), 5 deletions(-)
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 10 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 426 bytes | 426.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/vector2281337/lab2/pull/new/patch1
remote: 
To https://github.com/vector2281337/lab2.git
 * [new branch]      patch1 -> patch1
4. Проверьте, что ветка `patch1` доступна в удалёный репозитории.
5. Создайте pull-request `patch1 -> master`.
Для этого на самой странице репозитория надо нажать кнопку `Compare && pull request` .

6. В локальной копии в ветке `patch1` добавьте в исходный код комментарии.

Всё также через vim добавим комментарии.

7. **commit, push**.
```sh
git commit -am "Add code comments"
git push origin patch1
```
[patch1 0e83767] Add code comments
 1 file changed, 3 insertions(+), 1 deletion(-)
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 10 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 471 bytes | 471.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/vector2281337/lab2.git
   90569fe..0e83767  patch1 -> patch1

8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request.\
9. В удалённый репозитории выполните слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.\

Это всё делает в интерфейсе GitHub.
```
git checkout master
Переключились на ветку «master»

```

10. Локально выполните **pull**.\

`git pull` - получим все изменения

remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (1/1), 915 bytes | 915.00 KiB/s, done.
From https://github.com/vector2281337/lab2
 * branch            master     -> FETCH_HEAD
   9cf6c5c..f3c6034  master     -> origin/master
Updating 9cf6c5c..f3c6034
Fast-forward
 hello_world.cpp | 12 +++++++-----
 1 file changed, 7 insertions(+), 5 deletions(-)


11. С помощью команды **git log** просмотрите историю в локальной версии ветки ```master```.

```sh
*   f3c6034 (HEAD -> master, origin/master) Merge pull request #1 from vector2281337/patch1
|\  
| * 0e83767 (origin/patch1, patch1) Add code comments
| * 90569fe Remove using namespace std and improve style
|/  
* 9cf6c5c Add user name input
* f622b35 Initial commit with bad style Hello World
* a86bf7a initial commit
```
12. Удалите локальную ветку `patch1`.\
`git branch -d patch1` - удаляем локально ветку `patch1`\
`git fetch --prune` - удаляем информацию об удалённой ветке
</details>
<details>
<summary>Part III</summary>

1. Создайте новую локальную ветку `patch2`.

```sh
git branch patch2 // Содание новой ветки
git checkout patch2 // Переход в новую ветку
```

2. Измените code style с помощью утилиты clang-format. Например, используя опцию ```-style=Mozilla```.\
```clang-format -style=Mozilla -i hello_world.cpp``` - изменили формат
3. **commit, push**, создайте pull-request ```patch2 -> master```.
```sh
git commit -am "Apply Mozilla code style with clang-format"
git push --set-upstream origin patch2
```
[patch2 8c4708a] Apply Mozilla code style with clang-format
 1 file changed, 4 insertions(+), 2 deletions(-)
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 10 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 364 bytes | 364.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/vector2281337/lab2/pull/new/patch2
remote: 
To https://github.com/vector2281337/lab2.git
 * [new branch]      patch2 -> patch2
4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.\
Выполняется через сайт, скрины излишни, выполнение пункта можно посмотреть в истории commit'ов репозитория.\
5. Убедитесь, что в pull-request появились конфликтны. Для этого локально выполните **pull + rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты.**
```sh
git checkout master
git pull origin master
git checkout patch2
git rebase master
```
7. Сделайте force push в ветку ```patch2```
```sh
git push origin patch2 --force
```
8. Убедитеcь, что в pull-request пропали конфликтны.
9. Вмержите pull-request `patch2 -> master`.
Делается через сайт, шаги показаны в Part II
