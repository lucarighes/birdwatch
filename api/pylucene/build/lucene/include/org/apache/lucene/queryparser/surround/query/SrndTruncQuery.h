#ifndef org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SimpleTerm$MatchingTermVisitor;
          }
        }
      }
    }
  }
}
namespace java {
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class SrndTruncQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_fb4d8c9629702ac6,
                mid_getTruncated_db9b55ba01e03e4b,
                mid_toStringUnquoted_db9b55ba01e03e4b,
                mid_visitMatchingTerms_dbcd50bd393e5e56,
                mid_appendRegExpForChar_7391856c832f59c0,
                mid_truncatedToPrefixAndPattern_f2cc1bce94666404,
                mid_matchingChar_540573ecd04ffc16,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTruncQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndTruncQuery(const SrndTruncQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTruncQuery(const ::java::lang::String &, jchar, jchar);

              ::java::lang::String getTruncated() const;
              ::java::lang::String toStringUnquoted() const;
              void visitMatchingTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::SimpleTerm$MatchingTermVisitor &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyType_Def PY_TYPE_DEF(SrndTruncQuery);
            extern PyTypeObject *PY_TYPE(SrndTruncQuery);

            class t_SrndTruncQuery {
            public:
              PyObject_HEAD
              SrndTruncQuery object;
              static PyObject *wrap_Object(const SrndTruncQuery&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
