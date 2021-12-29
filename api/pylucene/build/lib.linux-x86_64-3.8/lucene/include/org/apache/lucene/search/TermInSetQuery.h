#ifndef org_apache_lucene_search_TermInSetQuery_H
#define org_apache_lucene_search_TermInSetQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class PrefixCodedTerms;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

        class TermInSetQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_890b82217556b281,
            mid_init$_1933a485e060f4cd,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getTermData_3329e7cdc497b63a,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_rewrite_bb52f19a8254555c,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermInSetQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermInSetQuery(const TermInSetQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermInSetQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          TermInSetQuery(const ::java::lang::String &, const ::java::util::Collection &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Collection getChildResources() const;
          ::org::apache::lucene::index::PrefixCodedTerms getTermData() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermInSetQuery);
        extern PyTypeObject *PY_TYPE(TermInSetQuery);

        class t_TermInSetQuery {
        public:
          PyObject_HEAD
          TermInSetQuery object;
          static PyObject *wrap_Object(const TermInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
