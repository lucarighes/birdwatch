#ifndef org_apache_lucene_search_similarities_BasicModelG_H
#define org_apache_lucene_search_similarities_BasicModelG_H

#include "org/apache/lucene/search/similarities/BasicModel.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
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
        namespace similarities {

          class BasicModelG : public ::org::apache::lucene::search::similarities::BasicModel {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_explain_77a68ba236144920,
              mid_score_761ab1c432346fd0,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicModelG(jobject obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicModelG(const BasicModelG& obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {}

            BasicModelG();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jdouble score(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(BasicModelG);
          extern PyTypeObject *PY_TYPE(BasicModelG);

          class t_BasicModelG {
          public:
            PyObject_HEAD
            BasicModelG object;
            static PyObject *wrap_Object(const BasicModelG&);
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
