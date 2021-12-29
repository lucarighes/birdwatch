#ifndef org_apache_lucene_search_similarities_IndependenceStandardized_H
#define org_apache_lucene_search_similarities_IndependenceStandardized_H

#include "org/apache/lucene/search/similarities/Independence.h"

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
        namespace similarities {

          class IndependenceStandardized : public ::org::apache::lucene::search::similarities::Independence {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_score_990b512583b70d91,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndependenceStandardized(jobject obj) : ::org::apache::lucene::search::similarities::Independence(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndependenceStandardized(const IndependenceStandardized& obj) : ::org::apache::lucene::search::similarities::Independence(obj) {}

            IndependenceStandardized();

            jdouble score(jdouble, jdouble) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(IndependenceStandardized);
          extern PyTypeObject *PY_TYPE(IndependenceStandardized);

          class t_IndependenceStandardized {
          public:
            PyObject_HEAD
            IndependenceStandardized object;
            static PyObject *wrap_Object(const IndependenceStandardized&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
