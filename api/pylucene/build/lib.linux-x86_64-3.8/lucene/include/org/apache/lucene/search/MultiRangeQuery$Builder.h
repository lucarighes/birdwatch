#ifndef org_apache_lucene_search_MultiRangeQuery$Builder_H
#define org_apache_lucene_search_MultiRangeQuery$Builder_H

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
        class MultiRangeQuery$Builder;
        class MultiRangeQuery;
        class MultiRangeQuery$RangeClause;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiRangeQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_08af6957f9159d4d,
            mid_add_d4eac46ff1f90804,
            mid_add_8e0a30849900f8c4,
            mid_build_03a96fdd31aca883,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiRangeQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiRangeQuery$Builder(const MultiRangeQuery$Builder& obj) : ::java::lang::Object(obj) {}

          MultiRangeQuery$Builder(const ::java::lang::String &, jint, jint);

          MultiRangeQuery$Builder add(const ::org::apache::lucene::search::MultiRangeQuery$RangeClause &) const;
          MultiRangeQuery$Builder add(const JArray< jbyte > &, const JArray< jbyte > &) const;
          ::org::apache::lucene::search::MultiRangeQuery build() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiRangeQuery$Builder);
        extern PyTypeObject *PY_TYPE(MultiRangeQuery$Builder);

        class t_MultiRangeQuery$Builder {
        public:
          PyObject_HEAD
          MultiRangeQuery$Builder object;
          static PyObject *wrap_Object(const MultiRangeQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
