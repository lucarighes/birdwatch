#ifndef org_apache_lucene_search_similarities_AfterEffectL_H
#define org_apache_lucene_search_similarities_AfterEffectL_H

#include "org/apache/lucene/search/similarities/AfterEffect.h"

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

          class AfterEffectL : public ::org::apache::lucene::search::similarities::AfterEffect {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_explain_9724c62abce55cf4,
              mid_scoreTimes1pTfn_3f1239f1e5e20981,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AfterEffectL(jobject obj) : ::org::apache::lucene::search::similarities::AfterEffect(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AfterEffectL(const AfterEffectL& obj) : ::org::apache::lucene::search::similarities::AfterEffect(obj) {}

            AfterEffectL();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble) const;
            jdouble scoreTimes1pTfn(const ::org::apache::lucene::search::similarities::BasicStats &) const;
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
          extern PyType_Def PY_TYPE_DEF(AfterEffectL);
          extern PyTypeObject *PY_TYPE(AfterEffectL);

          class t_AfterEffectL {
          public:
            PyObject_HEAD
            AfterEffectL object;
            static PyObject *wrap_Object(const AfterEffectL&);
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
