
import os, sys

if sys.platform == 'win32':
  import jcc
from . import _lucene

__module_dir__ = os.path.abspath(os.path.dirname(__file__))

class JavaError(Exception):
  def getJavaException(self):
    return self.args[0]
  def __str__(self):
    writer = StringWriter()
    self.getJavaException().printStackTrace(PrintWriter(writer))
    return "\n".join((str(super(JavaError, self)), "    Java stacktrace:", str(writer)))

class InvalidArgsError(Exception):
  pass

_lucene._set_exception_types(JavaError, InvalidArgsError)

VERSION = "8.9.0"
CLASSPATH = [os.path.join(__module_dir__, "lucene-core-8.9.0.jar"), os.path.join(__module_dir__, "lucene-analyzers-common-8.9.0.jar"), os.path.join(__module_dir__, "lucene-backward-codecs-8.9.0.jar"), os.path.join(__module_dir__, "lucene-classification-8.9.0.jar"), os.path.join(__module_dir__, "lucene-codecs-8.9.0.jar"), os.path.join(__module_dir__, "lucene-expressions-8.9.0.jar"), os.path.join(__module_dir__, "extensions.jar"), os.path.join(__module_dir__, "lucene-facet-8.9.0.jar"), os.path.join(__module_dir__, "lucene-grouping-8.9.0.jar"), os.path.join(__module_dir__, "lucene-highlighter-8.9.0.jar"), os.path.join(__module_dir__, "lucene-join-8.9.0.jar"), os.path.join(__module_dir__, "lucene-analyzers-kuromoji-8.9.0.jar"), os.path.join(__module_dir__, "lucene-memory-8.9.0.jar"), os.path.join(__module_dir__, "lucene-misc-8.9.0.jar"), os.path.join(__module_dir__, "lucene-analyzers-nori-8.9.0.jar"), os.path.join(__module_dir__, "lucene-queries-8.9.0.jar"), os.path.join(__module_dir__, "lucene-queryparser-8.9.0.jar"), os.path.join(__module_dir__, "lucene-sandbox-8.9.0.jar"), os.path.join(__module_dir__, "lucene-spatial3d-8.9.0.jar"), os.path.join(__module_dir__, "lucene-analyzers-stempel-8.9.0.jar"), os.path.join(__module_dir__, "lucene-suggest-8.9.0.jar"), os.path.join(__module_dir__, "antlr4-runtime-4.5.1-1.jar"), os.path.join(__module_dir__, "asm-8.0.1.jar"), os.path.join(__module_dir__, "asm-commons-8.0.1.jar"), os.path.join(__module_dir__, "hppc-0.8.1.jar")]
CLASSPATH = os.pathsep.join(CLASSPATH)
_lucene.CLASSPATH = CLASSPATH
_lucene._set_function_self(_lucene.initVM, _lucene)

from ._lucene import *
from java.io import PrintWriter, StringWriter
