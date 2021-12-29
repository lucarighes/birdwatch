#ifndef org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H
#define org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
      namespace search {
        class Query;
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
        namespace complexPhrase {

          class ComplexPhraseQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_32cb72731c50a536,
              mid_parse_1cf26fcf5e3c5839,
              mid_setInOrder_9d72768e8fdce2b7,
              mid_newRangeQuery_ee01989124e5cf67,
              mid_getFieldQuery_3a5baa20d223c529,
              mid_getRangeQuery_ee01989124e5cf67,
              mid_getWildcardQuery_e08cfaa30c1cfbe9,
              mid_getFuzzyQuery_391b6230ae9c102d,
              mid_newTermQuery_3904569060347954,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComplexPhraseQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComplexPhraseQueryParser(const ComplexPhraseQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ComplexPhraseQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setInOrder(jboolean) const;
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
        namespace complexPhrase {
          extern PyType_Def PY_TYPE_DEF(ComplexPhraseQueryParser);
          extern PyTypeObject *PY_TYPE(ComplexPhraseQueryParser);

          class t_ComplexPhraseQueryParser {
          public:
            PyObject_HEAD
            ComplexPhraseQueryParser object;
            static PyObject *wrap_Object(const ComplexPhraseQueryParser&);
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
