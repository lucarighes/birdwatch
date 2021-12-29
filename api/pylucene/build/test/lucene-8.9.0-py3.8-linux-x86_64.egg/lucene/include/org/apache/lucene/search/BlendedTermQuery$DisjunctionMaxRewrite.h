#ifndef org_apache_lucene_search_BlendedTermQuery$DisjunctionMaxRewrite_H
#define org_apache_lucene_search_BlendedTermQuery$DisjunctionMaxRewrite_H

#include "org/apache/lucene/search/BlendedTermQuery$RewriteMethod.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BlendedTermQuery$DisjunctionMaxRewrite : public ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod {
         public:
          enum {
            mid_init$_8e1d952dd65cdc3a,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_1e167f3b9bc63b74,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlendedTermQuery$DisjunctionMaxRewrite(jobject obj) : ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery$DisjunctionMaxRewrite(const BlendedTermQuery$DisjunctionMaxRewrite& obj) : ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod(obj) {}

          BlendedTermQuery$DisjunctionMaxRewrite(jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery$DisjunctionMaxRewrite);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery$DisjunctionMaxRewrite);

        class t_BlendedTermQuery$DisjunctionMaxRewrite {
        public:
          PyObject_HEAD
          BlendedTermQuery$DisjunctionMaxRewrite object;
          static PyObject *wrap_Object(const BlendedTermQuery$DisjunctionMaxRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
