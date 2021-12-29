#ifndef org_apache_lucene_search_DocValuesTermsQuery_H
#define org_apache_lucene_search_DocValuesTermsQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace index {
        class PrefixCodedTerms;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesTermsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_e15507bf45c25446,
            mid_init$_890b82217556b281,
            mid_init$_1933a485e060f4cd,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getField_db9b55ba01e03e4b,
            mid_getTerms_3329e7cdc497b63a,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesTermsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesTermsQuery(const DocValuesTermsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DocValuesTermsQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          DocValuesTermsQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          DocValuesTermsQuery(const ::java::lang::String &, const ::java::util::Collection &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::index::PrefixCodedTerms getTerms() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesTermsQuery);
        extern PyTypeObject *PY_TYPE(DocValuesTermsQuery);

        class t_DocValuesTermsQuery {
        public:
          PyObject_HEAD
          DocValuesTermsQuery object;
          static PyObject *wrap_Object(const DocValuesTermsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
