#ifndef org_apache_pylucene_analysis_PythonTokenStream_H
#define org_apache_pylucene_analysis_PythonTokenStream_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonTokenStream : public ::org::apache::lucene::analysis::TokenStream {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_end_f2cc1bce94666404,
            mid_finalize_f2cc1bce94666404,
            mid_incrementToken_8454bd5aa23fd11e,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_reset_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenStream(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTokenStream(const PythonTokenStream& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

          PythonTokenStream();

          void close() const;
          void end() const;
          void finalize() const;
          jboolean incrementToken() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonTokenStream);
        extern PyTypeObject *PY_TYPE(PythonTokenStream);

        class t_PythonTokenStream {
        public:
          PyObject_HEAD
          PythonTokenStream object;
          static PyObject *wrap_Object(const PythonTokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
