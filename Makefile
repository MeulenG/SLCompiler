all:
	dotnet build

fast:
	dotnet run HaxorParser/HaxorParser.cs HelloWorld.haxor

clean:
	dotnet clean
	rm ./bin -r
	rm ./obj -r
	rm -rf .vscode/targets.log
	rm -rf .vscode/dryrun.log
	rm -rf .vscode/configurationCache.log