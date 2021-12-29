#ifndef org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
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

            class SrndPrefixQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_d34cb0333a2b441e,
                mid_getLucenePrefixTerm_2f9dcfe885c5ffa0,
                mid_getPrefix_db9b55ba01e03e4b,
                mid_getSuffixOperator_8eea1dd85c3239c3,
                mid_toStringUnquoted_db9b55ba01e03e4b,
                mid_visitMatchingTerms_dbcd50bd393e5e56,
                mid_suffixToString_90aa63c10985f260,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndPrefixQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndPrefixQuery(const SrndPrefixQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndPrefixQuery(const ::java::lang::String &, jboolean, jchar);

              ::org::apache::lucene::index::Term getLucenePrefixTerm(const ::java::lang::String &) const;
              ::java::lang::String getPrefix() const;
              jchar getSuffixOperator() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndPrefixQuery);
            extern PyTypeObject *PY_TYPE(SrndPrefixQuery);

            class t_SrndPrefixQuery {
            public:
              PyObject_HEAD
              SrndPrefixQuery object;
              static PyObject *wrap_Object(const SrndPrefixQuery&);
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
