#ifndef org_apache_lucene_util_CommandLineUtil_H
#define org_apache_lucene_util_CommandLineUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FSDirectory;
        class Directory;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassNotFoundException;
    class ReflectiveOperationException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CommandLineUtil : public ::java::lang::Object {
         public:
          enum {
            mid_loadDirectoryClass_337d52b895d55b49,
            mid_loadFSDirectoryClass_337d52b895d55b49,
            mid_newFSDirectory_86d31b1b0d0a6ca3,
            mid_newFSDirectory_311d4663f1c13887,
            mid_newFSDirectory_beb39a8f08718a2e,
            mid_newFSDirectory_788f2ff59a70d291,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommandLineUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommandLineUtil(const CommandLineUtil& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::Class loadDirectoryClass(const ::java::lang::String &);
          static ::java::lang::Class loadFSDirectoryClass(const ::java::lang::String &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(CommandLineUtil);
        extern PyTypeObject *PY_TYPE(CommandLineUtil);

        class t_CommandLineUtil {
        public:
          PyObject_HEAD
          CommandLineUtil object;
          static PyObject *wrap_Object(const CommandLineUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
