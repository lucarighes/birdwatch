#ifndef org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            class CharStream;
            class QueryParserConstants;
            class Token;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {

            class QueryParserTokenManager : public ::java::lang::Object {
             public:
              enum {
                mid_init$_d91dd22f8b94642a,
                mid_init$_f33bbde34bac13f2,
                mid_ReInit_d91dd22f8b94642a,
                mid_ReInit_f33bbde34bac13f2,
                mid_SwitchTo_040c4cd0390c5aff,
                mid_getNextToken_0cee914969d57b66,
                mid_jjFillToken_0cee914969d57b66,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserTokenManager(const QueryParserTokenManager& obj) : ::java::lang::Object(obj) {}

              static JArray< jint > *jjnewLexState;
              static JArray< ::java::lang::String > *jjstrLiteralImages;
              static JArray< ::java::lang::String > *lexStateNames;

              QueryParserTokenManager(const ::org::apache::lucene::queryparser::surround::parser::CharStream &);
              QueryParserTokenManager(const ::org::apache::lucene::queryparser::surround::parser::CharStream &, jint);

              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &) const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &, jint) const;
              void SwitchTo(jint) const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
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
          namespace parser {
            extern PyType_Def PY_TYPE_DEF(QueryParserTokenManager);
            extern PyTypeObject *PY_TYPE(QueryParserTokenManager);

            class t_QueryParserTokenManager {
            public:
              PyObject_HEAD
              QueryParserTokenManager object;
              static PyObject *wrap_Object(const QueryParserTokenManager&);
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
