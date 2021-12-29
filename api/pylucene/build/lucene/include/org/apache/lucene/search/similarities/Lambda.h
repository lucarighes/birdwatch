#ifndef org_apache_lucene_search_similarities_Lambda_H
#define org_apache_lucene_search_similarities_Lambda_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        namespace similarities {
          class BasicStats;
        }
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

          class Lambda : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_explain_09b827167a29e9eb,
              mid_lambda_773a7ae7d4cf3ed2,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lambda(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lambda(const Lambda& obj) : ::java::lang::Object(obj) {}

            Lambda();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &) const;
            jfloat lambda(const ::org::apache::lucene::search::similarities::BasicStats &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lambda);
          extern PyTypeObject *PY_TYPE(Lambda);

          class t_Lambda {
          public:
            PyObject_HEAD
            Lambda object;
            static PyObject *wrap_Object(const Lambda&);
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
