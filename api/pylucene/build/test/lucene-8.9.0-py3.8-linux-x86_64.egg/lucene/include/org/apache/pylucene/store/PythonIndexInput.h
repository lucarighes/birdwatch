#ifndef org_apache_pylucene_store_PythonIndexInput_H
#define org_apache_pylucene_store_PythonIndexInput_H

#include "org/apache/lucene/store/BufferedIndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
      }
    }
    namespace pylucene {
      namespace store {
        class PythonIndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexInput : public ::org::apache::lucene::store::BufferedIndexInput {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_605be02e51b1fbf8,
            mid_init$_3fb1dae8d4037984,
            mid_clone_93fa6f10fba0eb8c,
            mid_close_f2cc1bce94666404,
            mid_finalize_f2cc1bce94666404,
            mid_length_2e5ae9edcb9b072f,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_readInternal_bbbb62d8b24c0c26,
            mid_seekInternal_9c778c9bce6694df,
            mid_readInternal_d159d3a3e7127e81,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexInput(jobject obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexInput(const PythonIndexInput& obj) : ::org::apache::lucene::store::BufferedIndexInput(obj) {}

          PythonIndexInput(const ::java::lang::String &);
          PythonIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          PythonIndexInput(const ::java::lang::String &, jint);

          PythonIndexInput clone() const;
          void close() const;
          void finalize() const;
          jlong length() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          JArray< jbyte > readInternal(jint, jlong) const;
          void seekInternal(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexInput);
        extern PyTypeObject *PY_TYPE(PythonIndexInput);

        class t_PythonIndexInput {
        public:
          PyObject_HEAD
          PythonIndexInput object;
          static PyObject *wrap_Object(const PythonIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
