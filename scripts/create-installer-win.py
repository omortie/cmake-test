import os

os.chdir('../installer')
print(os.system('MSBuild.exe installer.sln /property:Configuration=Release /property:Platform=x64'))
