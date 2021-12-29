#ifndef org_apache_lucene_queries_CommonTermsQuery_H
#define org_apache_lucene_queries_CommonTermsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class LeafReaderContext;
        class Term;
        class TermStates;
      }
      namespace search {
        class BooleanClause$Occur;
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
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        class CommonTermsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_fccc27bacc7b11b8,
            mid_add_32784f9c0ee449e6,
            mid_collectTermStates_ec447f5073f01972,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getHighFreqBoost_58aec2b64dff50c8,
            mid_getHighFreqMinimumNumberShouldMatch_58aec2b64dff50c8,
            mid_getHighFreqOccur_d2a892ed3bcf0bb6,
            mid_getLowFreqBoost_58aec2b64dff50c8,
            mid_getLowFreqMinimumNumberShouldMatch_58aec2b64dff50c8,
            mid_getLowFreqOccur_d2a892ed3bcf0bb6,
            mid_getMaxTermFrequency_58aec2b64dff50c8,
            mid_getTerms_49ec78390f08338a,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_bb52f19a8254555c,
            mid_setHighFreqMinimumNumberShouldMatch_8e1d952dd65cdc3a,
            mid_setLowFreqMinimumNumberShouldMatch_8e1d952dd65cdc3a,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_newTermQuery_00ce07860d4082e8,
            mid_calcLowFreqMinimumNumberShouldMatch_1e143afe1894d213,
            mid_calcHighFreqMinimumNumberShouldMatch_1e143afe1894d213,
            mid_buildQuery_304dc2bfaab1873b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommonTermsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommonTermsQuery(const CommonTermsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          CommonTermsQuery(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::BooleanClause$Occur &, jfloat);

          void add(const ::org::apache::lucene::index::Term &) const;
          void collectTermStates(const ::org::apache::lucene::index::IndexReader &, const ::java::util::List &, const JArray< ::org::apache::lucene::index::TermStates > &, const JArray< ::org::apache::lucene::index::Term > &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jfloat getHighFreqBoost() const;
          jfloat getHighFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getHighFreqOccur() const;
          jfloat getLowFreqBoost() const;
          jfloat getLowFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getLowFreqOccur() const;
          jfloat getMaxTermFrequency() const;
          ::java::util::List getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setHighFreqMinimumNumberShouldMatch(jfloat) const;
          void setLowFreqMinimumNumberShouldMatch(jfloat) const;
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
      namespace queries {
        extern PyType_Def PY_TYPE_DEF(CommonTermsQuery);
        extern PyTypeObject *PY_TYPE(CommonTermsQuery);

        class t_CommonTermsQuery {
        public:
          PyObject_HEAD
          CommonTermsQuery object;
          static PyObject *wrap_Object(const CommonTermsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
