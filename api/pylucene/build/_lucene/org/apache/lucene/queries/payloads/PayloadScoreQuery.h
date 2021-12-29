#ifndef org_apache_lucene_queries_payloads_PayloadScoreQuery_H
#define org_apache_lucene_queries_payloads_PayloadScoreQuery_H

#include "org/apache/lucene/search/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        namespace spans {
          class SpanWeight;
        }
        class Query;
        class ScoreMode;
      }
      namespace queries {
        namespace payloads {
          class PayloadFunction;
          class PayloadDecoder;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class PayloadScoreQuery : public ::org::apache::lucene::search::spans::SpanQuery {
           public:
            enum {
              mid_init$_10d8bbbde42901c5,
              mid_init$_88551ee3e821bef9,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getField_db9b55ba01e03e4b,
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

            explicit PayloadScoreQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadScoreQuery(const PayloadScoreQuery& obj) : ::org::apache::lucene::search::spans::SpanQuery(obj) {}

            PayloadScoreQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &);
            PayloadScoreQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &, jboolean);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadScoreQuery);
          extern PyTypeObject *PY_TYPE(PayloadScoreQuery);

          class t_PayloadScoreQuery {
          public:
            PyObject_HEAD
            PayloadScoreQuery object;
            static PyObject *wrap_Object(const PayloadScoreQuery&);
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
