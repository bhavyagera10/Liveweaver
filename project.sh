#!/bin/bash
echo "hi good morning" > bg.txt


echo -c bg.txt | md5sum >new.txt

