#ifndef org_apache_lucene_search_AutomatonQuery_H
#define org_apache_lucene_search_AutomatonQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class Accountable;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class QueryVisitor;
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

        class AutomatonQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_67b411381b8c08a1,
            mid_init$_85f591863eff6e56,
            mid_init$_3ef4df68d91bf1c8,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getAutomaton_d9f5c446a29ec187,
            mid_hashCode_9972fcc56b44e79d,
            mid_isAutomatonBinary_8454bd5aa23fd11e,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_getTermsEnum_e75dd6286a51776d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonQuery(const AutomatonQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jint);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jint, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
          jint hashCode() const;
          jboolean isAutomatonBinary() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(AutomatonQuery);
        extern PyTypeObject *PY_TYPE(AutomatonQuery);

        class t_AutomatonQuery {
        public:
          PyObject_HEAD
          AutomatonQuery object;
          static PyObject *wrap_Object(const AutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
