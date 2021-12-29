#ifndef org_apache_lucene_search_TermStatistics_H
#define org_apache_lucene_search_TermStatistics_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3ec8c7dd8c4e12f4,
            mid_docFreq_2e5ae9edcb9b072f,
            mid_term_7af2ea2e37ce82b8,
            mid_toString_db9b55ba01e03e4b,
            mid_totalTermFreq_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStatistics(const TermStatistics& obj) : ::java::lang::Object(obj) {}

          TermStatistics(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

          jlong docFreq() const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TermStatistics);
        extern PyTypeObject *PY_TYPE(TermStatistics);

        class t_TermStatistics {
        public:
          PyObject_HEAD
          TermStatistics object;
          static PyObject *wrap_Object(const TermStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
