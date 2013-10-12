all:
	python robotpy tests/test.py
	sudo apt-get install python-pip
	pip install pyinstaller
	pyinstaller robotpy/__main__.py -y --onefile
	./dist/__main__/__main__ tests/test.py
