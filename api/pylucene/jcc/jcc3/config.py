
INCLUDES=['/usr/lib/jvm/java-8-oracle/include', '/usr/lib/jvm/java-8-oracle/include/linux']
CFLAGS=['-fno-strict-aliasing', '-Wno-write-strings']
DEBUG_CFLAGS=['-O0', '-g', '-DDEBUG']
LFLAGS=['-L/usr/lib/jvm/java-8-oracle/jre/lib/amd64', '-ljava', '-L/usr/lib/jvm/java-8-oracle/jre/lib/amd64/server', '-ljvm', '-Wl,-rpath=/usr/lib/jvm/java-8-oracle/jre/lib/amd64:/usr/lib/jvm/java-8-oracle/jre/lib/amd64/server']
IMPLIB_LFLAGS=[]
SHARED=True
VERSION="3.10"
