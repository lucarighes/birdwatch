#ifndef org_apache_lucene_store_RAFDirectory_H
#define org_apache_lucene_store_RAFDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexInput;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
      namespace store {

        class RAFDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_636077fee54d306c,
            mid_init$_71c9ab2266463084,
            mid_openInput_cc9a9aabe8db93df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAFDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RAFDirectory(const RAFDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          RAFDirectory(const ::java::nio::file::Path &);
          RAFDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);

          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(RAFDirectory);
        extern PyTypeObject *PY_TYPE(RAFDirectory);

        class t_RAFDirectory {
        public:
          PyObject_HEAD
          RAFDirectory object;
          static PyObject *wrap_Object(const RAFDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
