#ifndef org_apache_lucene_search_PrefixQuery_H
#define org_apache_lucene_search_PrefixQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PrefixQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_32784f9c0ee449e6,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getPrefix_5e734526802c58d9,
            mid_hashCode_9972fcc56b44e79d,
            mid_toAutomaton_dc87bd8740894cf4,
            mid_toString_9bfa75c9f141b67f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixQuery(const PrefixQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          PrefixQuery(const ::org::apache::lucene::index::Term &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getPrefix() const;
          jint hashCode() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &);
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
        extern PyType_Def PY_TYPE_DEF(PrefixQuery);
        extern PyTypeObject *PY_TYPE(PrefixQuery);

        class t_PrefixQuery {
        public:
          PyObject_HEAD
          PrefixQuery object;
          static PyObject *wrap_Object(const PrefixQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
