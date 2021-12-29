#ifndef java_nio_file_FileSystem_H
#define java_nio_file_FileSystem_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class FileStore;
      class PathMatcher;
      class Path;
      class WatchService;
    }
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileSystem : public ::java::lang::Object {
       public:
        enum {
          mid_close_f2cc1bce94666404,
          mid_getFileStores_7a21c115c1b038aa,
          mid_getPath_561e2076b428372b,
          mid_getPathMatcher_6fc8f7e1b59b4555,
          mid_getRootDirectories_7a21c115c1b038aa,
          mid_getSeparator_db9b55ba01e03e4b,
          mid_isOpen_8454bd5aa23fd11e,
          mid_isReadOnly_8454bd5aa23fd11e,
          mid_newWatchService_2928d4b3aa01c80e,
          mid_supportedFileAttributeViews_7dcf4034c6d1a92a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileSystem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileSystem(const FileSystem& obj) : ::java::lang::Object(obj) {}

        void close() const;
        ::java::lang::Iterable getFileStores() const;
        ::java::nio::file::Path getPath(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
        ::java::nio::file::PathMatcher getPathMatcher(const ::java::lang::String &) const;
        ::java::lang::Iterable getRootDirectories() const;
        ::java::lang::String getSeparator() const;
        jboolean isOpen() const;
        jboolean isReadOnly() const;
        ::java::nio::file::WatchService newWatchService() const;
        ::java::util::Set supportedFileAttributeViews() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileSystem);
      extern PyTypeObject *PY_TYPE(FileSystem);

      class t_FileSystem {
      public:
        PyObject_HEAD
        FileSystem object;
        static PyObject *wrap_Object(const FileSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
