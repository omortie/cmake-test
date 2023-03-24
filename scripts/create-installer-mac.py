import os
import shutil

os.mkdir('../bin/Release/mat.app')
os.mkdir('../bin/Release/mat.app/Contents')
os.mkdir('../bin/Release/mat.app/Contents/MacOs')
os.mkdir('../bin/Release/mat.app/Contents/Frameworks')

shutil.copy('../bin/Release/mat', '../bin/Release/mat.app/Contents/MacOs')
os.system('cp -R ../bin/Release/libcgcustommath.dylib ../bin/Release/mat.app/Contents/Frameworks')

print(os.system('install_name_tool -change @rpath/libcgcustommath.dylib @executable_path/../Frameworks/libcgcustommath.dylib ../bin/Release/mat.app/Contents/MacOs/mat '))

os.system('rm ../bin/Release/mat')
os.system('rm ../bin/Release/libcgcustommath.dylib')

print(os.system('../3rdparty/create-dmg/create-dmg ../bin/installer.dmg ../bin/Release'))

