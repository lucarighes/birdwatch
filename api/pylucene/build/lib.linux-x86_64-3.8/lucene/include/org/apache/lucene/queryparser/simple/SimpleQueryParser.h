#ifndef org_apache_lucene_queryparser_simple_SimpleQueryParser_H
#define org_apache_lucene_queryparser_simple_SimpleQueryParser_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Float;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class BooleanClause$Occur;
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace simple {

          class SimpleQueryParser : public ::org::apache::lucene::util::QueryBuilder {
           public:
            enum {
              mid_init$_5c5c5d33641fe592,
              mid_init$_de518fbba4c05dd3,
              mid_init$_5b801464f8d2e967,
              mid_getDefaultOperator_d2a892ed3bcf0bb6,
              mid_parse_1cf26fcf5e3c5839,
              mid_setDefaultOperator_c065c62de5f8731e,
              mid_newPrefixQuery_1cf26fcf5e3c5839,
              mid_newFuzzyQuery_711c301244722ef0,
              mid_simplify_055fce83b22684f4,
              mid_newDefaultQuery_1cf26fcf5e3c5839,
              mid_newPhraseQuery_711c301244722ef0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleQueryParser(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleQueryParser(const SimpleQueryParser& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static jint AND_OPERATOR;
            static jint ESCAPE_OPERATOR;
            static jint FUZZY_OPERATOR;
            static jint NEAR_OPERATOR;
            static jint NOT_OPERATOR;
            static jint OR_OPERATOR;
            static jint PHRASE_OPERATOR;
            static jint PRECEDENCE_OPERATORS;
            static jint PREFIX_OPERATOR;
            static jint WHITESPACE_OPERATOR;

            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &, jint);

            ::org::apache::lucene::search::BooleanClause$Occur getDefaultOperator() const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setDefaultOperator(const ::org::apache::lucene::search::BooleanClause$Occur &) const;
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
        namespace simple {
          extern PyType_Def PY_TYPE_DEF(SimpleQueryParser);
          extern PyTypeObject *PY_TYPE(SimpleQueryParser);

          class t_SimpleQueryParser {
          public:
            PyObject_HEAD
            SimpleQueryParser object;
            static PyObject *wrap_Object(const SimpleQueryParser&);
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
