all:
	clang++ main.cpp HaxorLexer/HaxorLexer.cpp
 
clean:
	rm -rf a.out
	rm -rf .vscode/targets.log
	rm -rf .vscode/dryrun.log
	rm -rf .vscode/configurationCache.log