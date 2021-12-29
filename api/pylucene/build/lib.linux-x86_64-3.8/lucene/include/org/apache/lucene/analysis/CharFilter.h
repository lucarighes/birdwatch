#ifndef org_apache_lucene_analysis_CharFilter_H
#define org_apache_lucene_analysis_CharFilter_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharFilter : public ::java::io::Reader {
         public:
          enum {
            mid_init$_b2f3c57f5e6eb3f2,
            mid_close_f2cc1bce94666404,
            mid_correctOffset_1e143afe1894d213,
            mid_correct_1e143afe1894d213,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharFilter(jobject obj) : ::java::io::Reader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharFilter(const CharFilter& obj) : ::java::io::Reader(obj) {}

          CharFilter(const ::java::io::Reader &);

          void close() const;
          jint correctOffset(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharFilter);
        extern PyTypeObject *PY_TYPE(CharFilter);

        class t_CharFilter {
        public:
          PyObject_HEAD
          CharFilter object;
          static PyObject *wrap_Object(const CharFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
