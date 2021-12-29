#ifndef org_apache_lucene_search_TermRangeQuery_H
#define org_apache_lucene_search_TermRangeQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class TermRangeQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermRangeQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_209355633dd0d5dd,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getLowerTerm_7af2ea2e37ce82b8,
            mid_getUpperTerm_7af2ea2e37ce82b8,
            mid_hashCode_9972fcc56b44e79d,
            mid_includesLower_8454bd5aa23fd11e,
            mid_includesUpper_8454bd5aa23fd11e,
            mid_newStringRange_b38decc857e9f48f,
            mid_toAutomaton_0eed7689629a4464,
            mid_toString_9bfa75c9f141b67f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermRangeQuery(const TermRangeQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef getLowerTerm() const;
          ::org::apache::lucene::util::BytesRef getUpperTerm() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(TermRangeQuery);
        extern PyTypeObject *PY_TYPE(TermRangeQuery);

        class t_TermRangeQuery {
        public:
          PyObject_HEAD
          TermRangeQuery object;
          static PyObject *wrap_Object(const TermRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
