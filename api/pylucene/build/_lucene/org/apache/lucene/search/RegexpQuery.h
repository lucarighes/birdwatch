#ifndef org_apache_lucene_search_RegexpQuery_H
#define org_apache_lucene_search_RegexpQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        namespace automaton {
          class AutomatonProvider;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class RegexpQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_32784f9c0ee449e6,
            mid_init$_d948bda7346ba4b9,
            mid_init$_2d22f4c380c508c4,
            mid_init$_f35bd2dd98d84073,
            mid_init$_f72ae8286786d0c4,
            mid_init$_b5886f275db663d5,
            mid_getRegexp_5e734526802c58d9,
            mid_toString_9bfa75c9f141b67f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegexpQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegexpQuery(const RegexpQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          RegexpQuery(const ::org::apache::lucene::index::Term &);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint);

          ::org::apache::lucene::index::Term getRegexp() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(RegexpQuery);
        extern PyTypeObject *PY_TYPE(RegexpQuery);

        class t_RegexpQuery {
        public:
          PyObject_HEAD
          RegexpQuery object;
          static PyObject *wrap_Object(const RegexpQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
