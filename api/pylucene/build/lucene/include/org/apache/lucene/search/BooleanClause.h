#ifndef org_apache_lucene_search_BooleanClause_H
#define org_apache_lucene_search_BooleanClause_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
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

        class BooleanClause : public ::java::lang::Object {
         public:
          enum {
            mid_init$_02bdd895d501317b,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getOccur_d2a892ed3bcf0bb6,
            mid_getQuery_cbf839a480265450,
            mid_hashCode_9972fcc56b44e79d,
            mid_isProhibited_8454bd5aa23fd11e,
            mid_isRequired_8454bd5aa23fd11e,
            mid_isScoring_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanClause(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanClause(const BooleanClause& obj) : ::java::lang::Object(obj) {}

          BooleanClause(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::BooleanClause$Occur &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::BooleanClause$Occur getOccur() const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
          jboolean isProhibited() const;
          jboolean isRequired() const;
          jboolean isScoring() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(BooleanClause);
        extern PyTypeObject *PY_TYPE(BooleanClause);

        class t_BooleanClause {
        public:
          PyObject_HEAD
          BooleanClause object;
          static PyObject *wrap_Object(const BooleanClause&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
