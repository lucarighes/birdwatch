#ifndef org_apache_lucene_search_PhraseWildcardQuery_H
#define org_apache_lucene_search_PhraseWildcardQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
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

        class PhraseWildcardQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getField_db9b55ba01e03e4b,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_bb52f19a8254555c,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_createTermsData_07b42928ada57c3a,
            mid_earlyStopWeight_f9ac4832bc7a84ae,
            mid_noMatchWeight_f9ac4832bc7a84ae,
            mid_collectSingleTermData_cf7ba295cc9ae199,
            mid_collectMultiTermData_5b9c799ec0297093,
            mid_shouldOptimizeSegments_8454bd5aa23fd11e,
            mid_createTermStatsMap_9e211369ca0f12dd,
            mid_createTermsEnum_a3d96f9a8e297e2a,
            mid_collectMultiTermDataForSegment_b0dd7fb1c20eb221,
            mid_collectMultiTermStats_a25238f346df13ad,
            mid_checkTermsHavePositions_4b02001141791c28,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWildcardQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWildcardQuery(const PhraseWildcardQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery);
        extern PyTypeObject *PY_TYPE(PhraseWildcardQuery);

        class t_PhraseWildcardQuery {
        public:
          PyObject_HEAD
          PhraseWildcardQuery object;
          static PyObject *wrap_Object(const PhraseWildcardQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
