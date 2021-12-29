#ifndef org_apache_lucene_queries_function_FunctionScoreQuery_H
#define org_apache_lucene_queries_function_FunctionScoreQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace queries {
        namespace function {
          class FunctionScoreQuery;
        }
      }
      namespace search {
        class IndexSearcher;
        class DoubleValuesSource;
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
      namespace queries {
        namespace function {

          class FunctionScoreQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_ea36782273c32d51,
              mid_boostByQuery_b4687b4eea600b62,
              mid_boostByValue_b862fde5104a843e,
              mid_createWeight_f0ef0b5ea369ac06,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getSource_ccca60747b1553ac,
              mid_getWrappedQuery_cbf839a480265450,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionScoreQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionScoreQuery(const FunctionScoreQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionScoreQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);

            static FunctionScoreQuery boostByQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, jfloat);
            static FunctionScoreQuery boostByValue(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::DoubleValuesSource getSource() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionScoreQuery);
          extern PyTypeObject *PY_TYPE(FunctionScoreQuery);

          class t_FunctionScoreQuery {
          public:
            PyObject_HEAD
            FunctionScoreQuery object;
            static PyObject *wrap_Object(const FunctionScoreQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
