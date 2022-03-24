#!/bin/sh

git pull origin master
git add .
git commit -m "Add new contest"
git push -u origin master
