#ifndef org_apache_lucene_search_BooleanQuery$Builder_H
#define org_apache_lucene_search_BooleanQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanQuery$Builder;
        class BooleanClause$Occur;
        class Query;
        class BooleanClause;
        class BooleanQuery;
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

        class BooleanQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_fcde99278bfd3621,
            mid_add_c4e10e38dc4090a9,
            mid_build_e24ba83d47bcdba6,
            mid_setMinimumNumberShouldMatch_43389b1589fe18ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery$Builder(const BooleanQuery$Builder& obj) : ::java::lang::Object(obj) {}

          BooleanQuery$Builder();

          BooleanQuery$Builder add(const ::org::apache::lucene::search::BooleanClause &) const;
          BooleanQuery$Builder add(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::BooleanQuery build() const;
          BooleanQuery$Builder setMinimumNumberShouldMatch(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BooleanQuery$Builder);
        extern PyTypeObject *PY_TYPE(BooleanQuery$Builder);

        class t_BooleanQuery$Builder {
        public:
          PyObject_HEAD
          BooleanQuery$Builder object;
          static PyObject *wrap_Object(const BooleanQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
