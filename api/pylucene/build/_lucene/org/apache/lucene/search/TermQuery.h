#ifndef org_apache_lucene_search_TermQuery_H
#define org_apache_lucene_search_TermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace index {
        class Term;
        class TermStates;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_32784f9c0ee449e6,
            mid_init$_98ee6fb07d5bdf57,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getTerm_5e734526802c58d9,
            mid_getTermStates_656ab7adb8fbc7f7,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermQuery(const TermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermQuery(const ::org::apache::lucene::index::Term &);
          TermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getTerm() const;
          ::org::apache::lucene::index::TermStates getTermStates() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(TermQuery);
        extern PyTypeObject *PY_TYPE(TermQuery);

        class t_TermQuery {
        public:
          PyObject_HEAD
          TermQuery object;
          static PyObject *wrap_Object(const TermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
