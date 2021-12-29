#ifndef org_apache_lucene_search_DoubleValuesSource_H
#define org_apache_lucene_search_DoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SegmentCacheable;
        class SortField;
        class LongValuesSource;
        class IndexSearcher;
        class DoubleValues;
        class Scorable;
        class Explanation;
        class DoubleValuesSource;
        class Query;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class LongToDoubleFunction;
    }
  }
  namespace lang {
    class Class;
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

        class DoubleValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_constant_b9077eda4cd1ff40,
            mid_equals_8b72f2dcdde6fd1d,
            mid_explain_078291bf633e6cdb,
            mid_fromDoubleField_ff23b83f44e75cdf,
            mid_fromField_5710a20d8a6101bd,
            mid_fromFloatField_ff23b83f44e75cdf,
            mid_fromIntField_ff23b83f44e75cdf,
            mid_fromLongField_ff23b83f44e75cdf,
            mid_fromQuery_179ffb190b72be6c,
            mid_fromScorer_cfe0356fda8f3aa7,
            mid_getSortField_8a713675264264ba,
            mid_getValues_1c9eae1e8e48f839,
            mid_hashCode_9972fcc56b44e79d,
            mid_needsScores_8454bd5aa23fd11e,
            mid_rewrite_e1c8cc0c21609653,
            mid_toLongValuesSource_1eae8270233c8b33,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleValuesSource(const DoubleValuesSource& obj) : ::java::lang::Object(obj) {}

          static DoubleValuesSource *SCORES;

          DoubleValuesSource();

          static DoubleValuesSource constant(jdouble);
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::Explanation &) const;
          static DoubleValuesSource fromDoubleField(const ::java::lang::String &);
          static DoubleValuesSource fromField(const ::java::lang::String &, const ::java::util::function::LongToDoubleFunction &);
          static DoubleValuesSource fromFloatField(const ::java::lang::String &);
          static DoubleValuesSource fromIntField(const ::java::lang::String &);
          static DoubleValuesSource fromLongField(const ::java::lang::String &);
          static DoubleValuesSource fromQuery(const ::org::apache::lucene::search::Query &);
          static ::org::apache::lucene::search::DoubleValues fromScorer(const ::org::apache::lucene::search::Scorable &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::DoubleValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          DoubleValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::org::apache::lucene::search::LongValuesSource toLongValuesSource() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(DoubleValuesSource);
        extern PyTypeObject *PY_TYPE(DoubleValuesSource);

        class t_DoubleValuesSource {
        public:
          PyObject_HEAD
          DoubleValuesSource object;
          static PyObject *wrap_Object(const DoubleValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
