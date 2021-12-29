#ifndef java_nio_file_Path_H
#define java_nio_file_Path_H

#include "java/lang/Comparable.h"

namespace java {
  namespace nio {
    namespace file {
      class LinkOption;
      class FileSystem;
      class Watchable;
      class WatchKey;
      class Path;
      class WatchEvent$Kind;
      class WatchService;
      class WatchEvent$Modifier;
    }
  }
  namespace lang {
    class Class;
    class Object;
    class Iterable;
    class String;
  }
  namespace util {
    class Iterator;
  }
  namespace io {
    class File;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Path : public ::java::lang::Comparable {
       public:
        enum {
          mid_compareTo_71facc4e9e47eb6d,
          mid_endsWith_145b2d0af0c06b93,
          mid_endsWith_64eb4236a3fd11dc,
          mid_equals_8b72f2dcdde6fd1d,
          mid_getFileName_7f94726bf5834528,
          mid_getFileSystem_fb4bd28848b3c56b,
          mid_getName_66c670d6f466a442,
          mid_getNameCount_9972fcc56b44e79d,
          mid_getParent_7f94726bf5834528,
          mid_getRoot_7f94726bf5834528,
          mid_hashCode_9972fcc56b44e79d,
          mid_isAbsolute_8454bd5aa23fd11e,
          mid_iterator_233a192dadb0917d,
          mid_normalize_7f94726bf5834528,
          mid_register_6cfc9d5463561f8d,
          mid_register_b4bf47bf477ac77c,
          mid_relativize_0068ab41d9b1e17a,
          mid_resolve_f2d24b721e336119,
          mid_resolve_0068ab41d9b1e17a,
          mid_resolveSibling_f2d24b721e336119,
          mid_resolveSibling_0068ab41d9b1e17a,
          mid_startsWith_145b2d0af0c06b93,
          mid_startsWith_64eb4236a3fd11dc,
          mid_subpath_577c5679cffa723d,
          mid_toAbsolutePath_7f94726bf5834528,
          mid_toFile_117a3aa19a964e9c,
          mid_toRealPath_d7713122873943ce,
          mid_toString_db9b55ba01e03e4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Path(jobject obj) : ::java::lang::Comparable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Path(const Path& obj) : ::java::lang::Comparable(obj) {}

        jint compareTo(const Path &) const;
        jboolean endsWith(const ::java::lang::String &) const;
        jboolean endsWith(const Path &) const;
        jboolean equals(const ::java::lang::Object &) const;
        Path getFileName() const;
        ::java::nio::file::FileSystem getFileSystem() const;
        Path getName(jint) const;
        jint getNameCount() const;
        Path getParent() const;
        Path getRoot() const;
        jint hashCode() const;
        jboolean isAbsolute() const;
        ::java::util::Iterator iterator() const;
        Path normalize() const;
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &) const;
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &, const JArray< ::java::nio::file::WatchEvent$Modifier > &) const;
        Path relativize(const Path &) const;
        Path resolve(const ::java::lang::String &) const;
        Path resolve(const Path &) const;
        Path resolveSibling(const ::java::lang::String &) const;
        Path resolveSibling(const Path &) const;
        jboolean startsWith(const ::java::lang::String &) const;
        jboolean startsWith(const Path &) const;
        Path subpath(jint, jint) const;
        Path toAbsolutePath() const;
        ::java::io::File toFile() const;
        Path toRealPath(const JArray< ::java::nio::file::LinkOption > &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Path);
      extern PyTypeObject *PY_TYPE(Path);

      class t_Path {
      public:
        PyObject_HEAD
        Path object;
        static PyObject *wrap_Object(const Path&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
