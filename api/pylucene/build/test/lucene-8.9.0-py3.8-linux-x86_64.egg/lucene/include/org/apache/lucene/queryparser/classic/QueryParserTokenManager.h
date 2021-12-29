#ifndef org_apache_lucene_queryparser_classic_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_classic_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class Token;
          class QueryParserConstants;
          class CharStream;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserTokenManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_94838218118d13bf,
              mid_init$_8181d5836f8e3a35,
              mid_ReInit_94838218118d13bf,
              mid_ReInit_8181d5836f8e3a35,
              mid_SwitchTo_040c4cd0390c5aff,
              mid_getNextToken_292e526b93f036e3,
              mid_jjFillToken_292e526b93f036e3,
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

            QueryParserTokenManager(const ::org::apache::lucene::queryparser::classic::CharStream &);
            QueryParserTokenManager(const ::org::apache::lucene::queryparser::classic::CharStream &, jint);

            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &, jint) const;
            void SwitchTo(jint) const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
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
      namespace queryparser {
        namespace classic {
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

#endif
