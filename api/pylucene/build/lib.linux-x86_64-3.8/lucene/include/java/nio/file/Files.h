#ifndef java_nio_file_Files_H
#define java_nio_file_Files_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class List;
    class Set;
  }
  namespace nio {
    namespace file {
      class DirectoryStream$Filter;
      class LinkOption;
      class DirectoryStream;
      class FileStore;
      class OpenOption;
      class Path;
      class FileVisitor;
      class FileVisitOption;
      class CopyOption;
    }
  }
  namespace lang {
    class String;
    class Class;
    class CharSequence;
    class Iterable;
  }
  namespace io {
    class BufferedWriter;
    class OutputStream;
    class InputStream;
    class IOException;
    class BufferedReader;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Files : public ::java::lang::Object {
       public:
        enum {
          mid_copy_1ce5fcbaf497c1f4,
          mid_copy_acc2dda8763629b6,
          mid_copy_73b793adb2a0959b,
          mid_createLink_a007776f4ba96b7d,
          mid_delete_636077fee54d306c,
          mid_deleteIfExists_64eb4236a3fd11dc,
          mid_exists_b30fba9b49d74698,
          mid_getAttribute_acf5b9e5774c303c,
          mid_getFileStore_4291c01fb8c50fb5,
          mid_isDirectory_b30fba9b49d74698,
          mid_isExecutable_64eb4236a3fd11dc,
          mid_isHidden_64eb4236a3fd11dc,
          mid_isReadable_64eb4236a3fd11dc,
          mid_isRegularFile_b30fba9b49d74698,
          mid_isSameFile_71d92326f774123b,
          mid_isSymbolicLink_64eb4236a3fd11dc,
          mid_isWritable_64eb4236a3fd11dc,
          mid_move_73b793adb2a0959b,
          mid_newBufferedReader_598d43f775b2ea0b,
          mid_newBufferedWriter_be11e100b0707ab0,
          mid_newDirectoryStream_e463df58c06cb457,
          mid_newDirectoryStream_3edf1df331543f1e,
          mid_newDirectoryStream_c3863fde2759045a,
          mid_newInputStream_eae1bbbcf5e0bd31,
          mid_newOutputStream_b223ae03e1fc4f19,
          mid_notExists_b30fba9b49d74698,
          mid_probeContentType_8ba69a4fe6ea5d1e,
          mid_readAllBytes_315a3a3a8cacfd7f,
          mid_readAllLines_1bf3c5020c10b7f6,
          mid_readAttributes_f668fccecbbae022,
          mid_readSymbolicLink_0068ab41d9b1e17a,
          mid_setAttribute_98cb7374bfce16b2,
          mid_size_dfac67e39c9df3b8,
          mid_walkFileTree_da3584ca971132a7,
          mid_walkFileTree_52fe478a9c8f8c64,
          mid_write_4659732dc6d2e040,
          mid_write_14a29a9df82f2216,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Files(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Files(const Files& obj) : ::java::lang::Object(obj) {}

        static jlong copy(const ::java::nio::file::Path &, const ::java::io::OutputStream &);
        static jlong copy(const ::java::io::InputStream &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path copy(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path createLink(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static void delete$(const ::java::nio::file::Path &);
        static jboolean deleteIfExists(const ::java::nio::file::Path &);
        static jboolean exists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::Object getAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::nio::file::FileStore getFileStore(const ::java::nio::file::Path &);
        static jboolean isDirectory(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isExecutable(const ::java::nio::file::Path &);
        static jboolean isHidden(const ::java::nio::file::Path &);
        static jboolean isReadable(const ::java::nio::file::Path &);
        static jboolean isRegularFile(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isSameFile(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static jboolean isSymbolicLink(const ::java::nio::file::Path &);
        static jboolean isWritable(const ::java::nio::file::Path &);
        static ::java::nio::file::Path move(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::io::BufferedReader newBufferedReader(const ::java::nio::file::Path &);
        static ::java::io::BufferedWriter newBufferedWriter(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::lang::String &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::nio::file::DirectoryStream$Filter &);
        static ::java::io::InputStream newInputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::io::OutputStream newOutputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static jboolean notExists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::String probeContentType(const ::java::nio::file::Path &);
        static JArray< jbyte > readAllBytes(const ::java::nio::file::Path &);
        static ::java::util::List readAllLines(const ::java::nio::file::Path &);
        static ::java::util::Map readAttributes(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::nio::file::Path readSymbolicLink(const ::java::nio::file::Path &);
        static ::java::nio::file::Path setAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const ::java::lang::Object &, const JArray< ::java::nio::file::LinkOption > &);
        static jlong size(const ::java::nio::file::Path &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::util::Set &, jint, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const JArray< jbyte > &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const ::java::lang::Iterable &, const JArray< ::java::nio::file::OpenOption > &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Files);
      extern PyTypeObject *PY_TYPE(Files);

      class t_Files {
      public:
        PyObject_HEAD
        Files object;
        static PyObject *wrap_Object(const Files&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
