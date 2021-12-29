#ifndef org_apache_lucene_search_BlendedTermQuery$RewriteMethod_H
#define org_apache_lucene_search_BlendedTermQuery$RewriteMethod_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BlendedTermQuery$RewriteMethod : public ::java::lang::Object {
         public:
          enum {
            mid_rewrite_1e167f3b9bc63b74,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlendedTermQuery$RewriteMethod(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery$RewriteMethod(const BlendedTermQuery$RewriteMethod& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::Query rewrite(const JArray< ::org::apache::lucene::search::Query > &) const;
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
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery$RewriteMethod);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery$RewriteMethod);

        class t_BlendedTermQuery$RewriteMethod {
        public:
          PyObject_HEAD
          BlendedTermQuery$RewriteMethod object;
          static PyObject *wrap_Object(const BlendedTermQuery$RewriteMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
