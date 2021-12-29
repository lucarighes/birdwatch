#ifndef org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H
#define org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

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
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
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
        namespace classic {

          class MultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_b575256d5b8b6872,
              mid_init$_2e1d58cf85ba8f14,
              mid_parse_624f5f0bd2ccc6fd,
              mid_parse_9b8192354815ff88,
              mid_parse_461e1cdcf28c0718,
              mid_getFieldQuery_da5a988725940811,
              mid_getFieldQuery_3a5baa20d223c529,
              mid_getRangeQuery_ee01989124e5cf67,
              mid_getWildcardQuery_e08cfaa30c1cfbe9,
              mid_getRegexpQuery_e08cfaa30c1cfbe9,
              mid_getPrefixQuery_e08cfaa30c1cfbe9,
              mid_getFuzzyQuery_391b6230ae9c102d,
              mid_getMultiFieldQuery_f5d003a5f0f6b381,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiFieldQueryParser(const MultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
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
          extern PyType_Def PY_TYPE_DEF(MultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(MultiFieldQueryParser);

          class t_MultiFieldQueryParser {
          public:
            PyObject_HEAD
            MultiFieldQueryParser object;
            static PyObject *wrap_Object(const MultiFieldQueryParser&);
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
