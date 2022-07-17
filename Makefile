all:
	dotnet build 
clean:
	rm -rf /bin
	rm -rf /.vscode/targets.log
	rm -rf /.vscode/dryrun.log
	rm -rf /.vscode/configurationCache.log